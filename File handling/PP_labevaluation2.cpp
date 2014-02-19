#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    int n,c;
    srand(time(0));
    ofstream fout;
    ifstream fin;
    
    cout<<"How many no. u want to enter: ";
    cin>>n;
    int a[n],f[10];
    float b[n];    
    for(int i=0;i<n;i++)
    {
             c=rand()%100;
             a[i]=c;
    }
    for(int i=0;i<n;i++)
    cout<<"\n"<<a[i];
    for(int i=0;i<10;i++)
    f[i]=0;
    int max=a[0];
    for(int i=0;i<n;i++)
    {  if(a[i]>max)
       max=a[i];   
    }
    cout<<"\nMax= "<<max;
    int min=a[0];
    for(int i=0;i<n;i++)
    {  if(a[i]<min)
       min=a[i];   
    }
    cout<<"\nMin= "<<min;
    int k= max-min;
    for(int i=0;i<n;i++)
    {
       b[i]=(float(a[i]-min))/k;
    }     
    
     for(int i=0;i<n;i++)
    cout<<"\n"<<b[i];
    for(int i=0;i<n;i++)
    {
      if(b[i]>=0 && b[i]<0.1)
      f[0]++;      
      else if(b[i]>=0.1 && b[i]<0.2)
      f[1]++;          
      else if(b[i]>=0.1 && b[i]<0.2)
      f[1]++;          
      else if(b[i]>=0.2 && b[i]<0.3)
      f[2]++;          
      else if(b[i]>=0.3 && b[i]<0.4)
      f[3]++;          
      else if(b[i]>=0.4 && b[i]<0.5)
      f[4]++;          
      else if(b[i]>=0.5 && b[i]<0.6)
      f[5]++;          
      else if(b[i]>=0.6 && b[i]<0.7)
      f[6]++;          
      else if(b[i]>=0.7 && b[i]<0.8)
      f[7]++;          
      else if(b[i]>=0.8 && b[i]<0.9)
      f[8]++;          
      else if(b[i]>=0.9 && b[i]<1)
      f[9]++;
    }             
     
    fout.open("rand_freq.txt",ios::out);
    for(int i=0;i<10;i++)
    {
            fout<<f[i]<<"\n";
    }
    fout.close();
    system("pause");
    return 0;
}
   
    
    
