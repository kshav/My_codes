void becgpi()
{
   float a;
   cout<<" ENTER CUTTOF CGPI ";
   cin>>a;
   ptr=start;
   while(ptr!=NULL)
   {
   if(ptr->cgpi==a)
   { cout<<"\n PERMANENT ADDRESS  ";
     cout<<"\n\n CITY    :  "<<ptr->ad.city;
     cout<<"\n STATE   :  "<<ptr->ad.state;
     cout<<"\n PINCODE :  "<<ptr->ad.pin;
   }
   ptr=ptr->link;
   };
} 
