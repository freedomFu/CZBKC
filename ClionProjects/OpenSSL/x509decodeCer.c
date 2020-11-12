//
// Created by mac on 2020/11/10.
//
#include <openssl/x509.h>
#include <openssl/pem.h>

int main()
{
    X509 *x;
    FILE *fp;
    unsigned char buf[5000], *p;
    int len;
    BIO *b;

    printf("111\n");

    fp = fopen("111.cer", "rb");
    if(!fp) return -1;

    len = fread(buf, 1, 5000, fp);
    fclose(fp);

    p = buf;
    x = X509_new();

    d2i_X509(&x, (const unsigned char **)&p, len);
    b = BIO_new(BIO_s_file());
    BIO_set_fp(b, stdout, BIO_NOCLOSE);

    X509_print(b, x);
    BIO_free(b);
    X509_free(x);

    /*b = BIO_new_file("1.cer", "r");
    x = PEM_read_bio_X509(b, NULL, NULL, NULL);

    X509_print(b, x);

    BIO_free(b);
    X509_free(x);*/

    return 0;
}
