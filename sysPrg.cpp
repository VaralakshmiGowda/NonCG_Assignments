#include<iostream>
#include<sys/wait.h>
#include<unistd.h>

using namespace std;

int main(int argc, char **argv )
{
	int i;
	int N;
	N=fork();
	if(N>0)
	{
		for(i=0;i<2*N;i++)
		{
			if( i %2==0)

				cout<<i<<" ";
		}
		cout<<"Parent Process\n";
		cout<<"Even Num "<<i<<endl;
	}
	else{
		for(i=0;i<2*N;i++)
		{
			if( i%2!=0)

				cout<<i<<" ";
		}
		cout<<"Child Process\n";
		cout<<"Odd number"<<i<<endl;
	}
}
