#include<iostream>
using namespace std;
char * LongestCommonPrefix(char **str , int i)
{
	int a,b;
	char *ptr = str[0];
for(a=0;str[0][a];a++)
{
 char *out = new char[a];
for(b= 1; b<i ;b++)
if(*ptr != str[b][a])
	break;
if(b==i)
  out[a] = *ptr++;
else
 break;
}
 out[++a] = '\0' ;
 return out;
}
void main()
{
	char *str1[] = {"shash","shank","shashank","sha"};
	char *str2[] = {"ab","abc","def","defgh","sha"};
	cout << LongestCommonPrefix(str1 ,4)<<endl;
        cout << LongestCommonPrefix(str2 ,5)<<endl;
}
