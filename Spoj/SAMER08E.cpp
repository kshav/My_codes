#include<iostream>
using namespace std;

int main()
{
    int a,count=0,t=0;
    long long int s=0;
    
    while(t==0)
    { count=0;
      s=0;
      cin>>a;
      if(a==0)
      break;      
      long long int word[a][4];
      for(int i=0;i<a;i++)
      for(int j=0;j<4;j++)
      cin>>word[i][j];
      for(int i=0;i<a-1;i++)
      {
              if(word[i][2]==word[i+1][2])
              {
                  if(word[i][1]==word[i+1][1])
                  {
                      if(word[i][0]+1 == word[i+1][0])
                      {count++;                                           
                       s=s+(word[i+1][3]-word[i][3]);
                      }
                  }
                  else if(word[i][1]+1==word[i+1][1] && word[i][0]==30 && word[i+1][0]==1 && ( word[i][1]==4 || word[i][1]==6 || word[i][1]==9 || word[i][1]==11) ) 
                  { count++;                                           
                    s=s+(word[i+1][3]-word[i][3]);
                  }
                  else if(word[i][1]+1==word[i+1][1] && word[i][0]==31 && word[i+1][0]==1 && ( word[i][1]==1 || word[i][1]==3 || word[i][1]==5 || word[i][1]==7 || word[i][1]==8 || word[i][1]==10 ||word[i][1]==12) )
                  {count++;                                           
                    s=s+(word[i+1][3]-word[i][3]);
                  }
                  else if(word[i][1]+1==word[i+1][1] && word[i][1]==2 && word[i][0]==28 && word[i+1][0]==1 && word[i][2]%4!=0 ) 
                  { count++;                                           
                    s=s+(word[i+1][3]-word[i][3]);
                  }
                  else if(word[i][1]+1==word[i+1][1] && word[i][1]==2 && word[i][0]==29 && word[i+1][0]==1 && word[i][2]%4==0 ) 
                  { count++;                                           
                    s=s+(word[i+1][3]-word[i][3]);
                  }
              }
              else if( word[i][2]+1 == word[i+1][2] && word[i][1]==12 && word[i+1][1]==1 && word[i][0]==31 && word[i+1][0]==1)
              {  count++;                                           
                 s=s+(word[i+1][3]-word[i][3]);
              }
      }
      cout<<count<<" "<<s<<"\n";
    }
    //system("pause");
    return 0;
}                            
     
