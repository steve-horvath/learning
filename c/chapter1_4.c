#include <stdio.h>

int main(int argc, char *argv[], char *env[])
{
	int i=0;
	printf("content-type:text/plain\n\n");
	printf("Hello, you are still learining C");
	printf("Number of arguments to the main function: %d\n", argc);
	for(i=0; i<argc; i++)
	{
		printf("argument number %d is %s\n", i, argv[i]);
	}
	i=0;
	printf("environent variables: \n");
	while(env[i])
	{
		printf("env[%d] = %s\n",i,env[i]);
		i++;
	}
}
