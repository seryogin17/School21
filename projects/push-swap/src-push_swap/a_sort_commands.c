/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_sort_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <thansen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:49:29 by thansen           #+#    #+#             */
/*   Updated: 2019/07/23 20:49:30 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a3sort_slm(t_push *p)
{
	ft_ra(p);
	ft_sa(p);
	ft_rra(p);
}

void	a3sort_mls(t_push *p)
{
	ft_ra(p);
	ft_sa(p);
	ft_rra(p);
	ft_sa(p);
}

void	a3sort_msl(t_push *p)
{
	ft_sa(p);
}

void	a3sort_lsm(t_push *p)
{
	ft_sa(p);
	ft_ra(p);
	ft_sa(p);
	ft_rra(p);
}

void	a3sort_lms(t_push *p)
{
	ft_sa(p);
	ft_ra(p);
	ft_sa(p);
	ft_rra(p);
	ft_sa(p);
}
