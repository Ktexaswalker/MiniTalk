/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:07:07 by hmartine          #+#    #+#             */
/*   Updated: 2022/03/05 18:10:14 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;
	void	*aux;

	if (*lst)
	{
		while (*lst)
		{
			element = *lst;
			aux = element->next;
			*lst = aux;
			del(element->content);
			free(element);
		}
		*lst = NULL;
	}
}
