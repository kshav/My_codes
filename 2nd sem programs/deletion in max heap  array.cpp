#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int a[10],k=0,flag;
 char y;
 for(int i=0;i<10;i++)
 a[i]='\0';
 do
 {
  flag=0;
  int pr=0,ch=k,temp;
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
 cout<<"\n";
 while(k!=0)
 {
 flag=0;
 cout<<a[0]<<" ";
 a[0]=a[--k];
 a[k]='\0';
 int ch=0;
 while(flag==0&&a[2*ch+1]!='\0'&&a[2*ch]!='\0')
 {
  if(a[2*ch+1]>a[2*ch+2]&&a[ch]<a[2*ch+1])
  swap(a[2*ch+1],a[ch]);
  if(a[2*ch+1]<a[2*ch+2]&&a[ch]<a[2*ch+2])
  swap(a[2*ch+2],a[ch]);
  else flag=1;
 };
 };
 getch();
 return 0;
}
  
