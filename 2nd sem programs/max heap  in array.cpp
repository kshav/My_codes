#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int a[10],k=0;
 char y;
 for(int i=0;i<10;i++)
 a[i]='\0';
 do
 {
 int flag=0,pr=0,ch=k,temp;
 cout<<"\nenter the no u wnt to enter ";
 cin>>a[k++];
 if (k==1);
 else
 {
 while(flag==0 && ch!=0)
  {
  if(ch%2==0)
  pr=(ch/2)-1;
  else
  pr=ch/2;
  if(a[pr]<a[ch])
  {
    temp=a[pr];
   a[pr]=a[ch];
   a[ch]=temp;
   ch=pr;
  }
  else
  flag=1;
 };
 }
 for(int i=0;i<k;i++)
 cout<<a[i]<<" ";
 cout<<"\n";
 cout<<"\n do you want to add more";
 cin>>y;
 }while(y=='y');
 for(int i=0;i<k;i++)
 cout<<a[i]<<" ";
 getch();
 return 0;
}
  
