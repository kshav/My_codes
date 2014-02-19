#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    int n,t=0,a,b,flag=0;
    scanf("%d",&n);
    while(t<n)
    {   flag=0;
        cin>>a>>b;
        char word[a][b];
        for(int i=0;i<a;i++)
        {
          scanf("%s",&word[i]);        
        }
        //cout<<word[1][1]<<" ";
        for(int i=0;i<a;i++)
        {
          for(int j=0;j<b;j++)
          { //cout<<"Hey";
                  if(word[i][j]=='s' || word[i][j]=='S')
                  {// cout<<"Hl";
                      if((word[i][j+1]=='p' || word[i][j+1]=='P')&& j+4<b ) 
                      {
                        if(word[i][j+2]=='o' || word[i][j+2]=='O') 
                        { 
                          if(word[i][j+3]=='o' || word[i][j+3]=='O')
                          {
                            if (word[i][j+4]=='n' || word[i][j+4]=='N') 
                          {
                            printf("There is a spoon!\n");
                            flag=1;
                          }
                          }
                        }
                      }                                       
                      else if((word[i+1][j]=='p' || word[i+1][j]=='P') && i+4<a) 
                      {
                         if(word[i+2][j]=='o' || word[i+2][j]=='O') 
                         {
                          if(word[i+3][j]=='o' || word[i+3][j]=='O')
                          { 
                           if(word[i+4][j]=='n' || word[i+4][j]=='N') 
                           {
                           printf("There is a spoon!\n");
                           flag=1;
                          }
                         }
                      }
                  }
                  if(flag==1)
                  break;
              }
          }
        }
        if(flag==0)
        printf("There is indeed no spoon!\n");
        t++;
    }
        
       system("pause");
        return 0;
}
        
        
        
        
        
        
        
        
        
              
