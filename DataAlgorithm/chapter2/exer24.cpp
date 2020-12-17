#include <iostream>
#include <vector>

using namespace std;

inline bool isvalid(int pos)
{
    const int max_size = 64;
    
    if((pos <=0) || (pos>max_size))
    {
        cerr << "The position is not proper" << endl;
        return false;
    }
    return true;
}
const vector<int>* getRightVec(int size);
bool getElem(int pos, int & elem);

int main()
{
    int elem;

    if(getElem(8, elem))
    {
        cout << "elem 8 is " << elem << endl;
    }

    if(getElem(88, elem))
    {
        cout << "elem 88 is " << elem << endl;
    }

    if(getElem(12, elem))
    {
        cout << "elem 12 is " << elem << endl;
    }

    if(getElem(64, elem))
    {
        cout << "elem 64 is " << elem << endl;
    }

    return 0;
}

const vector<int>* getRightVec(int size)
{
    static vector<int> seq;
    if(isvalid(size) && size>seq.size())
    {
        for(int i=seq.size()+1;i<=size;i++)
        {
            int elem = (i*(3*i - 1)) / 2;
            seq.push_back(elem);
        }
    }
    return &seq;
}

bool getElem(int pos, int & elem)
{
    if(!isvalid(pos))
    {
        cerr << "This is an invalid position: " << pos << endl;
        // 如果用户用了这个值，而未初始化，就可能出现错误，或者在主函数中初始化
        elem = 0;
        return false;
    }

    const vector<int> *seq = getRightVec(pos);
    elem = (*seq)[pos-1];
    return true;
}

