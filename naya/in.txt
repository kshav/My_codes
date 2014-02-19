#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
string stat[10],train[5],source,destination;
int tr[10][10];
stat[1]="agra";
stat[2]="ajmer";
stat[3]="aligarh";
stat[4]="allahabad";
stat[5]="amritsar";
stat[6]="chandigarh";
stat[7]="delhi";
stat[8]="jammu";
stat[9]="kanpur";
train[1]="doranto express";
train[2]="jammu express";
train[3]="mathura express";
train[4]="prayagraj express";
int st[10][10]={0};
st[1][4]=1;tr[1][4]=1;
st[1][9]=1;tr[1][9]=3;
st[1][7]=1;tr[1][7]=1;
st[2][1]=1;tr[2][1]=3;
st[2][4]=1;tr[2][4]=3;
st[2][9]=1;tr[2][9]=3;
st[3][7]=1;tr[3][7]=4;
st[4][3]=1;tr[4][3]=4;
st[4][7]=1;tr[4][7]=4;
st[4][9]=1;tr[4][9]=4;
st[5][8]=1;tr[5][8]=2;
st[6][5]=1;tr[6][5]=2;
st[6][8]=1;tr[6][8]=2;
st[7][6]=1;tr[7][6]=2;
st[7][5]=1;tr[7][5]=1;
st[7][8]=1;tr[7][8]=2;
st[9][4]=1;tr[9][4]=3;
st[9][3]=1;tr[9][3]=1;
st[9][7]=1;tr[9][7]=1;

int i,j=1,src,dest,count=1,color[10]={0},d[10]={0},s[10]={0},q[10],pred[10]={0};
cout<<"enter source ";
cin>>source;
cout<<"\nenter destination ";
cin>>destination;
for(i=1;i<=9;i++)
{
if(source==stat[i])
src=i;
if(destination==stat[i])
dest=i;
}
int sr=src;
while(count<9)
{
count++;
for(i=1;i<=9;i++)
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
if(count<=j)
sr=q[count];
else
break;
}
if(pred[dest]==src)
cout<<"direct path exist";
else
{
string a=stat[dest];
while(dest!=src)
{
cout<<a<<" ";
cout<<stat[pred[dest]]<<" ";
cout<<train[tr[pred[dest]][dest]]<<"\n";
a=stat[pred[dest]];
dest=pred[dest];
}
}
getch();
return 0;
}
