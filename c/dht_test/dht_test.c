#include <stdio.h>
#include <stdlib.h>

int randnumgen()
{
	int rand_number=0;
	rand_number = rand() % 100;
	printf("Generated Random number %d\n",rand_number);
	return rand_number;
}

void print_loop(int a, int dht_vals[])
{
        printf("printing inside the print function.  \nA = %i\n dht_return[0] = %i \n dht_return[1] = %i\n", a, dht_vals[0], dht_vals[1]);
}


int * get_randoms()
{
        static int vals[2];
        vals[0]=randnumgen();
        vals[1]=randnumgen();
        return vals;
}


void main()
{
	int a = 0;
	while( a < 5 ) 
	{
                int *dht_return;

                dht_return = get_randoms();


//        printf("111 dht_return[0]= %i \n", dht_return[0]);
//        printf("111 dht_return[1]= %i \n", dht_return[1]);
                print_loop(a, dht_return);


//    		printf("A = %d\n", a);
//              printf("randnumber0= %i \n", randnumber0);
//              printf("randnumber1= %i \n", randnumber1);
//              printf("dht_return[0]= %i \n", dht_return[0]);
//              printf("dht_return[1]= %i \n", dht_return[1]);


		a++;
	}
}

