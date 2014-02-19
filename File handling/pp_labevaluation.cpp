#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    int n,c;
    srand(time(0));
    ofstream fout;
    ifstream fin;
    fout.open("random.txt",ios::app);
    cout<<"How many no. u want to enter: ";
    cin>>n;
    int a[20][1];
    float sum=0;
    for(int i=0;i<n;i++)
    {
             c=rand()%20;
             sum=sum+c;
             fout<<c<<"\n";
    }
    for(int i=0;i<20;i++)
    a[i][0]=0;
    fout.close();
    float k;
    k=sum/n;
   
    cout<<"\n"; 
    fin.open("random.txt",ios::out);
    for(int i=0;i<n;i++)
    {
            fin>>c;
           cout<<"\n"<<c;
            int j=c;
            a[j][0]++;
   }
   cout<<"\n";
  // for(int i=0;i<20;i++)
 //  cout<<"\n"<<a[i][0];
   int max=a[0][0];
   for(int i=0;i<20;i++)
   { if(a[i][0]>max)
     max=a[i][0];   
   }
    cout<<"\nMean= "<<k<<"\n";
   cout<<"\nMode: "<<max;
   int m;
   m=(max+2*int(k))/3;
   cout<<"\nMedian: "<<m;
   system("pause");
   return 0;
}
   
    
    
