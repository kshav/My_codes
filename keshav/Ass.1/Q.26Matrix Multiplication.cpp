#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j,c[3][3],k;
    cout<<"Enter the 1st Matrix:\n";
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    cin>>a[i][j];
    }
    cout<<"\nEnter the 2nd matrix:\n";
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    cin>>b[i][j];
    }
    cout<<"\nTheir Product is as follows:\n";
      for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    c[i][j]=0;
    }
    
    for(i=0;i<3;i++)
    {               
                    cout<<"\n";     
                    for(k=0;k<3;k++)
                    {
                      for (j=0;j<3;j++)
                     {
                       c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
                          
                      } 
                      cout<<c[i][k]<<" ";         
                    }           
                    
                
    
    }
    cout<<"\n\n";
    system ("pause");
    return 0;
}
                     
                          
                         
