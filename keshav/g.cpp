#include<iostream>
#include<conio.h>
#include<math.h>
#include<string.h>
using namespace std;
struct address_perm
{
       char city[20];
       char state[20];
       int pin;
};
struct roll
{
 char bnch[4];
 int no;
};
struct book_issue
{
       char title[20];
       char author[20];
       int year;
};

struct lib_info
{
       int slot;
       book_issue book[5];
};
struct stud_info
{
       roll enroll;
       char name[20];
       int year;
       float cgpi;
       address_perm ad;
       lib_info li;
       stud_info *link;
};
stud_info *start,*last,*save,*ptr;
     

void add()                       //to add student
{    
    char ch;        
do
{
     stud_info *newptr;
     newptr=new stud_info;
     cout<<"\n ENTER ENROLLMENT NUMBER   ";
     cout<<"\n\n BRANCH  :  ";
     cin>>newptr->enroll.bnch;
     cout<<"\n NUMBER  :  ";
     cin>>newptr->enroll.no;
     cout<<"\n NAME    :  ";
     cin>>newptr->name;
     cout<<"\n CGPI    :  ";
     cin>>newptr->cgpi;
     cout<<"\n YEAR    :  ";
     cin>>newptr->year;
     cout<<"\n ENTER PERMANENT ADDRESS  ";
     cout<<"\n\n CITY    :  ";
     cin>>newptr->ad.city;
     cout<<"\n STATE   :  ";
     cin>>newptr->ad.state;
     cout<<"\n PINCODE :  ";
     cin>>newptr->ad.pin;
     newptr->li.slot=0;
    for(int i=0;i<5;i++)
     {newptr->li.book[i].title[0]='\0';
     newptr->li.book[i].author[0]='\0';
     newptr->li.book[i].year=0;
     }
     newptr->link=NULL;
     if(start==NULL&&last==NULL)
     start=last=newptr;
     else
      {
         save=start;
         ptr=start;
         while(ptr!=NULL)
         {
          if(ptr->cgpi>newptr->cgpi)
          { 
            if(ptr==last)
             {
             last->link=newptr;
             last=newptr;
             }
            else if(ptr==start)
             {
             newptr->link=start;
             start=newptr;
             }
            else
             {
             save->link=newptr;
             newptr->link=ptr;
             }
            break;
          }  
           save=ptr;
           ptr=ptr->link;
         };
      }
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<" DO you want to continue";
      cin>>ch;
      }while(ch=='y'||ch=='Y');
      }
