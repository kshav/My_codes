#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<<string.h>
using namespace std;
const int size=5;
struct book_issued                                                                                  // Info of Book
{
       char author[20];
       char title[30];
       int year;
};
struct lib_info                                                                                     // Library Info
{
       int roll;
       int slot;
       book_issued book[5];
};
struct address                                                                                      // Permanent Address
{
       char city[20];
       char state[20];
       double pin;
};
struct student                                                                                      // Student Profile
{
       int enrol;
       char name[30];
       int year;
       float cgpi;
       address add;
       lib_info lib;
}stud[size];
float arr[size];                                                                                       // Array for CGPI
                                                                                                    // Declaration of Functios 
void input();                                                                                       // For Input
void sort();                                                                                        // For Sorting CGPI
void libinfo(int);                                                                                  // Displaying Library Info
void issue(int);                                                                                    // For Issuing Book
void retrn(int);                                                                                    // For Returning Book
void find(float);                                                                                   // Displaying Address of defaulters for CGPI
int bsearch(float);                                                                                // For Performing Binary Search
void disp(int);                                                                                     

int main()                                                                                          // Main Function
{
    int ch;
    do
    {
        int i,num1;
        float num2;
        system("cls");
        cout<<"\n\t\t\t STUDENT MANAGEMENT SYSTEM ";                                                // Main Menu
        cout<<"\n 1. Enter Student Information ";
        cout<<"\n 2. View Library Info of a Student ";
        cout<<"\n 3. Issue a Book ";
        cout<<"\n 4. Return a Book ";
        cout<<"\n 5. The Highest Scorer ";
        cout<<"\n 6. Search a Student ";
        cout<<"\n 7. Address of Defaulter ";
        cout<<"\n 8. Exit ";
        cout<<"\n\n\n\n Enter your Choice ";          
        
        switch(ch)                                                                                  // Switching as per User Input                                                                                                                                                                                                                                                                                                                                      
        {
                  case 1:     {
                                   input();
                                   break;
                              }
                  case 2:     {    
                                   cout<<"\n Please Enter the Enrollment No. ";
                                   cin>>num1;
                                   libinfo(num1);
                                   break;
                              }
                  case 3:     {
                                   cout<<"\n Please Enter the Enrollment No. ";
                                   cin>>num1;
                                   issue(num1);
                                   break;
                              }
                  case 4:     {
                                   cout<<"\n Please Enter the Enrollment No. ";
                                   cin>>num1;
                                   retrn(num1);
                                   break;
                              }                
                  case 5:     {
                                   cout<<"\n The Highest Scorer(s) is/are ";
                                   for(i=0;i<size;++i)
                                   {
                                     if(stud[i].cgpi==arr[4])
                                     {
                                       disp(i);
                                     }
                                   }
                                   break;
                              }
                  case 6:     {
                                   cout<<"\n Please Enter the CGPI ";
                                   cin>>num2;
                                   bsearch(num2);
                                   break;
                              }
                  case 7:     {    
                                   cout<<"\n Enter the CGPI to be treated as Benchmark ";
                                   cin>>num2;
                                   find(num2);
                                   break;
                              }
                  case 8:     {
                                   cout<<"\n Thank You ";
                                   break;
                              }
                  default:    {
                                   cout<<"\n Sorry!!!! Wrong Choice... Enter Again.... ";
                                   break;
                              }
        }
    }while(ch!=8);
    getch();
    return 0;
}

void input()                                                                                        // Defination for Input Function                                                                       
{
     char ch;
     for(int i=0;i<size;++i)
     {
             cout<<"\n Enter Enrollment Number ";                                   cin>>stud[i].enrol;
             cin.get();
             cout<<"\n Enter Name: ";                                                cin.getline(stud[i].name,30);
             cout<<"\n Enter Year: ";                                                cin>>stud[i].year;
             cout<<"\n Enter CGPI: ";                                                cin>>stud[i].cgpi;
             arr[i]=stud[i].cgpi;
             cout<<"\n Enter Address: ";
             cin.get();      
             cout<<"\n City: ";                                                      cin.getline(stud[i].add.city,20);
             cin.get();
             cout<<"\n State: ";                                                     cin.getline(stud[i].add.state,20);
             cout<<"\n PIN: ";                                                       cin>>stud[i].add.pin;
             stud[i].lib.roll=stud[i].enrol;
             stud[i].lib.slot=0;
             cout<<"\n Has the Student issued any Book (y/n) ";
             cin>>ch;
             while(ch=='y')
             {
               cin.get();
               cout<<"\n Enter Title: ";                                             cin.getline(stud[i].lib.book[stud[i].lib.slot].title,30);
               cin.get();
               cout<<"\n Enter Author: ";                                            cin.getline(stud[i].lib.book[stud[i].lib.slot].author,20);
               cout<<"\n Enter Year: ";                                              cin>>stud[i].lib.book[stud[i].lib.slot].year;
               stud[i].lib.slot++;
               cout<<"\n Anymore..... ";                                             cin>>ch;
             }
     }
     sort();
}

