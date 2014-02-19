#include<iostream>
using namespace std;
int main()
{
while(1)
{
string a;
int n,i,j,k=-1,m=0;
cin>>a;
if(a==".")
break;
scanf("%d",&n);
i=a.size();
for(m=0;m<i;m++)
{
k+=1;
for(j=0;j<i*n;j++){
printf("%c",a[k++]);
if(k==i)
k=0;
}
printf("\n");
}
}
return 0;
}
 
