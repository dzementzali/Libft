#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main()
{
	char *src = "12345";
	char *dest = "6789";
	
	printf("Strlcat : %zu\n", strlcat(src, dest, 3));
	return(0);
}
