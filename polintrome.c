
#include <stdio.h>
void main()
{
   int n, reverse=0, remainder,temp;
   printf("Enter an integer: ");
   scanf("%d", &n);
   temp=n;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse=reverse*10+remainder;
      temp/=10;
   } 
if(reverse==n) 
      printf("%d is a palindrome number",n);
   else
      printf("%d is not a palindrome number",n);
}
