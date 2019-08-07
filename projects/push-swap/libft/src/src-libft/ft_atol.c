/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thansen <thansen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:11:37 by thansen           #+#    #+#             */
/*   Updated: 2019/07/23 21:12:03 by thansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_atol(const char *str)
{
	long long int	res;
	int				sign;
	int				i;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	str[i] == '-' ? sign = -1 : (0);
	str[i] == '+' ? sign = 1 : (0);
	str[i] == '+' || str[i] == '-' ? i++ : (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * 10 / 10 != res ||
			(res * 10 + str[i] - '0') % 10 != str[i] - '0')
			return (sign > 0 ? -1 : 0);
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}