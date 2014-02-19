#include<iostream>
#include<conio.h>
using namespace std;
main()
{
      int i,j,num,l,m,n;
    float w1,w2,c1,c2,wb,wc,ste;
    w1=w2=wb=wc=0;
    cout<<" number of processes\n";
    cin>>num;
    string a[num];
    int b[num],c[num];
    string s;
    float te[num];
    for(i=0;i<num;i++)
    {
                    cout<<"enter the process and its execution time in seconds\n";
                    cin>>a[i];
                    cin>>te[i];
    }
     for(i=num-1;i>0;i--)
   for(j=0;j<i;j++)
   {
                   if(te[j]>te[j+1])
                   {
                                    ste=te[j];
                                    te[j]=te[j+1];
                                    te[j+1]=ste;
                                    s=a[j];
                                    a[j]=a[j+1];
                                    a[j+1]=s;
                   }
   }
    l=m=n=0;
    b[m++]=l;
    c1=te[l++];
    c[n++]=l;
    c2=te[l++];
    while(l<num)
    {
             c1--;c2--;
             if(c1==0)
             {
                      b[m++]=l;
                      c1=te[l++];
             }
             if(c2==0)
             {
                     c[n++]=l;
                      c2=te[l++];                 
             }
    }
    for(i=0;i<m;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    for(i=0;i<n;i++)
    cout<<c[i]<<" ";
    cout<<"process"<<"   "<<"waiting time"<<endl;
    cout<<b[0]<<"        "<<"0"<<endl;
    cout<<c[0]<<"        "<<"0"<<endl;
    for(i=1;i<m;i++)
    { w1=w1+te[b[i-1]];
    wb=w1+wb+te[b[i-1]];
    cout<<b[i]<<"        "<<w1<<endl;
     }
     for(i=1;i<n;i++)
    { w2=w2+te[c[i-1]];
    wc=wc+w2+te[c[i-1]];
    cout<<c[i]<<"        "<<w2<<endl;
     }
     if((wb+te[b[m-1]])>=(wc+te[c[n-1]]))
     cout<<(wb+te[b[m-1]]);
     else
     cout<<(wc+te[c[n-1]]);
     getch();
      }
