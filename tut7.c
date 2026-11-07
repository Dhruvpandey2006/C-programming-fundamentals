#include <stdio.h>

int main()
{
    int a, b;
    a = 3;
    b = 5;

    // Arithmetic operator
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    // printf("a%b=%d\n",a%b);

    // Reational operator

    // Logical operator
    printf("a&&b=%d\n", a && b);
    printf("a||b=%d\n", a || b);
    printf("!(a&&b)=%d\n", !(a && b));
    printf("!(a||b)=%d\n", !(a || b));


    // bitwise operator
    // first they convert the number in bits then they wil work on it
    printf("a&b=%d\n", a & b);
    printf("a|b=%d\n", a | b);
    // XOR or exclusive or operator
    printf("a^b=%d\n", a ^ b);
    printf("~a=%d\n",~a);
    printf("<<%d\n",a<<1);
    printf(">>%d\n",a>>1);




    return 0;
}
