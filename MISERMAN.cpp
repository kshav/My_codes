#include<iostream>
using namespace std;

int max(int a, int b)
{
    if(a<b)
    return a;
    else 
    return b;
}

int maxi(int a, int b,int c)
{
    if(a<=b && a<=c)
    return a;
    else if(b<=a && b<=c)
    return b;
    else
    return c;
}


int main()
{
    int n,m,k,result;
    cin>>n>>m;
    int word[n][m],cal[m];
    for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)
            cin>>word[i][j];
    }
    for(int i=1;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        if(j==0)
        word[i][j]+=max(word[i-1][j],word[i-1][j+1]);
        else if(j==m-1)
        word[i][j]+=max(word[i-1][j],word[i-1][j-1]);
        else
        word[i][j]+=maxi(word[i-1][j],word[i-1][j-1],word[i-1][j+1]);
      }        
    }
    result=word[n-1][0];
    for(int i=0;i<m;i++)
    {
            if(word[n-1][i]<result)
            result=word[n-1][i];
    }
    cout<<result<<"\n";
    system("pause");
    return 0;
}    
