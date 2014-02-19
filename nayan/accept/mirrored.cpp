#include<iostream>
using namespace std;
int main()
{
printf("Ready\n");
while(1)
{
string a;
getline(cin,a);
if(a[0]==' '&&a[1]==' ')
break;
else
{
if((a[0]=='p'&&a[1]=='q')||(a[1]=='p'&&a[0]=='q')||((a[0]=='b'&&a[1]=='d')||(a[1]=='b'&&a[0]=='d')))
printf("Mirrored pair\n");
else
printf("Ordinary pair\n");
}
}
return 0;
}
