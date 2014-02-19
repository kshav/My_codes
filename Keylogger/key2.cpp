#include <windows.h>
#include <stdio.h>

int main()
{
    unsigned int counter=0;
    FILE* myfile = fopen("example.txt","wb");
    while(true)
    {
        if(GetAsyncKeyState(VK_ESCAPE))
        {
			freopen("example.txt","ab",myfile);// Check out what this ab and wb stand for ??
            counter++;
			fprintf(myfile,"Escape : %d",counter);
            printf("Button pressed !\n");
			//fclose(myfile);
        }
      Sleep(100);
    }
    return 0;
}

