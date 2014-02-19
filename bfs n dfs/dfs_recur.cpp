#include<iostream>
using namespace std;

int dfs(int &num,int arr[100][100],int n,int tick[100])
{      cout<<num<<" ";
       int flags=0;
       for(int i=0;i<n;i++)
       {if(tick[i]==0)
       flags=1;}
       if(flags==0)
       return 0;
       
       for(int i=0;i<n;i++)
       {
          if(arr[num][i]==1 && tick[i]==0)
          {tick[i]=1;
           int j=dfs(i,arr,n,tick);
          }
       }
}
            

int main()
{
    int n,edges,t=0,s,d,k=0,stack[100],flag=0;
    cin>>n;
    int arr[100][100],tick[100];
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
    tick[0]=1;
    int num=0;
    int kh=dfs(num,arr,n,tick);
    cout<<"\n\n";
    cout<<"************************";
    system("pause");
    return 0;
}
                             
               
               
