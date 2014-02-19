#include<iostream>
#include<string>
#include<math.h>
using namespace std;
string eras(string s1,int k)
{
       int i=0;
       int l=s1.length();
       for(i=k;i<l;i++)
       {
                       s1[i]=s1[i+1];
       }
       return s1;
}

int main()
{
    int n,t,i;
    string s1;
    int k,k1,l;
    double k2;
    scanf("%d",&t);
    while(t--)
    {
              k=0;
              scanf("%d",&n);
              getchar();
              getline(cin,s1);
              l=s1.length();
              k=l;
              for(i=0;i<l;i++)
              {
                              if(s1[i]==' ')
                              {
                                          s1=eras(s1,i);
                                          k--;
                              }
              }
              //n=s1.length();
              //k=n;
              while(k!=2 || k!=1 || k!=0)
              {
                                   //cout<<s1<<" ";
                                   //cout<<k<<" ";
                                   //system("pause");                    
                                   n=k;
                                   if(k==1 || k==2)
                                   break;
                                   
                                   for(i=n-1;i>=1;i--)
                                   {
                                    k2=log2 (i+1);
                                    //cout<<k2<<" ";
                                    k1=k2;
                                    if(k1==k2)
                                    {
                                              s1=eras(s1,i);
                                              k--;
                                    }
                                   }
                                   s1=eras(s1,0);
                                   k--;
                                   //n=s1.length();
              }
              if(k==2)
              cout<<s1[0]<<" "<<s1[1]<<endl;
              else if(k==1)
              cout<<s1[0]<<endl;
    }
    return 0;
}
                                  
              
