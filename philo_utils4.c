/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_utils4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:04:02 by marvin            #+#    #+#             */
/*   Updated: 2025/01/08 19:04:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(char *nptr)
{
	int	count;
	int	sign;
	int	i;
	int	res;

	res = 0;
	count = 0;
	i = 0;
	sign = 1;
	while (nptr[i] != '\0' && (nptr[i] == ' '
			|| (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	while (nptr[i] != '\0' && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		count++;
		if (count == 2)
			return (res);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		res = res * 10 + (nptr[i++] - '0');
	return (res * sign);
}

int	onlynumber(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')))
			return (1);
		i++;
	}
	return (0);
}
