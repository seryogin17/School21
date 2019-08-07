/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <thansen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:00:31 by thansen           #+#    #+#             */
/*   Updated: 2019/07/23 21:01:48 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(int ac, char **av)
{
	int		str_len;
	int		i;
	int		j;
	char	*str;

	if (ac < 2)
		return (NULL);
	str_len = 0;
	i = 0;
	while (i < ac)
		str_len += ft_strlen(av[i++]);
	if (!(str = ft_strnew(str_len + (ac - 1))))
		return (NULL);
	i = 0;
	str_len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			str[str_len++] = av[i][j++];
		if (i != ac - 1)
			str[str_len++] = ' ';
		i++;
	}
	return (str);
}
