#include<iostream>
using namespace std;
int main()
{
    int i,j,a=0;
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
        

       if (i==1&&j==1||i==2&&j==1)
      
       cout<<"\t";
      else 
      {
       cout<<a;
        cout<<"   ";
        
        a=a+1; 
        }
        }
        cout<<"\n";
    }
    system("pause");
    return 0;
}
