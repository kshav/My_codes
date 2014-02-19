#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k,pos,n,f,d=0,flag=0;
    cout<<"enter d no of access to pages\n";
    cin>>n;
    int list[n];
    cout<<"enter d frame size\n";
    cin>>f;
    int frame[f];
    cout<<"enter d order of pages\n";
    for(i=0;i<n;i++)
    cin>>list[i];
    for(j=0;j<f;j++)
    frame[j]=0;
    for(i=0;i<n;i++)
    {
                    flag=0;
                    for(j=0;j<f;j++)
                    {
                                    if(list[i]==frame[j])
                                    {flag=1;
                                     break;
                                    }
                    }
                    if(flag!=1)
                    {                
                                     if(i<f)
                                     {
                                            frame[i]=list[i];
                                            d++;
                                     }
                                     else
                                     {
                                         for(k=0;k<i;k++)
                                         {
                                                            for(j=0;j<f;j++)
                                                            {
                                                             if(frame[j]==list[k])
                                                             pos=j;
                                                             break;
                                                            }
                                         break;
                                         }                                                            }
                                         frame[pos]=list[i];
                                         d++;
                                     }
                    }
    for(j=0;j<f;j++)
    {
    cout<<frame[j];
    }
    cout<<"\n";
    }
    cout<<d;
    getch();
    return 0;
}
