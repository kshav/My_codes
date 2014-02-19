#include <iostream>
#include <conio.h>
#include<fstream>
using namespace std;
void sw(int& a,int &b)
{
 int t;
 t=a;
 a=b;
 b=t;
}
int part(int  a[],int p,int q)
{
 int x=a[q];
 int i=p;
 for(int j=p;j<=(q-1);j++)
 {
  if(a[j]<=x)
  {
   sw(a[i],a[j]);
   i++;
  }
 }
 sw(a[i],a[q]);
 return(i);
}
void qs(int a[],int p,int q)
{
     if(p<q)
     {
      int r=part(a,p,q);
      qs(a,p,r-1);
      qs(a,r+1,q);
     }
}


int main()
{
          int n,i,c;
         ofstream myfile;
        //myfile.open("inorder.txt",ios::app);    
        
        myfile.open("random.txt",ios::app);
    
        cout<<"enter number of random variable to be genrated  :  ";
        cin>>n;
        
        srand(time(0));
        for(i=0;i<n;i++)
        {
                 c=rand()%20;
                 myfile<<c;       
        }
        myfile.close();
                       
                       ifstream fin;
                       int array[n];
                       fin.open("random.txt",ios::out);
                       fin.seekg(0,ios::beg);
                       while(fin)
                       {
                               fin>>c;
                               array[i]=c;
                               i++;
                       }
                       float sum=0.0f;
                       for(i=0;i<n;i++)
                         sum+=array[i];
                         qs(array,0,n-1);
                        
                        float mean=sum/n;
                        int median=array[n/2]; 
                        
                        cout<<endl<<mean;
                        cout<<endl<<median;     
                        
                        
                        
         
        
        getch();
        return 0;
}


/*ifstream fin[i];
  list<int>v;
  
  for(i=0;i<n;i++)
  {
    fin[i].open(s,ios::out);
    fin[i].seekg(0,ios::beg);   //file is open from beg 
    while(fin)
     {
      fin>>c;
      v.push_back(c);
     }
    v.sort();     //sort the list
  }
   list<int>::iterator pos;
    int sum=0;
    for(pos=v.begin();pos!=v.end();pos++)
        sum+=
    v.clear();
                                     
 return 0;*/
