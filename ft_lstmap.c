/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:48:05 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/20 20:33:18 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *miaou;

	if (lst)
	{
		while (lst != NULL)
		{
			miaou = ft_lstnew((*f)(lst->content));
			lst = lst->next;
			miaou = miaou->next;
		}
	}
	return (miaou);
}
