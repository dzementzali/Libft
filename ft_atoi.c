int	ft_atoi(char *str)
{
	int i;
	int neg;
	int result;

	i = 0;
	neg = 1;
	result =0;

	while (str[i] == ' ' || str[i] == '\t' || str [i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg = neg * - 1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * neg);
}
