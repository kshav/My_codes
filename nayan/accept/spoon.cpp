#include<iostream>
#include<string>
using namespace std;
int main()
{
    int test,a,b,i,j,k=0,flag=0;
    char st[100][100],ch;
    char check[]={"spoon"};
    cin>>test;
    while(test--)
    {
                 cin>>a>>b;
                 flag=0;
                 for(i=0;i<a;i++)
                 for(j=0;j<b;j++){
                 cin>>ch;
                 ch=tolower(ch);       
                 st[i][j]=ch;}
                 for(i=0;i<a;i++)
                 {
                 k=0;
                 for(j=0;j<b;j++)
                 {
                 if(st[i][j]==check[k])
                 {
                 k++;
                 if(k==5)
                 {
                 flag=1;
                 }
                 }
                 else k=0;
                 }
                 }
                 if(flag==0)
                 {
                 for(j=0;j<b;j++)
                 {
                 k=0;
                 for(i=0;i<a;i++)
                 {
                 if(st[i][j]==check[k])
                 {
                 k++;
                 if(k==5)
                 flag=1;
                 }
                 else
                 k=0;}}}
                 if(flag==1)
                 cout<<"There is a spoon!\n";
                 else
                 cout<<"There is indeed no spoon!\n";
                 
    }
   
    return 0;
}      
            
