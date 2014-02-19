#include<iostream>
#include<conio.h>
using namespace std;

class matrix
{
      int a[100][100],b[100][100],c[100][100];
      public:
             void putvalue();
             void getvalue();
};

void matrix::putvalue()

{
     for(int i=0;i<100;i++)
     for(int j=0;j<100;j++)
     a[i][j]=0,b[i][j]=0;
     
     a[1][90]=10;
     a[2][10]=70;
     a[5][20]=20;
      b[1][90]=-10;
      b[2][10]=10;
      b[5][20]=50;
      b[7][10]=10;
}

void matrix::getvalue()
{
     for(int i=0;i<100;i++)
     {
     for(int j=0;j<100;j++)
     {
     c[i][j]=a[i][j]+b[i][j];
     if(c[i][j]!=0)
     cout<<"C("<<i<<j<<")="<<c[i][j]<<"\n";
     }
     }
} 

int main()
{
    matrix k;
    k.putvalue();
    k.getvalue();
    getch();
    return 0;
}
          