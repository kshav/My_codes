#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int a,b;
    srand(time(0));
    ofstream   fout[50];
    char s[]="fil.txt";
    for(int i=0;i<50;i++)
    {
       s[1]=(i/10)+48;
       s[2]=(i%10)+48;
       fout[i].open(s,ios::app);
    }
    for(int i=0;i<1000;i++)
    {
         float c=rand()%1000;
         a=((i/20))/10;
         b=((i%20))%10;
         s[1]=a+48;
         s[2]=b+48;
         fout[a*10+b]<<c;
    }
            
    
    system("pause");
    return 0;
}      