void disp(int n)                                                                                   // Displaying Details of Student
{
     cout<<"\n Enrollment No.: "<<stud[n].enrol;
     cout<<"\n Name: "<<stud[n].name;
     cout<<"\n Year: "<<stud[n].year;
     cout<<"\n CGPI: "<<stud[n].cgpi;
     cout<<"\n Address: \n City: "<<stud[n].add.city<<"\n State: "<<stud[n].add.state<<"\n PIN: "<<stud[n].add.pin;
}

void sort()                                                                                       // For Sorting Array of CGPI
{
       int i,j;
       float temp;
       for(i =0;i<size;++i)
       {
             for(j=i;j<size;++j)
             {
                     if(arr[j]<arr[i])
                     {
                           temp=arr[i];
                           arr[i]=arr[j];
                           arr[j]=temp;
                     }
             }
       }
}

void libinfo(int n)                                                                               // For retrieving Library Database                                                                                  
{
     int i,j;
     for(i=0;i<size;++i)
     {
          if(stud[i].enrol==n)
          {
               cout<<"\n\t\t Library Database of Student ";
               cout<<"\n Enrollment Number: "<<stud[i].lib.roll;
               cout<<"\n Slots Filled: "<<stud[i].lib.slot;
               cout<<"\n The Books Issued by Student ";
               if(stud[i].lib.slot==0)
                          cout<<"\n No Books Issued ";
               for(j=0;j<stud[i].lib.slot;++j)
               {
                    cout<<"\n Book "<<j+1<<endl;
                    cout<<"\n Title: "<<stud[i].lib.book[j].title;
                    cout<<"\n Author: "<<stud[i].lib.book[j].author;
                    cout<<"\n Year: "<<stud[i].lib.book[j].year;
               }
          }
     }
}

void issue(int n)                                                                                 // For Issuing a Book
{
     int i,tp,st;
     for(i=0;i<size;i++)
     {
          if(stud[i].enrol==n)
              tp=i;
     }
     if(stud[tp].lib.slot==5)
          cout<<"\n Sorry!!! The Student, Enrollment No.: "<<stud[i].enrol<<" can't Issue any Book.\n Please return a Book to Issue another. ";
     else
     {
         st=stud[tp].lib.slot;
         cin.get();
         cout<<"\n Enter Title: ";                                                            cin.getline(stud[i].lib.book[st].title,30);
         cin.get();
         cout<<"\n Enter Author: ";                                                           cin.getline(stud[i].lib.book[st].author,20);
         cout<<"\n Enter Year: ";                                                             cin>>stud[i].lib.book[st].year;
         ++stud[tp].lib.slot;
     }
}

void retrn(int n)                                                                                    // For Returning a Book
{
     int i,j,st;
     char a[30];
     for(i=0;i<size;++i)
     {
         if(stud[i].enrol==n)
         {
             j=i;
             st=stud[i].lib.slot;
         }
     }
     for(i=0;i<st;++i)
     {
          cin.get();
          cout<<"\n Enter the Title of Book you want to Return ";                            cin.getline(a,30);
          if(strcmp(a,stud[j].lib.book[i].title)==0)
          {
               stud[j].lib.book[i].title[0]='/0';
               stud[j].lib.book[i].author[0]='/0';
               stud[j].lib.book[i].year=0;
               --stud[i].lib.slot;
               break;
          }
     }
     cout<<"\n Book Successfully returned and You have "<<stud[i].lib.slot<<" books issued under yourt name. ";
}

int bsearch(float cg)                                                                            // Searching a Student by CGPI
{
     int lb=0,ub=size-1,mid;
     while(lb<ub)
     {
          mid=(lb+ub)/2;
          if(cg>arr[mid])
          {
               lb=mid+1;
          }
          else
          {
              if(cg<arr[mid])
              {
                    ub=mid-1;
              }
              else
              {
                  return mid;
              }
          }
     }
}

void find(float cg)                                                                                 // For Finding Defaulters
{
     int i,count;
     cout<<"\n The Students whose CGPI is less than entered CGPI is ";
     for(i=0;i<size;++i)
     {
             if(stud[i].cgpi<cg)
             {
                   disp(i);
                   ++count;
             }
     }
     cout<<"\n The Total number of Defaulters are: "<<count;
}
