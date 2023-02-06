#include <stdio.h>
#include <string.h>
int main()
{
	char a[50],b[50];
	printf("Enter 1st string you want to copy: ");
	fgets(a,sizeof(a),stdin);
	strcpy(b,a);
	printf("First string= ");
	puts(a);
	printf("\n Second string= ");
	puts(b);
	return 0;
}
