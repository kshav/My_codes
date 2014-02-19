#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j,k,l,b,h;
    cin>>l>>b>>h;
    int ***p=new int**[l];
    for(i=0;i<l;i++)
    {
                    p[i]=new int*[b];
                    for(j=0;j<b;j++)
                    {
                                    p[i][j]= new int[h];
                                    for(k=0;k<h;k++)
                                    {
                                                    cin>>p[i][j][k];
                                    }
                    }
    }
    
    for(i=0;i<l;i++)
    for(j=0;j<b;j++)
    for(k=0;k<h;k++)
      cout<<p[i][j][k];
      
    getch();
    return 0;
}
