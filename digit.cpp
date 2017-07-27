#include <iostream>
#include <string>
#include <vector>
using namespace std;
string getMinRemoveK(const string& n, int a)
{ 
  string result=n;
if(a<=0)
  return n;
else if(n.size()>0&&n.size()>a )
{
  int k;
for(k=0;k<a;k++)
{
 int digit;
for(digit =0;digit<result.size()-1; digit++)
{
 if( result[digit]>result[digit+1])
{
 result.erase(result.begin() + digit);
  break;
}
}
if( digit==result.size()-1 )
{
  result.erase(result.end()-1);
}
}
}
  return result;
}
void main()
{
	cout << getMinRemoveK("670124", 2) << endl;
	cout << getMinRemoveK("8361957", 3) << endl;
	cout << getMinRemoveK("13", 1) << endl;
	cout << getMinRemoveK("9999", 2) << endl;
	cout << getMinRemoveK("1000", 0) << endl;
	cout << getMinRemoveK("8561357", 3) << endl;
	cout << getMinRemoveK("12311", 1) << endl;
}
