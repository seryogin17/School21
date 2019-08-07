/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <thansen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:51:52 by thansen           #+#    #+#             */
/*   Updated: 2019/07/23 20:51:53 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_newlst(int n)
{
	t_lst	*lst;

	if (!(lst = (t_lst *)malloc(sizeof(t_lst))))
		exit(1);
	lst->data = n;
	lst->next = NULL;
	return (lst);
}

void	ft_pushfront(t_lst **lst, int n)
{
	t_lst	*new;

	new = ft_newlst(n);
	new->next = *lst;
	*lst = new;
}

void	ft_pushback(t_lst **lst, int n)
{
	t_lst	*cur;

	if (!lst)
		return ;
	if (*lst)
	{
		cur = *lst;
		while (cur->next)
			cur = cur->next;
		cur->next = ft_newlst(n);
	}
	else
		*lst = ft_newlst(n);
}

void	ft_popfront(t_lst **lst)
{
	t_lst	*cur;

	if (!(*lst))
		return ;
	cur = (*lst)->next;
	free(*lst);
	*lst = cur;
}
