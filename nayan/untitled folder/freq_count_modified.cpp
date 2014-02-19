#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;



struct node
{
 char info[2];
 int n;
 node *left;
 node *right;
}*ptr=NULL,*p=NULL,*temp=NULL;    


void bsort(string a[],int b[],int m)
{ 
     for(int i=0;i<m;i++)
    {
            for(int j=0;j<m-1;j++)
            {
                    if(b[j]<b[j+1])
                    {
                       swap(b[j],b[j+1]);
                       swap(a[j],a[j+1]);
                    }
            }
    } 
}

/*void combine( char a[],int b[],int m)
{
     p=new node;
     p->info[0]=a[m-1];
     p->info[1]=a[m];     
     p->left->info[0]=a[m-1];
     p->right->info[0]=a[m];
     b[m-1]=b[m-1]+b[m];
     m--;
}
*/     

void don(string a[],int b[],int &m)
{
   a[m-2]=a[m-2]+a[m-1];
   b[m-2]=b[m-2]+b[m-1];
   m--;
   bsort(a,b,m);
}
   

     





int main()
{
    int l;
    string k;
    cout<<"Enter name: ";
    getline(cin,k);
    l=k.size();
    string a[l];
    int b[l];
  //  a[0]=0;
    for(int i=0;i<l;i++)
    b[i]=1;
  
    int m=0,flag=0;
    for(int i=0;i<l;i++)
    {
      if(k[i]!=' ')
      {      
      if(m==0){
      a[m][0]=k[i];
      m++;}
      else
      {
       flag=0;   
      for(int j=0;j<m;j++)
      {
              if(k[i]==a[j][0])
              {
                  b[j]++;
                  flag=1;                      
              }
      }
              if(flag==0)
              {
                a[m][0]=k[i];
                m++;
              }
      }
    }}
    for(int j=0;j<m;j++)
    cout<<a[j][0]<<" "<<b[j]<<"\n";
    /*cout<<"\n\n";
    for(int j=0;j<m;j++)
    cout<<a[j]<<"   "<<b[j]<<"\n\n";
  
    bsort(a,b,m);
    
    cout<<"\n\n";
    
    for(int j=0;j<m;j++)
    cout<<a<<"   "<<b[j]<<"\n\n";
               
    don(a,b,m);
       cout<<"\n\n";
    
    for(int j=0;j<m;j++)
    cout<<a<<"   "<<b[j]<<"\n\n";
  
    
  
    //combine(a[],b[],m);*/
    
    getch();
    return 0;
}
                               
          
              

