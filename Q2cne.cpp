#include<iostream>
using namespace std;


string manchester(string s)
{ char a=220,b=221,c=223;
  string f;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='0')
	{f+="01";
 //   cout<<a<<b<<c;
   }
	else 
	{f+="10";
//	cout<<c<<b<<a;
    }
    
    
 }cout<<"\n";
 
 cout<<"\n\n\n\n";
  return f;
}

string diff_manchester(string s)
{ char a=220,b=221,c=223;
  string f;
  char last='1';
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='0')
	{
	  if(last=='1')
	  {f+="01";
	//  cout<<a<<b<<c;
	  last='1';}
	  else
	  {f+="10";
	  // cout<<c<<b<<a;
       last='0';}
	}
	else
	{
	  if(last=='1')
	  {
	    f+="10";
	   // cout<<a<<b<<c;
		last='0';
	  }
	  else
	  {
	    f+="01";
	    //cout<<c<<b<<a;
		last='1';
	  }
	}
  }
  return f;
}

int main()
{ int l,m;
  string s,f,k1,k2,g;
  cin>>s;
  l=s.size();
  if(l%2==0)
  {
       m=l/2;
  }
  else
  m=(l-1)/2;
  for(int i=0;i<m;i++)
  k1+=s[i];
  for(int i=m;i<l;i++)
  k2+=s[i];
  //cout<<k1<<"\n"<<k2<<"\n";
       
  f=manchester(k1);

  g=diff_manchester(k2);
  cout<<"\n\n";
  f=f+g;
  cout<<f;
  cout<<"\n\n";
  
  system("pause");
  return 0;
}
