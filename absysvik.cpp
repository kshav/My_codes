#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[10000],b[10000];
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
       getchar();
       cin.getline(a,10000);
       int l,z=0,p=0,i;
       long long int s=0,n=0,r,k;
       l=strlen(a);
       for( i=0;i<l-1;++i)
       {
            if(a[i]=='+')
             { ++z;
             }
           else if(a[i]=='=') 
             { ++z;
              p=0; 
               break;
             }
            if(a[i]=='m'&&z==0)
            {
                 while(1)
                 {
                   if(a[i]=='+')
                     {
                        p=i+2;
                        k=p;
                        break;
                     }
                     ++i;
                 } 
                 break;             
            }
            else if(a[i]=='m')
            break;   
       }
       if(z==0)
       {
               while(1)
               {
                    if(a[p]==' ')
                     break;
                    n=n*10+(a[p]-48);
                    ++p;
               }
               p=p+3;
               while(1)
               {
                    if(p==l)
                     break;
                    s=s*10+(a[p]-48);
                    ++p;
               }
               r=s-n;
               printf("%llu + %llu = %llu\n",r,n,s);
               
        }
       else if(z==1)
        {
            while(1)
               {
                    if(a[p]==' ')
                     break;
                    n=n*10+(a[p]-48);
                    ++p;
               }
              while(1)
              { if(a[p]=='=') 
                break;
                ++p;
              }
              p=p+2;
               while(1)
               {
                    if(p==l)
                     break;
                    s=s*10+(a[p]-48);
                    ++p;
               }
               r=s-n;
                printf("%llu + %llu = %llu\n",n,r,s);
        }
        else
        {
            while(1)
               {
                    if(a[p]==' ')
                     break;
                    n=n*10+(a[p]-48);
                    ++p;
               }
               p=p+3;
                while(1)
               {
                    if(a[p]==' ')
                     break;
                    s=s*10+(a[p]-48);
                    ++p;
               }
             r=s+n;
              printf("%llu + %llu = %llu\n",n,s,r);
        }
    }
}

