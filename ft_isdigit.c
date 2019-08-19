#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		return (2048);
	}
	else 
		return (0);
	
}

int main()
{

	printf("Real : %d\n", isdigit(57));
	printf("Mine : %d\n", ft_isdigit(57));
	return (0);
}
