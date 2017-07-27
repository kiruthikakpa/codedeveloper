#include <stdio.h>
void main()
{
    int base,exp,a = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
while (exp!= 0)
    {
        a *= base;
        --exp;
    }
       printf("Answer is=%d",a);
}
