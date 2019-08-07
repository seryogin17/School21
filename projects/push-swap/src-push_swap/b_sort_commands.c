/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_sort_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <thansen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:51:14 by thansen           #+#    #+#             */
/*   Updated: 2019/07/23 20:51:15 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	b3sort_sml(t_push *p)
{
	ft_sb(p);
	ft_rb(p);
	ft_sb(p);
	ft_rrb(p);
	ft_sb(p);
}

void	b3sort_slm(t_push *p)
{
	ft_sb(p);
	ft_rb(p);
	ft_sb(p);
	ft_rrb(p);
}

void	b3sort_mls(t_push *p)
{
	ft_sb(p);
}

void	b3sort_msl(t_push *p)
{
	ft_rb(p);
	ft_sb(p);
	ft_rrb(p);
	ft_sb(p);
}

void	b3sort_lsm(t_push *p)
{
	ft_rb(p);
	ft_sb(p);
	ft_rrb(p);
}
