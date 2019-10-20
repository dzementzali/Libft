/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:37:30 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/20 19:43:28 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	while (lst != NULL)
	{
		tmp = lst->next;
		ft_lstdelone(*lst, *del(lst));
		free(lst);
		lst = tmp;
	}
	*lst = NULL;
}
