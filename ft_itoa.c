/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <pnamwayk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:13:18 by pnamwayk          #+#    #+#             */
/*   Updated: 2025/12/01 14:57:38 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int		cnt_base(int nbr);
char	*ft_itoa(int nbr);

int	cnt_base(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;

	len = cnt_base(nbr);
	str = malloc(sizeof(char) * (len + 1));
	str[len] = 0;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	else if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		len--;
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
