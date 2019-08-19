#include <string.h>
#include <stdio.h>
#include <ctype.h>


int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else 
		return (0);
}


int main()
{
	printf("%d\n", ft_isalpha(65));
	printf("%d\n", isalpha(65));
	return (0);
}