void display()                             // to display complete student information
{
if(start==NULL)
cout<<" SORRY, NO ENTRY IS THERE ";
else
{
 ptr=start;
 while(ptr!=NULL)
  {
     cout<<"\n ENROLLMENT NUMBER   ";
     cout<<"\n\n BRANCH  :  "<<ptr->enroll.bnch;
     cout<<"\n NUMBER  :  "<<ptr->enroll.no;
     cout<<"\n NAME    :  "<<ptr->name;
     cout<<"\n CGPI    :  "<<ptr->cgpi;
     cout<<"\n YEAR    :  "<<ptr->year;
     cout<<"\n PERMANENT ADDRESS  ";
     cout<<"\n\n CITY    :  "<<ptr->ad.city;
     cout<<"\n STATE   :  "<<ptr->ad.state;
     cout<<"\n PINCODE :  "<<ptr->ad.pin;
     cout<<"\n LIBRARY INFORMATION ";
     cout<<"\n\n SLOT    :  "<<ptr->li.slot;
     int a;
     a=ptr->li.slot;
     for(int i=0;i<a;i++)
     {
     cout<<"\n TITLE   :  "<<ptr->li.book[i].title;
     cout<<"\n AUTHOR  :  "<<ptr->li.book[i].author;
     cout<<"\n YEAR    :  "<<ptr->li.book[i].year;
     }
     ptr=ptr->link;
  };
}
}
void bcheck()                                   //to check total no. of student issuing a particular book
 {
 int n=0;
 ptr=start;
 char title[40];
 if(ptr==NULL)
 cout<<"\n NO ENTRY IS THERE ";
 else
 { cout<<"\n ENTER THE TITLE OF THE BOOK YOU WANT TO CHECK :  ";
   cin>>title;
  while(ptr!=NULL)
  {  
  for(int i=0;i<ptr->li.slot;i++)
   {if(strcmpi(ptr->li.book[i].title,"title")==0)
         n++;
   }
         ptr=ptr->link;
  };
  cout<<"\n TOTAL NUMBER OF STUDENTS ISSUING A BOOK IS "<<n;
 }
}
void lsearch()                              // to check cgpi on binary search
{    int n=1;
     float a;
     
     ptr=start;
     while(ptr->link!=NULL)
     {
      n++;
      ptr=ptr->link;
      
     };
     
     cout<<"\n"<<n;
     cout<<"\n enter cgpi to check";
     cin>>a;
     int beg=1,mid=0,lst=n;
     while(beg<lst)
     { 
       save=start;
       mid=((beg+lst)/2);
       for(int i=1;i<=mid;i++)
        save=save->link;
       if(save->cgpi==a)
       break;
       else if(a>save->cgpi)
         beg=mid+1;
       else
         lst=mid-1;
         };
          cout<<"\n ENROLLMENT NUMBER   ";
     cout<<"\n\n BRANCH  :  "<<save->enroll.bnch;
     cout<<"\n NUMBER  :  "<<save->enroll.no;
     cout<<"\n NAME    :  "<<save->name;
     cout<<"\n CGPI    :  "<<save->cgpi;
     cout<<"\n YEAR    :  "<<save->year;
     cout<<"\n PERMANENT ADDRESS  ";
     cout<<"\n\n CITY    :  "<<save->ad.city;
     cout<<"\n STATE   :  "<<save->ad.state;
     cout<<"\n PINCODE :  "<<save->ad.pin;
     cout<<"\n LIBRARY INFORMATION ";
     cout<<"\n\n SLOT    :  "<<save->li.slot;
     for(int j=0;j<save->li.slot;j++)
       {
         cout<<"\n TITLE   :  "<<save->li.book[j].title;
     cout<<"\n AUTHOR  :  "<<save->li.book[j].author;
     cout<<"\n YEAR    :  "<<save->li.book[j].year;
     }
     }                      
     void bookissue()                    // to issue a particular book
{    char ch;
     do
     {
     if(ptr->li.slot==5)
     {cout<<"\n NO NEW BOOK CAN BE ISSUED ";
     cout<<"\n\n\n PLEASE RETURN THE BOOK TO ISSUE A NEW ONE ";
     }
     else
     {
      ptr->li.slot++;
      cout<<"\n\n ENTER BOOK INFORMATION ";
      cout<<"\n \n ENTER TITLE OF THE BOOK ";
      cin>>ptr->li.book[ptr->li.slot-1].title;
      cout<<"\n\n ENTER AUTHOR OF THE BOOK ";
      cin>>ptr->li.book[ptr->li.slot-1].author;
      cout<<"\n\n ENTER YEAR OF PUBLICATION ";
      cin>>ptr->li.book[ptr->li.slot-1].year;
      }
      cout<<"\n\n DO YOU WANT TO ISSUE MORE ";
      cin>>ch;
      }while(ch=='y');
      }
        void chkroll()                    //to check roll no of the student
{     
      int rl;
     cout<<"\n\n ENTER ROLL FOR WHICH YOU WANT TO ISSUE A BOOK";
     cin>>rl;
     ptr=start;
     while(ptr!=NULL)
     {
     if(ptr->enroll.no==rl)
     break;
     ptr=ptr->link;
     };
}
void retrn()                      // to RETURN THE BOOK
{
       char title[20]; 
       int j;
       cout<<"\n\n ENTER THE TITLE OF THE BOOK YOU WANT TO RETURNED ";
     cin>>title;
     for(int i=0;i<=ptr->li.slot;i++)
     {
                          if(strcmp(ptr->li.book[i].title,title)==0)
             {
             for( j=i;j<=(ptr->li.slot-i);j++)
             {
              strcpy(ptr->li.book[j].title,ptr->li.book[j+1].title);
              strcpy(ptr->li.book[j].author,ptr->li.book[j+1].author);
              ptr->li.book[j].year=ptr->li.book[j+1].year;
              } 
             ptr->li.book[j].title[0]='\0';
             ptr->li.book[j].author[0]='\0';
             ptr->li.book[j].year=0;
             ptr->li.slot--;
             cout<<"\n Book Successfully returned and You have "<<ptr->li.slot<<" books issued under your name";
             }
     }
}
void high()
{
save=start;
ptr=save->link;
while(ptr!=NULL)
{
if(ptr->cgpi>save->cgpi)
save=ptr;
};
}
void becgpi()
{
   float a;
   cout<<" ENTER CUTTOF CGPI ";
   cin>>a;
   ptr=start;
   while(ptr!=NULL)
   {
   if(ptr->cgpi<a)
   { cout<<"\n ENROLLMENT NO  :  "<<ptr->enroll.no;
     cout<<"\n NAME           :  "<<ptr->name;
     cout<<"\n CGPI           :  "<<ptr->cgpi; 
     cout<<"\n PERMANENT ADDRESS  ";
     cout<<"\n\n CITY           :  "<<ptr->ad.city;
     cout<<"\n STATE          :  "<<ptr->ad.state;
     cout<<"\n PINCODE        :  "<<ptr->ad.pin;
   }
   ptr=ptr->link;
   };
} 

