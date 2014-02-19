#include<iostream>
using namespace std;
#include<math.h>
struct stud
{
       int info;
       int flag;
};
void initialize(int node, int start,int end,int array[],stud A[])
{
           if (start==end)
           {
           A[node].info = array[start];
           A[node].flag=0;
           }
           else
           {
           int mid = (start+end)/2;
           initialize(2*node,start,mid,array,A);
           initialize(2*node+1,mid+1,end,array,A);
           if (A[2*node].info<=A[2*node+1].info)
           {
           A[node].info = A[2 * node].info;
           A[node].flag=0;
           }
           else
           {
           A[node].info = A[2 * node + 1].info;
           A[node].flag=0;
           }
           }
}
int query(int node, int start,int end, int i, int j,stud A[])
{
    int id1,id2;
    if(A[node].flag>0)
    {
                      A[node].info+=A[node].flag;
                      A[2*node].flag=A[node].flag;
                      A[2*node+1].flag=A[node].flag;
                      A[node].flag=0;
    }
    if (i>end || j<start)
    return -1;
    if (start>=i && end<=j)
    return A[node].info;
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
void update(int node, int start,int end, int i, int j,stud A[])
{
    int id1,id2;
    if(A[node].flag>0)
    {
                      A[node].info+=A[node].flag;
                      A[2*node].flag+=A[node].flag;
                      A[2*node+1].flag+=A[node].flag;
                      A[node].flag=0;
    }
    if (i>end || j<start)
    return ;
    if (start>=i && end<=j)
    {
    A[2*node+1].flag++;
    A[2*node].flag++;
    A[node].info++;
    return;
    }
    int mid = (start+end)/2;
    update(2*node,start,mid,i,j,A);
    update(2*node+1,mid+1,end,i,j,A);
    if (A[2*node].info<=A[2*node+1].info)
    A[node].info = A[2 * node].info;
    else
    A[node].info = A[2 * node + 1].info;
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
    stud A[size];
    for(i=0;i<size;i++)
    A[i].flag=0;
    initialize(1,0,N-1,array,A);
    cout<<"\n";
    while (1)
    {
          cout<<" ************ SEGMENT TREE ************\n\n";
          int  ch;
          cout<<"1.Update\n2.Query\n3.Display\n\nEnter ur choice \n";
          cin>>ch;
          switch(ch)
          {
                    case 1:
                         {
                                                       cout<<"Enter interval ";
                                                       scanf("%d%d",&i,&j);
                                                       update(1,0,N-1,i-1,j-1,A);
                                                       break;
                         }
                    case 2:
                         {
                                                       cout<<"Enter interval where u find minimum ";
                                                       scanf("%d%d",&i,&j);
                                                       printf("%d\n",query(1,0,N-1,i-1,j-1,A));
                                                       break;
                         }
                    case 3:
                         {
                                                       cout<<"Segment Tree :\n";
                                                       for(i=1;i<26;i++)
                                                       cout<<A[i].info<<" "<<A[i].flag<<"\n";
                                                       cout<<"\n\n";
                         }
          }
          
    }
   system("pause");
}
