int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

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
		while (s1[i] == s2[j])
		{
			j++;
			i++;
			if (s2[j] == '\0')
			{
				return (&s1[i - ft_strlen(s2)]);
			}
		}
		i++;
	}
	return(0);
}
