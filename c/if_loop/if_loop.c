#include <stdio.h>

int loop_print(int counter)
{
	printf("Running loop, for run number %d\n",counter);
	return counter;
}

int randnumgen()
{
	int rand_number=0;
	rand_number = rand() % 100;
	printf("Generated Random number %d\n",rand_number);
	return rand_number;
}


void main()
{
	int a = 0;
	int loopctr = 0;
	while( a < 5 ) 
	{
		int randnumber = 0;

		while (randnumber < 20 || randnumber >60)
		{
			printf("111loop\n");
			randnumber = randnumgen();
			printf("222 loop \n");
		}
		printf("Got a random number in range %d, moving on\n", randnumber);
		printf("A = %d\n", a);
		loopctr = loop_print(a);
		printf("return from loop %d\n",loopctr);
		a++;
	}

//        return 0;
}

