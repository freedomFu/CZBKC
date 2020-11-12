//
// Created by mac on 2020/11/9.
//
#include <stdio.h>
#include <openssl/x509.h>

int main()
{
    /*unsigned char digest[SHA_DIGEST_LENGTH];
    char string[] = "hello world";

    SHA1((
    unsigned char*)&string, strlen(string), (
    unsigned char*)&digest);

    char mdString[SHA_DIGEST_LENGTH*2 + 1];

    for(int i=0;i<SHA_DIGEST_LENGTH;i++)
    {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    printf("SHA1 digest: %s\n", mdString);*/

    // 获取默认的信任列表
    const char *dir, *dir2, *dir3, *dir4;

    dir = getenv(X509_get_default_cert_dir_env());

    dir2 = X509_get_default_cert_file();
    dir3 = X509_get_default_cert_dir();
    dir4 = X509_get_default_cert_area();

    puts(dir);
    puts(dir2);
    puts(dir3);
    puts(dir4);

    return 0;
}