
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void recur(int adj[][20],int n,int src,int vis[],int pred[])
{
   for(int i=1;i<=n;i++)
   {
         if(adj[src][i]==1&&vis[i]==0)
         {
           vis[i]=1;
           pred[i]=src;
           cout<<i<<" ";
           recur(adj,n,i,vis,pred);
         }
   }
}

int main()
{
   
   int n,a;
   int i,j,k,src,dest,adj[20][20],vis[20]={0},pred[20]={0};
   ifstream fin;
   fin.open("matrix.txt",ios::out);
   cout<<"Matrix Order: ";
   cin>>n;
   
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=n;j++)
     {
        fin>>a;
        adj[i][j]=a;
     }
   }

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
          cout<<adj[i][j]<<" ";
       }
        cout<<"\n";
   }

   cout<<"\nSource: ";
   cin>>src;
   vis[src]=1;
   cout<<"\n"<<src<<" ";
   recur(adj,n,src,vis,pred);
   getch();
   return 0;
}
