#include<iostream>
#include<algorithm>
#include<fstream>
#include<conio.h>
using namespace std;
int arr[1000][1000];

int main()
{
    int b[6],max=-10000;
    //ifstream fin;
    //fin.open("myfile.txt");
    for(int i=0;i<1000;i++)
    for(int j=0;j<1000;j++)
    cin>>arr[i][j];
    //fin.close();
    for(int i=0;i<=997;i++)
    {
            for(int j=0;j<=997;j++)
            {       
                    b[0]=arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1]+arr[i+1][j]+arr[i+1][j+2];
                    b[1]=arr[i][j]+arr[i][j+1]+arr[i][j+2];
                    b[2]=arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
                    b[3]=arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
                    b[4]=arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2]+arr[i][j+2]+arr[i+2][j];
                    b[5]=arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j];
                     for(int k=0;k<6;k++)
                     {
                             if(max<b[k])
                             max=b[k];
                     }
            
            }
    }
    cout<<max;
    getch();
    system("pause");
    return 0;
}
