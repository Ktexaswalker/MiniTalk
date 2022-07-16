/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:11:20 by hmartine          #+#    #+#             */
/*   Updated: 2022/03/05 18:14:30 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*element;

	if (lst)
	{
		while (lst)
		{
			element = lst;
			f(element->content);
			lst = lst->next;
		}
	}
}
