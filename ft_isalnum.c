#include <stdio.h>
#include <ctype.h>
int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (8);
	}
	else 
		return (0);
}

int main()
{
	int c;

	c = 1000;
	printf("Real : %d\n", isalnum(c));
	printf("Mine : %d\n", ft_isalnum(c));
	return (0);
}
