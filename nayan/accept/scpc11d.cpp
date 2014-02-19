#include<iostream>
using namespace std;
int main()
{
 long a,b,c;
 cin>>a>>b>>c;
 while(a!=0&&b!=0&&c!=0)
 {
 long d=a*a,e=b*b,f=c*c;
 int flag=0;
 if(a>b&&a>c){
 if(d==e+f){
 flag=1;}}
 else if(b>a&&b>c){
 if(e==d+f){
 flag=1;}}
 else
 if(f==d+e){
 flag=1;}
 if(flag==0)
 cout<<"wrong\n";
 else
 cout<<"right\n";
 cin>>a>>b>>c;
}
return 0;
}
