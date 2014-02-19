#include<iostream>
using namespace std;
#include<math.h>
void initialize(int node, int start,int end,int array[],int A[])
{
           if (start==end)
           A[node] = array[start];
           else
           {
           int mid = (start+end)/2;
           initialize(2*node,start,mid,array,A);
           initialize(2*node+1,mid+1,end,array,A);
           if (A[2*node]<=A[2*node+1])
           A[node] = A[2 * node];
           else
           A[node] = A[2 * node + 1];
           }
}
int query(int node, int start,int end, int i, int j,int A[])
{
    int id1,id2;
    if (i>end || j<start)
    return -1;
    if (start>=i && end<=j)
    return A[node];
    int mid = (start+end)/2;
    id1 = query(2*node,start,mid,i,j,A);
    id2 = query(2*node+1,mid+1,end,i,j,A);
    if (id1==-1)
    return id2;
    if (id2==-1)
    return id1;
    if (id1<=id2)
    return id1;
    else
    return id2;
}
int main()
{
    int i,j,N;
    int array[1000];
    scanf("%d",&N);
    for (i=0;i<N;i++)
    scanf("%d",&array[i]);
    int x = (int)(ceil(log2(N)))+1;
    int  size = 2*(int)pow(2,x);
    int A[size];
    initialize(1,0,N-1,array,A);
    cout<<"\n";
   // for(i=1;i<26;i++)
    //cout<<A[i]<<" ";
    while (scanf("%d%d",&i,&j)!=EOF)
    printf("%d\n",query(1,0,N-1,i-1,j-1,A));
   system("pause");
}
