#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class data
{
      static int count;
      char  movie[20],hero[20],heroine[20],producer[20],director[20];
      public:
             void input();
             int output(char a[]);
};
int data::count=0;
void data::input()
{     if(count==0)
     {
     strcpy(movie,"Fool N Final");
     strcpy(producer,"Keshav");
     strcpy(director,"Nayan");
     strcpy(hero,"gagan kshitij");
     strcpy(heroine,"shivani");
     count++;
     }
     else
     {
     strcpy(movie,"dharm");
     strcpy(producer,"K");
     strcpy(director,"V");
     strcpy(hero,"g");
     strcpy(heroine,"n");
     
     }
} 
int data::output(char a[])
{
    if((stricmp(movie,a))==0)
    {
    cout<<hero;
    return(1);
    }
    else 
    return 0;
}  
int main()
{
    data x,y;
    char a[20];
    x.input();
    y.input();
    cout<<"enter the movie name ";
    cin.getline(a,20);
    int d=0;
    d=x.output(a);
    if(d==1);
    else
    y.output(a);
    getch();
    return 0;
    }

