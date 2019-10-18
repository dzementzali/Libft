/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:37:55 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/15 14:12:19 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*string;
	int		i;

	string = (char *)str;
	i = 0;
	if (c == 0 || !str || !*str || str[0] == '\0')
		return (NULL);
	while (string[i] != '\0' && string[i] != c)
		i++;
	if (string[i] == '\0')
		return (NULL);
	return (&string[i]);
}
