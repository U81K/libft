/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:12:17 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/09 22:54:55 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char *res;
	int	i;
	int	sign;

	sign = n;
	if (sign < 0)
		n = -n;
	i = 0;
	while ((n /= 10) > 0)
	{
		res[i++] = n % 10 + 48;
	}
	if (sign < 0)
		res[i] = '-';
	return (res);
}

int	main(void)
{
	printf("%s", ft_itoa(0));
}