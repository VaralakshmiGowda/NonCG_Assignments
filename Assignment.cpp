#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;
int main()
{
	  
       	int pid;
	int i = 1;


	for(;;)
	{
		pid = fork();
		if(pid > 0)
			cout<<" No of concurrent process are :"<<i<<endl;

	
		if(pid == 0)
			i++;
		else
		{
			exit(0);
		}
	}


	return 0;
}
