#include<iostream>
#include<fstream>
using namespace std;

   int main()
{
    char s;
    int u=0;
    int t=0;
    char a[20];
    char ans[10];
    ifstream fin;
    fin.open("in.txt");
    while(!fin.eof())
    {
    fin>>s;
    cout<<s<<" ";
    a[u]=s;
    u++;
    }
    for(int i=0;i<u-1;i++)
    cout<<a[i];
    int l=u-1;
    for(int i=0;i<l;i++)
    {
         if(a[i]==1)
         {ans[t]='e';
         t++;}
         else
         {
             if(a[i+1]==1)
              {ans[t]='a';
               t++;
               i++;}
              else
              {
                 if(a[i+2]==1)
                {ans[t]='c';
                 t++;
                 i=i+2;}
                 else
                {
                  if(a[i+3]==1)
                  {ans[t]='d';
                   t++;
                   i=i+3;}
                   else
                   {ans[t]='b';
                   t++;
                   i=i+4;}
                }
              }
         }
 }
 ofstream fout;
 fout.open("out.txt",ios::app);

 for(int p=0;p<t-1;p++)
 fout<<ans[p];
 fout.close();
                   
 system("pause");
 return 0;
}

    
