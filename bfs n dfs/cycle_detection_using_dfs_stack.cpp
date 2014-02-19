
#include<iostream>
using namespace std;

void push(int num, int &end , int stack[])
{
     end++;
     stack[end]=num;
     cout<<stack[end]<<" ";
     //cout<<"End= "<<end<<"\n";
}

void pop(int &end ,int stack[])
{
     end--;
     //cout<<"Start= "<<start<<"\n";
}

int main()
{
    int n,edges,t=0,s,d,k=0,stack[100],flag=0,flag2=0;
    cin>>n;
    int arr[n][n],tick[n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    arr[i][j]=0;
    for(int i=0;i<n;i++)
    tick[i]=0;
    cin>>edges;
    int end=-1;
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
    push(0,end,stack);
    tick[0]=1;
    while(end!=-1)
    { flag=1;
      for(int i=0;i<n;i++)
      {
       if(arr[stack[end]][i]==1 && tick[i]!=1)
       {flag=0;
        push(i,end,stack);
        tick[i]=1;
        i=0;
       }
       else if((arr[stack[end]][i]==1 && tick[i]==1 ))
       {flag2=0;
        for(int j=0;j<end-1;j++)
        if(stack[j]==i)
        cout<<"  There is a cycle in graph   ";
       }}
       if(flag==1)
       pop(end,stack);
    }
    cout<<"\n\n";
    cout<<"************************";
    system("pause");
    return 0;
}
                             
               
               
