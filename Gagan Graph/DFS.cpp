#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

struct stck{
       int arr[10];
       int top;
}stk;

void push(int a)
{
     stk.top++;
     stk.arr[stk.top]=a;
}

void pop()
{
     cout << stk.arr[stk.top]+1 << " ";
     stk.top--;
}

int main()
{
  int n,source;
    cin >> n;
    int i,j,k;
    
    int adj[n][n];
    bool vis[n];
    int pred[n];
    
    for (i=0;i<n;i++)
        pred[i]=0;
    
    for (i=0;i<n;i++)
        vis[i]=0;
        
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            adj[i][j]=0;
     fstream fin;
    fin.open("matrix.txt");
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            fin >> adj[i][j];
    fin.close();
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
            cout << adj[i][j] << " ";
        cout << "\n";
    }
    
    int tmp;
    stk.top=-1;
    cout<<"Enter source: ";
    cin>>source;
    
    push(source);
     push(0);
    
    while (stk.top>=0){
          j=stk.arr[stk.top];
          pop();
          for (i=n;i>=0;i--)
              if (adj[j][i]==1)
                 push(i);
    }
       
    getch();
    return 0;
}
