#include <iostream>
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
    int n;
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
    
    /*        
    adj[0][1]=1;
    adj[1][3]=1;
    //adj[2][1]=1;
    adj[3][2]=1;
    */
    
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
    push(1);
    bool cyc=0;
    while (stk.top>=0){
          j=stk.arr[stk.top];
          vis[j]=1;
          tmp=j;
          pop();
          
          
             
          
          for (i=0;i<n;i++){
              if (adj[j][i]==1){
                 
                 if (vis[i]==0){
                    push(i);
                    
                    pred[i]=j;
                 }
                 else if (vis[i]==1){
                      cyc=1;
                      goto x;
                 }
              }
          }
    }
    
    x:
    cout << "\n";
    if (cyc==0){
       cout << "NONE";
    }
    else if (cyc==1){
         cout << j + 1 << " ";
         
         while (j!=i){
             cout << pred[j]+1 << " ";
             j=pred[j];
         }
         
    }     
    
        
    system("pause");
    return 0;
}
