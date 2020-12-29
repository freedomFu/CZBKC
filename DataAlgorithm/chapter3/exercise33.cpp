#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>

using namespace std;

typedef vector<string> vstring;

void populate_map(ifstream & nameFile, map<string, vstring> & families)
{
    string textline;
    while(getline(nameFile, textline))
    {
        string fam_name;
        vector<string> child;
        string::size_type pos=0, prev_pos=0, text_size = textline.size();

        while((pos=textline.find_first_of(' ', pos)) != string::npos)
        {
            // 计算子字符串的终点
            string::size_type end_pos = pos - prev_pos;

            if(!prev_pos)
            {
                fam_name = textline.substr(prev_pos, end_pos);
            }
            else
            {
                child.push_back(textline.substr(prev_pos, end_pos));
            }
            prev_pos = ++pos;
        }

        if(prev_pos < text_size)
        {
            child.push_back(textline.substr(prev_pos, pos-prev_pos));
        }

        if(!families.count(fam_name))
        {
            families[fam_name] = child;
        }
        else
        {
            cerr << "Oops! We already have a " << fam_name << " family in our map!" << endl; 
        }
    }
}

void display_map(const map<string, vstring> & families, ostream & os)
{
    map<string, vstring>::const_iterator it = families.begin(), end_it = families.end();

    while(it!=end_it)
    {
        os << "The " << it->first << " family ";
        if(it->second.empty())
        {
            os << "has no children" << endl;
        }
        else
        {
            // 打印出vector内的小孩名称
            os << "has " << it->second.size() << " children: ";
            vector<string>::const_iterator iter = it->second.begin(),
                                                end_iter = it->second.end();
            while(iter!=end_iter)
            {
                os << *iter << " ";
                ++iter;
            }
            os << endl;
        }
        ++it;
    }
}

void query_map(const string &family, const map<string, vstring> & families)
{
    map<string, vstring>::const_iterator it = families.find(family);

    if(it==families.end())
    {
        cout << "Sorry. The " << family
        << " is not currently entered." << endl;
        return;
    }
    cout << "The " << family;

    if(!it->second.size())
    {
        cout << " has no children." << endl;
    }
    else
    {
        // 打印出vector内所有小孩的名字
        cout << " has " << it->second.size() << " children: ";
        vector<string>::const_iterator
            iter = it->second.begin(),
            end_iter = it->second.end();

        while(iter!=end_iter)
        {
            cout << *iter << " ";
            ++iter;
        }
        cout << endl;
    }
}

int main()
{
    map<string, vstring> families;
    ifstream nameFile("familes.txt");

    if(!nameFile)
    {
        cerr << "Unable to find families.txt file. Bailing Out!" << endl;
        return -1;
    }

    populate_map(nameFile, families);
    string family_name;

    while(1)
    {
        cout << "Please enter a family name or q to quit ";
        cin >> family_name;

        if(family_name == "q")
        {
            break;
        }
        query_map(family_name, families);
    }
    display_map(families, cout);
    return 0;
}