void libinfo()
{
     if(ptr->li.slot==0)
     cout<<"\n NO BOOK IS ISSUED ";
     else
     {
         for(int j=0;j<ptr->li.slot;j++)
         {
         cout<<"\n BOOK "<<j+1;
         cout<<"\n TITLE   :  "<<ptr->li.book[j].title;
         cout<<"\n AUTHOR  :  "<<ptr->li.book[j].author;
         cout<<"\n YEAR    :  "<<ptr->li.book[j].year;
     }
}
}
      int main()
      {
   int ch;
    do
    {
        int i,num1;
        float num2;
        system("cls");
   
        cout<<"\n\t\t\t STUDENT MANAGEMENT SYSTEM\n\t\t\t    "; 
        cout<<"-";                                              // Main Menu
        cout<<"\n 1. Enter Student Information ";
        cout<<"\n 2. View Library Info of a Student ";
        cout<<"\n 3. Issue a Book ";
        cout<<"\n 4. Return a Book ";
        cout<<"\n 5. The Highest Scorer ";
        cout<<"\n 6. Search a Student ";
        cout<<"\n 7. Address of Defaulter ";
        cout<<"\n 8. Exit ";
        p:
        cout<<"\n\n\n\n Enter your Choice ";
        cin>>ch;
        
        switch(ch)                                                                                  // Switching as per User Input                                                                                                                                                                                                                                                                                                                                      
        {
                  case 1:     {
                                   add();
                                   break;
                              }
                  case 2:     {    
                                 if(start==NULL)
                                 cout<<"\n\n SORRY WRONG CHOICE ";
                                 else
                                 {
                                  chkroll();
                                  libinfo();
                                  }
                                   break;
                              }
                  case 3:     {
                                   chkroll();
                                   bookissue();
                                   break;
                              }
                  case 4:     {
                                   chkroll();
                                   retrn();
                                   break;
                              }                
                  case 5:     {
                                   high();
                                   break;
                              }
                  case 6:     {
                                  lsearch();                                
                                   break;
                              }
                  case 7:     {    
                                   becgpi();
                                
                                   break;
                              }
                  case 8:     {
                                   cout<<"\n Thank You ";
                                   break;
                              }
                  default:    {
                                   cout<<"\n Sorry!!!! Wrong Choice... Enter Again.... ";
                                   goto p;
                                   break;
                              }
        }
    }while(ch!=8);
    getch();
    return 0;
}
     
