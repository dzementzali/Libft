#include <stdio.h>
#include <string.h>

int	ft_verif(char *s1, char *s2, int i, int j)
{
	if(s1[i] == s2[j])
	{
		return (1);
	}
	else 
		return (0);
}

char	*ft_strstr(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
	{
		return (s1);
	}
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] == s2[j])
		{
			j++;
			i++;
			if (s2[j] == '\0')
			{
				return (&s1[i - strlen(s2)]);
			}
		}
		i++;
	}
	return(0);
}
	


int main ()
{
	char s1[] = "abfghmiajklsdnd12miaou34cdghks;lasall";
	char s2[] = "miaou";
	printf("Real : %s\n", strstr(s1, s2));
	printf("Mine : %s\n", ft_strstr(s1, s2));
	return (0);
}
