#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char** argv)
{
	long val;
	char *ptr;
	
	if (argc < 2)
	{

		printf("Usage: %s <integer>\n", argv[0]);
		return 0;
	}
	val = strtol(argv[1],&ptr,10);
	printf("String value = %s, Int value = %ld\n", argv[1], val);
	return 0;
}
