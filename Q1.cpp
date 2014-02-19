#include<iostream>
using namespace std;

int main()
{
    int year,num,month;
    string mm,dd;
    cout<<"Enter the input in form of \"dd/mm/yyyy\" \n";
    cout<<"Enter date: ";
    cin>>dd;
    cout<<"Enter month: ";
    cin>>mm;
    cout<<"Enter year: ";
    cin>>year;
    num = ( (dd[0]-'0')*10 + (dd[1]-'0') );
    month = ( (mm[0]-'0')*10 + (mm[1]-'0') );
    if( year%100 ==0 )
     {
       if( year%400==0 )
      {
          if(mm=="01" || mm=="03" || mm=="05" ||mm=="07" ||mm=="08" || mm=="10" )
          {
           if(dd=="31")
           {num=1;
            month++;}
           else
           num++;
          }
         if(mm=="04" || mm=="06" || mm=="09" ||mm=="11" )
         {
           if(dd=="30")
           {num=1;
           month++;}
           else
           num++;
         }
         if(mm=="02")
         {
            if(dd=="29")
            {num=1;
            month++;}
            else
            num++;
         }
        if(mm=="12")
         {
            if(dd=="31")
            {num=1;
            month++;
            year++;}
            else
            num++;
         }    
      }
      else
      {
          if(mm=="01" || mm=="03" || mm=="05" ||mm=="07" ||mm=="08" || mm=="10" )
          {
           if(dd=="31")
           {num=1;
            month++;}
           else
           num++;
          }
         if(mm=="04" || mm=="06" || mm=="09" ||mm=="11" )
         {
           if(dd=="30")
           {num=1;
           month++;}
           else
           num++;
         }
         if(mm=="02")
         {
            if(dd=="28")
            {num=1;
            month++;}
            else
            num++;
         }
        if(mm=="12")
         {
            if(dd=="31")
            {num=1;
            month++;
            year++;}
            else
            num++;
         }    
      }
     }
     else if(year%4==0)
     {
          if(mm=="01" || mm=="03" || mm=="05" ||mm=="07" ||mm=="08" || mm=="10" )
          {
           if(dd=="31")
           {num=1;
            month++;}
           else
           num++;
          }
         if(mm=="04" || mm=="06" || mm=="09" ||mm=="11" )
         {
           if(dd=="30")
           {num=1;
           month++;}
           else
           num++;
         }
         if(mm=="02")
         {
            if(dd=="29")
            {num=1;
            month++;}
            else
            num++;
         }
        if(mm=="12")
         {
            if(dd=="31")
            {num=1;
            month++;
            year++;}
            else
            num++;
         }    
      }
      else
      {
          if(mm=="01" || mm=="03" || mm=="05" ||mm=="07" ||mm=="08" || mm=="10" )
          {
           if(dd=="31")
           {num=1;
            month++;}
           else
           num++;
          }
         if(mm=="04" || mm=="06" || mm=="09" ||mm=="11" )
         {
           if(dd=="30")
           {num=1;
           month++;}
           else
           num++;
         }
         if(mm=="02")
         {
            if(dd=="28")
            {num=1;
            month++;}
            else
            num++;
         }
        if(mm=="12")
         {
            if(dd=="31")
            {num=1;
            month++;
            year++;}
            else
            num++;
         }    
      }
      
      mm[0]= (month/10 + '0' );
      mm[1] = (month%10 + '0' );
      dd[0]= (num/10 + '0' );
      dd[1] = (num%10 + '0' );
      
      cout<<dd<<"/"<<mm<<"/"<<year<<"\n";
      system("pause");
      return 0;
}
                               
                     
