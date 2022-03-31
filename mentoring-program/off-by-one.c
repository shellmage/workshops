#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char name[10] = {'\0'};
	char flag[] = "MP{Sup3r-s3cret-Fl4g}";

	printf("What's UR name ??\n");
	read(0, name, 10);

	printf("Hello, %s\n", name);
}
