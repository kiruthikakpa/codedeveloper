   
#include <stdio.h>  
void main() 
{  
    char ch;
  printf("Enter a Character\n");  
  scanf("%c", &ch);  
if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
{
 printf("%c is an Alphabet\n", ch);  
} 
else 
{  
     printf("%c is Not an Alphabet\n", ch);  
  }  
}
