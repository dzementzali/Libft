void	*ft_memset(void *str, int c, size_t n)
{
	size_t	    i;
	int	*strs;

	strs = (int *)str;	
	i = 0;

	while (i < n)
	{
		strs[i] = c;
		i++;
	}
	return (strs);
}
