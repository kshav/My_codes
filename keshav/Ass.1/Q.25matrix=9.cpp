#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,c=0;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>a[i][j];
            if (a[i][j]==9)
            c=c+1;
        }
    }
    cout<<"\n"<<c<<"\n";
    
    system("pause");
    return 0;
}
    
            
    
