
#include <windows.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int counter=0;
	ofstream myfile;
	short prev_escape = 0, curr_escape = 0;
	myfile.open("c:\\example.txt");

	while(true)
	{
		//This if statement is required to ignore key repeat, which causes the return value to increment
		if(GetAsyncKeyState(VK_ESCAPE))
			curr_escape = 1;
		else
			curr_escape = 0;

		//Here we only process on the actual transition 
		//IE when the current value has changed from the previous value
		if(prev_escape != curr_escape)
		{
			
			//Could move counter to the if statement below to only increment on either the press or release
			counter++;

			//Is this a key press, or a key release?
			if(curr_escape){
				myfile <<"Escape pressed : " << counter << endl;
				cout<<"Escape pressed !" << endl;
			}
			else{
				myfile <<"Escape released : " << counter << endl;
				cout<<"Escape released !" << endl;
			}

			prev_escape = curr_escape;
		}
        
	}
	//Close the file on exit, and whatever is buffered gets written to file before the application exits
	myfile.close();
	return 0;
}
