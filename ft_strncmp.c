#include <string.h>
#include <stdio.h>

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]) && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char s1[] = "tes1t r";
	char s2[] = "tes8ta ";
	printf("Mine : %d\n", ft_strncmp(s1, s2, 100));
	printf("Real : %d\n", strncmp(s1, s2, 100));
}
