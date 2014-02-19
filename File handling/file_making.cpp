#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    int n,c;
    srand(time(0));
    ofstream fout;
    ifstream fin;
    fout.open("myfile.txt",ios::app);
    cout<<"How many no. u want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
             c=rand()%20;
            fout<<c<<"\n";
    }
    fout.close();
    fin.open("myfile.txt",ios::out);
    while(fin)
    {
            
            fin>>c;
            cout<<"\n"<<c;
    }
    cout<<"\b"<<"  ";
    fin.close();
    
    system("pause");
    return 0;
}
    
    
