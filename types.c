#include <stdio.h>
#include <stdbool.h>
  void hello()
    {
        printf("heloo");
    }

int main(int argc, char const *argv[])
{
    int a = 7;
    printf("%d\n", a);
    float b = 3.14;
    printf("%f\n", b);
    char c = 'c';
    printf("%c\n", c);
    double d = 3.145667887;
    printf("%f\n", d);
    bool e = true;
    ;
    if (e)
    {
        printf("Passed");
    }
    printf("\n");
    // unsigned int =  only non negative integers
    unsigned int f = 500;
    printf("%u\n", f);
    // short = smaller range integers
    short g = -20;
    printf("%hd\n", g);
    // integer with atleast the range of int
    long h = 7557859839L;
    printf("%ld\n", h);
    // long long very large integr
    long long i = 8795578765794LL;
    printf("%lld\n", i);
    // long double = high precision floating point
    long double j = 3.14667777876845645;
    printf("%LF\n",j);
    // this function dosent return a value
    hello();
    printf("\n");
    // small positive or negative integers
    signed char k = -32;
    printf("%d\n",k);
    //small non negative integr
    unsigned char  l = 50;
    printf("%u\n",l);
    // unsigned short non negative integrs
    unsigned short m = 50000;
    printf("%hu\n",m); 
    long int n = 100000l;
    printf("%ld\n",n);
    // unsigned long int  non negative long integer;
    unsigned long int p  = 1000000UL;
    printf("%lu\n",p);
    






   

    return 0;
}
