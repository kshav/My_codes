#include<iostream>
using namespace std;

int min(int a,int b)
{
  if(a>b)
  return b;
  else
  return a;
}

int main()
{
    int n,m,k,result,t=0,sum;
    cin>>n;
    while(t<n)
    {
    cin>>m;
    int word[m][3];
    for(int i=0;i<m;i++)
    {
            for(int j=0;j<3;j++)
            cin>>word[i][j];
    }
    if(m==1)
    {
      result=word[0][0];
     for(int i=0;i<3;i++)
     {
             if(word[0][i]<result)
            result=word[0][i];
     }
    }
    else if(m==2)
    {
      result=word[0][0];
      for(int i=0;i<3;i++)
      {
             if(word[0][i]<result)
             result=word[0][i];
      }
      sum=result;
      result=word[1][0];
      for(int i=0;i<3;i++)
      {
             if(word[1][i]<result)
             result=word[1][i];
      }
      sum+=result;
      result=sum;
    }
    else{      
    for(int i=1;i<m;i++)
    {
      for(int j=0;j<3;j++)
      {
        if(j==0)
        word[i][j]+=min(word[i-1][j+1],word[i-1][j+2]);
        else if(j==2)
        word[i][j]+=min(word[i-1][j-1],word[i-1][j-1]);
        else
        word[i][j]+=min(word[i-1][j-1],word[i-1][j+1]);
      }        
    }
    result=word[m-1][0];
    for(int i=0;i<3;i++)
    {
            if(word[m-1][i]<result)
            result=word[m-1][i];
    }}
    cout<<result<<"\n";
    t++;
}
    system("pause");
    return 0;
}    



