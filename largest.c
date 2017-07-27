#include <stdio.h>
void main()
{
   int a1,a2,a3;
   printf("Enter three different numbers: ");
   scanf("%d%d%d",&a1,&a2,&a3);
if( a1>=a2 && a1>=a3 )
        printf("%d is the largest number.", a1);
if(a2>=a1 && a2>=a3)
        printf("%d is the largest number.", a2);
if( a3>=a1 && a3>=a2)
        printf("%d isthe largest number.", a3);
}
