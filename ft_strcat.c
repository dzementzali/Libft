#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		++j;
	}	
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "12345";
	char src[] = "6789";
	printf("Ma version : %s\n", ft_strcat(dest, src));
	printf("Real one : %s\n", strcat(dest, src));
	return (0);

}
