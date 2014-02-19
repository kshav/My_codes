#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<cmath>
#include<algorithm>
#include<cassert>
#include<iostream>
#include<queue>
using namespace std;
int land(int N, int M, char A[501][501]);
int color[501][501]; 
int cnt;
int main() {
    int T;
    scanf("%d\n", &T);
    while(T--) {
        int N, M;
        char matrix[501][501];
        scanf("%d %d\n", &N, &M);

        for (int i = 0; i < N; i++){
            gets(matrix[i]);
        }
        printf("%d\n", land(N, M, matrix));
    }
    return 0;
}

void dfs(int i, int j , char A[501][501])
{   int row=i,column=j;
    if(A[i][j]=='L' && color[i][j]==0)
    {color[i][j]=1;
     cnt++;
    
    dfs(row-1,column,A);
    dfs(row,column-1,A);
    dfs(row,column+1,A);
    dfs(row+1,column,A);
    }
} 

int land(int N, int M, char A[501][501]) {
   int roll=1,i=0,j=0,max=0;
   for(i-0;i<501;i++)
   for(j=0;j<501;j++)
   color[i][j]=0;
   
   for(i=0;i<N;i++)
   {
     for(j=0;j<M;j++)
     {
        if(A[i][j]=='L' && color[i][j]==0)
        {  cnt=0;
          dfs(i,j,A); 
          if(cnt>max)
          max=cnt;
        }
     }
   }
  // cout<<roll<<"\n";
  
  return max;
}
