#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int st[5][5]={0},i,color[5]={0},q[5]={0},pred[5]={0},count=1,sr,dest,d[5]={0},j=1;
    st[1][2]=1;
    st[2][4]=1;
    st[3][2]=1;
    st[4][1]=1;
    cin>>sr;
    cin>>dest;
   while(count<4)
   {
   count++;
   for(i=1;i<=4;i++)
   {
   if(st[sr][i]==1&&color[i]==0)
   {
   d[i]=d[sr]++;
   color[i]=1;
   q[++j]=i;
   pred[i]=sr;
   }
   }
   color[sr]=2;
   sr=q[count];
   cout<<sr<<" ";
   }
   cout<<pred[dest];
   getch();
   return 0;
}
