#include<iostream>
using namespace std;

int main()
{
    int t=0,k[4],l[4],max,m,flag;
    while(t==0)
    {
        for(int i=0;i<4;i++)
        cin>>k[i];
        for(int j=0;j<4;j++)
        cin>>l[j];
        
        if(l[0]==-1 && l[1]==-1 && l[2]==-1 && l[3]==-1 && k[0]==-1 && k[1]==-1 && k[2]==-1 && k[3]==-1)
        break;
        else if(k[0]==0 && k[1]==0 && k[2]==0 && k[3]==0)
        cout<<"0 0 0 0 ";
        else
        {for(int i=1;;i++)
        {  flag=0; 
           for(int j=0;j<4;j++)
           {
            if(i*l[j]<k[j])
            {
             flag=1;
            }
           }
            if(flag==0)
            {m=i;
            break;}
        }
           for(int i=0;i<4;i++)
           cout<< (m*l[i])- k[i]<<" ";
        }        
           cout<<"\n";
                  
        
    }
    //system("pause");
    return 0;
}
                              

