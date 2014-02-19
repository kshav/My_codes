#include <windows.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    unsigned int counter=0;
    ofstream myfile;
    myfile.open("example.txt");
    while(true)
    {
        if(GetAsyncKeyState(VK_ESCAPE))
        {
            counter++;
            myfile <<"Escape : " <<counter;
            cout<<"Button pressed !"<<endl;
        }
		if(GetAsyncKeyState(VK_F1))
		{
		myfile.close();
		return 0;
		}
        Sleep(100);
    }
    return 0;
}

