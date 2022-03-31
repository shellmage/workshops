#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char buffer[10] = {};
	char role[10] = {};

	printf("Who R U ??\n");
	scanf("%s", buffer);

	if ( strncmp(role, "admin", 5) == 0 )
	{
		printf("MP{Sup3r-s3cret-Fl4g}\n");
	}else
	{
		printf("Nothing to see here :/\n");
	}
}
