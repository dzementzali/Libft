/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzementz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:15:42 by dzementz          #+#    #+#             */
/*   Updated: 2019/10/20 17:38:55 by dzementz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef t_list *list;

list new_noeud(list Mylist, void *datum)
{
	while (Mylist != NULL && Mylist->next)
		Mylist = Mylist->next;
	list noeud = malloc(sizeof(t_list));
	if (!noeud)
		return (NULL);
	memset(noeud, 0, sizeof(t_list));
	if (Mylist != NULL) 
		Mylist->next = noeud;
	noeud->content = datum;
	return (noeud);
}

int		main()
{
	t_list *lst;

	/*char *a = "aaaaaa";
	char *b = "bbbbbb";
	char *c = "cccccc";
	char *d = "dddddd";*/

	lst = new_noeud(NULL, (void *)1);
	new_noeud(lst, (void *)2);
	new_noeud(lst, (void *)3);
	new_noeud(lst, (void *)4);
	while (lst) 
	{
		printf("%d\n", (int)lst->content);
		lst = lst->next; 
	}
}


