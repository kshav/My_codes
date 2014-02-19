#include<iostream>
#include<string.h>
using namespace std;

int main()
{ long long int n,l,i;
   int k,flag=0,flag1=0; 
    string a;
    scanf("%lld",&l);
    while(l--){
    cin>>a;
    n= a.size();
    flag1=0;
    flag=0;
    for(i=0;i<n;i++)
    {if(a[i]!='9')
    {flag=1;
    break;}}
    if(flag==0)
    {cout<<"1";
     for(int i=0;i<n-1;i++)
     cout<<"0";           
     cout<<"1"<<"\n";
    }
    else
    {//cout<<"HELK\n";               
    if(n%2==0)
     {for (i=(n-2)/2;i>=0;i--)
      {
          if(a[i]!=a[n-i-1])
          {flag1=1;
           break;}}
           for (i=(n-2)/2;i>=0;i--)
              {if(a[n-i-1]!=a[i])
               {if(a[i]>a[n-i-1])              
               a[n-i-1]=a[i];
               else if(a[i]<a[n-i-1])
               {a[i]++;
               a[n-i-1]=a[i];}}
               if(flag1==0)
               {if(a[(n-2)/2]!='9')
               {a[(n-2)/2]++;
               a[n-((n-2)/2)-1]++;}
               else{a[(n-2)/2]=a[n-((n-2)/2)-1]='0';
               k=1;
               while(a[(n-2)/2-k]=='9')
               {a[(n-2)/2-k]='0';
               k++;}
               a[(n-2)/2-k]++;}
               flag1=1;}}
     }
    else
    {
         int flag2=0;
         for (i=((n-1)/2)-1;i>=0;i--)
         {if(a[i]!=a[n-i-1])
         {flag2=1;
         break;}}
         if(flag2==0)
         {if(a[((n-1)/2)-1]!='9')
          a[((n-1)/2)]++;
          else
          {  cout<<"HI";
              a[(n-1)/2]='0';
           k=1;
           while(a[(n-1)/2-k]=='9' && ((n-1)/2-k)>=0 )
           {a[(n-1)/2-k]='0';
           a[n -((n-1)/2-k)-1]='0';
           k++;}
           a[(n-1)/2-k]++;}
           for(i=((n-1)/2)-1;i>=0;i--)
            {if(a[n-i-1]<a[i])
           a[n-i-1]=a[i];
           else if (a[n-i-1]>a[i])
           { a[i]++;
             a[n-i-1]=a[i];}}}
         else{
            //  a[((n-1)/2)-1]='0';
         for(i=((n-1)/2)-1;i>=0;i--)
         {
           if(a[n-i-1]<a[i])
           a[n-i-1]=a[i];
           else if (a[n-i-1]>a[i])
           { a[i]++;
             a[n-i-1]=a[i];}}}}
    for(int i=0;i<n;i++)
    cout<<a[i];
    cout<<"\n";
    }
    }
     system("pause");    
     return 0;
              
}
        
          

