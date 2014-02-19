#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class point
{
      float x,y;
      public:
             void create();
             float distance (point p, point s);

};

void point::create()
             {
                  cout<<"Enter the x-coordinate: ";
                  cin>>x;
                  cout<<"Enter the y-coordinate: ";
                  cin>>y;
             }
 
  float point::distance(point p,point s)
{             
       float d;
       d=sqrt(((p.x-s.x)*(p.x-s.x))+((p.y-s.y)*(p.y-s.y)));
       return d;
}       
            
            
 int main()
{
    point p1,p2,p;
    float d;
    cout<<"For Point 1:\n";
    p1.create();
    cout<<"\nFor Point 2:\n";
    p2.create();
    d=p.distance(p1,p2);
    cout<<"\n\nThe distance between p1 & p2: "<<d;
    getch();
    return 0;
} 

 
