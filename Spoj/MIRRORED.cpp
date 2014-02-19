#include<iostream>
using namespace std;

int main()
{
    int l1,l2,l3;
    char a,b;
    int k=0;
    
    cout<<"Ready\n";
    while(k==0)
   {
             l1=getchar();
             l2=getchar();
             if(l1==10 && l3==10 || l1==32 && l3==32 || l1==10 && l2==10 || l1==32 && l2==32 )
             break; 
             a=char(l1);
             b=char(l2);
             if(a=='p'&& b=='q' || b=='p'&& a=='q' || a=='b'&& b=='d' || a=='d'&& b=='b' )
             cout<<"Mirrored pair\n";
             else
             cout<<"Ordinary pair\n";
             l3=getchar();
               
   }
   

   return 0;
}
