#include <stdio.h>
#define STRINGSIZE 256

int main(int argc, char *argv[])
{
	char town[STRINGSIZE]="Guildford";
	char country[STRINGSIZE]="Surrey";
	char county[STRINGSIZE]="Great Britiain";
	int population=66773;
	float latitude=51.238599;
	float longitude=-0.566257;
	printf("Town name: %s population%d\n", town, population);
	printf("County: %s\n", county);
	printf("Country: %s\n", country);
	printf("Location long: %f  lat: %f\n", longitude, latitude);
	printf("char = %zu byte int = %zu bytes float = %zu bytes\n",sizeof(char),sizeof(int),sizeof(float));
	printf("memory used: %zu dytes\n", ((STRINGSIZE *3)*sizeof(char))+sizeof(int)+2*sizeof(float));
	return 0;
}
