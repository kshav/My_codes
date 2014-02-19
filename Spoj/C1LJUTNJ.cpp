#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int m,n,diff,p,q,pos,num,factor,flag=0,temp;
    cin>>m>>n;
    long long int array[n];
    for( int i=0;i<n;i++)
    cin>>array[i];
    sort(array,array+n);
   /* cout<<"\n\n";
    for( int i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<"\n";
   */ 
    while(m>0)
    {
       q=array[n-1];
       p=array[n-2];
       pos=n-2;
       int i=3;
       while(p==q && pos>0)
       {  // cout<<"Hey";
           p=array[n-i];
           pos=n-i;
           i++;
       }
       flag=0;
       temp=array[0];
       for(int i=1;i<n;i++)
       {
               if(temp!=array[i])
               {flag=1;
               break;}
       }
       if(flag==0)
       {   //cout<<"Flag\n";
           num=n;
           factor = m/num;
           for(int j=i;j<=n-1;j++)
           array[j]=array[j]-factor;
           m=m-num*factor;
         /*  cout<<"\n\n";
            for( int i=0;i<n;i++)
            cout<<array[i]<<" ";
            cout<<"\n";        
           cout<<"NOW M: "<<m<<"\n"; 
          */ for(int k=m;k>0;k--)
           {
                   array[n-m-1+k]--;
           }
           m=0;       
        /*   cout<<"\n\n";
            for( int i=0;i<n;i++)
            cout<<array[i]<<" ";
            cout<<"\n";
            cout<<"After Now M: "<<m<<"\n";         
       */} 
       diff = q-p;
      // cout<<"DIFF: "<<diff<<"\n";
               
       num = n-1-pos;
      // cout<<"NUM: "<<num<<"\n";
      // cout<<"Hello";
       if(num*diff<m)
       {
        //   cout<<"IF\n";          
           for(int j=pos+1;j<=n-1;j++)
           array[j]=array[j]-diff;
           m=m-num*diff;
          /* cout<<"\n\n";
           for( int i=0;i<n;i++)
           cout<<array[i]<<" ";
           cout<<"\n";
           cout<<"M: "<<m<<"\n";
     */ }
       else
       {
          // cout<<"Else\n";
           factor = m/num;
           for(int j=pos+1;j<=n-1;j++)
           array[j]=array[j]-factor;
           m=m-num*factor;
        /*   cout<<"\n\n";
            for( int i=0;i<n;i++)
            cout<<array[i]<<" ";
            cout<<"\n";        
           cout<<"M: "<<m<<"\n"; 
         */ for(int k=m;k>0;k--)
           {
                   array[n-m+1-k]--;
           }
           m=0;       
          /* cout<<"\n\n";
            for( int i=0;i<n;i++)
            cout<<array[i]<<" ";
            cout<<"\n";
            cout<<"M: "<<m<<"\n";
      */}
      cout<<"\n\n";
     for( int i=0;i<n;i++)
     cout<<array[i]<<" ";
     cout<<"\n";
    cout<<"M: "<<m<<"\n";
    }
    cout<<"OUT\n";
    cout<<"\n\n";
    for( int i=0;i<n;i++)
    cout<<array[i]<<" ";
    cout<<"\n";
    system("Pause");
    return 0;
}
           
                                
