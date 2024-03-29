/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:38:43 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/19 13:31:49 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int i;

	if (!*str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
