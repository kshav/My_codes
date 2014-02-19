#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class data
{
      char a[5][20];
      public:
       void input();
            void output(char c[]);
};

void data::input()
{
     strcpy(a[0],"AP12 3423");
     strcpy(a[1],"BH45 431");
     strcpy(a[2],"KN63 355");
     strcpy(a[3],"UP70 6533");
     strcpy(a[4],"UP92 3423");
}

void data::output(char c[])
{
     for(int i=0;i<=4;i++)
     {
     if((a[i][0]==c[0]) && (a[i][1]==c[1]))
     cout<<a[i]<<"\n";
    }
}

int main()
{
    data x;
    x.input();
    char c[20];
    cout<<"Enter the state code";
    cin>>c;
    x.output(c);
    getch();
    return 0;
}
    
            
                      