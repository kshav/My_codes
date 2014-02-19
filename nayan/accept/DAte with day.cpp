#include<iostream>
using namespace std;
int dow(int y, int m, int d)
   {
       static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
       y -= m < 3;
       return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
   }
int main()
{
    int test,d,m,y,c,sum,w;
    float f;
    //cin>>test;
  //  while(test--)
   // {
    cin>>d>>m>>y;
    sum=dow(y,m,d);
    w=sum%7;
    switch(w)
    {
             case 0:{cout<<"Sunday\n";break;}
             case 1:{cout<<"Monday\n";break;}
             case 2:{cout<<"Tuesday\n";break;}
             case 3:{cout<<"Wednesday\n";break;}
             case 4:{cout<<"Thursday\n";break;}
             case 5:{cout<<"Friday\n";break;}
             case 6:{cout<<"Saturday\n";break;}
    }
   // }
   // system("pause");
    return 0;
}
