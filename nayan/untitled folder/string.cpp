#include<iostream>
#include<conio.h>
#include<fstream>
#include<io.h>
using namespace std;
int main()
{
char a[64][3],f[3];
int b[64],m=0,n=0;
char v[5]="acgt";
for(int i=0;i<=3;i++)
{
 for(int j=0;j<=3;j++)
 {
 for(int k=0;k<=3;k++)
 {
  a[m][0]=v[i];
  a[m][1]=v[j];
  a[m][2]=v[k];
  m++;
 }
}
}
for(int i=0;i<64;i++){
for(int j=0;j<3;j++)
cout<<a[i][j]<<" ";
cout<<"\n";
}/*
ifstream fin;
char c,d,e;
fin.open("nayan.txt");
fin>>c;
fin>>d;
fin>>e;
a[0][0]=c;
a[0][1]=d;
a[0][2]=e;
cout<<a[0];*/
getch();
return 0;
}
