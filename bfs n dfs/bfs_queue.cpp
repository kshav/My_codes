#include<iostream>
using namespace std;

void push(int num, int &end , int queue[])
{
     queue[end]=num;
     end++;
     //cout<<"End= "<<end<<"\n";
}

void pop(int &start ,int queue[])
{
     cout<<queue[start]<<" ";
     start++;
     //cout<<"Start= "<<start<<"\n";
}

int main()
{
    int n,edges,t=0,s,d,k=0,queue[100];
    cin>>n;
    int arr[n][n],tick[n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    arr[i][j]=0;
    for(int i=0;i<n;i++)
    tick[i]=0;
    cin>>edges;
    int start=0;
    int end=0;
    while(t<edges)
    {   cout<<"Source: ";
        cin>>s;
        cout<<"Dest: ";
        cin>>d;
        cout<<"\n";
        arr[s-1][d-1]=1;
        arr[d-1][s-1]=1;
        t++;
    }
    push(0,end,queue);
    tick[0]=1;
    while(start!=end)
    {
      for(int i=0;i<n;i++)
      {if(arr[queue[start]][i]==1 && tick[i]!=1)
       {push(i,end,queue);
        tick[i]=1;}}
      pop(start,queue);
    }
    cout<<"\n\n";
    cout<<"************************";
    system("pause");
    return 0;
}
                             
               
               
