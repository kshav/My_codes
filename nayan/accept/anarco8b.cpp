#include<iostream>
#include<string>
using namespace std;
int func(int n)
{
     switch(n)
     {
     case  63:return 0;
     case  10:return 1;
     case  93:return 2;
     case  79:return 3;
     case 106:return 4;
     case 103:return 5;
     case 119:return 6;
     case  11:return 7;
     case 127:return 8;
     case 107:return 9;
     }
}
string value(int n)
{
    switch(n)
    {
     case  0:return "063";
     case  1:return "010";
     case  2:return "093";
     case  3:return "079";
     case  4:return "106";
     case  5:return "103";
     case  6:return "119";
     case  7:return "011";
     case  8:return "127";
     case  9:return "107";
     }
}   
int main()
{
    string a;
    long long int i=0,j=0,k=0,sum;
    cin>>a;
    while(a!="BYE")
    {
      k=0,i=0,j=0;
      while(a[k]!='+')
        {
        i=i*10+func((a[k]-48)*100+(a[k+1]-48)*10+(a[k+2]-48));
        k+=3;
        }
        k++;
        while(a[k]!='=')
        {
        j=j*10+func((a[k]-48)*100+(a[k+1]-48)*10+(a[k+2]-48));
        k+=3;
        }
        sum=i+j;
        cout<<a;
        a.clear();
        while(sum!=0)
        {
        a+=value(sum%10);
        sum/=10;
        }
        for(i=a.size()-3;i>=0;i-=3)
        cout<<a[i]<<a[i+1]<<a[i+2];
        cout<<"\n";   
        a.clear();          
        cin>>a;
    }
    return 0;
}           
