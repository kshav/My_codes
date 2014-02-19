#include <iostream>
#include <process.h>
#include<windows.h>
int k=0;
using namespace std;

void myFunction( void* number){
     
     int myNumber = *(int*)number;

     cout << "This is prcosses number: " << myNumber << "\n";
      k=0;    
     _endthread();

}

int main(int argc, char *argv[])
{
    int tempNum[10];
	
    for( int i = 0; i <= 9; i++){
         tempNum[i] = i;
         if(i==0)
         {
         _beginthread( myFunction, 0, (void*)&tempNum[i]);
      //WaitForSingleObject(handle,INFINITE);    
    k=1;
    }
    else 
    {
         if(k==0)
         {
                 _beginthread( myFunction, 0, (void*)&tempNum[i]);
                 k=1;
         }
         else
         {
             i--;
             continue;
             }
        }
        }
    system("PAUSE");
    return 0;
}

/*
The new commands introduced here are _beginthread() and _endthread(), both included in process.h. 
_beginthread() takes 3 parameters, first is the function you want to run, in this case myFuntion, 
second is the size of the stack (just set this to 0), and third, any parameter you want to send. 
If no parameters are to be sent, the function still must accept a void* parameter, when actually 
calling _beginthread() set the last parameter to 0. 

Notice the way the parameter is sent. It is converted from what ever type it orginally was to void*, 
this allows any data type to be sent using this function. Also make sure to place the '&' infront 
of the variable, this will pass the memory address the variable points to instead of the value. 
In the function being called by _beginthread() you need to convert any parameters (unless if there 
are none) back to their original data type. Just replace the int in "*(int*)number;" to whatever 
datatype you need, and you can continue using the information as usual. 

_endthread() will terminate the thread, its not necessary to use it since it will automatically be 
called once the function called by _beginthread() ends. 

Each thread doesn't actually run at the exact same time, processor time will be divided up between 
the functions, since it happens so fast, it just seems as if they were all running at the same 
time. When running this code, if the output is not in order, dont worry. Its simply because one or 
more of the processes were not able to get their output written to screen before the next process 
starting writting its own. 
*/
