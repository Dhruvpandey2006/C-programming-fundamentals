#include <stdio.h>
#define PI 3.14
int main()
{
    int a = 7;
   const float b = 3.1444;
   printf("%f\n",PI);
    //printf("The value of a is %d and the value of b is %-10.6f this\n", a, b);
    //printf("The value of a is %d and the value of b is %10.6f\n", a, b);
    printf("The value of a is \\n%d and the value of b is %10.6f\n", a, b);
    printf("The value of a is \t\t%d and the\a value of b is %10.6f\n", a, b);
   //b = 6; cannot do this becoz b is a constant


    return 0;
}