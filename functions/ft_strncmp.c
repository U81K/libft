/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:21:50 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/05 23:02:31 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char *bs1;
	unsigned char *bs2;

	bs1 = (unsigned char *)s1;
	bs2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (!bs1[i] || !bs2[i]))
	{
		if (bs1[i] != bs2[i])
			return (bs1[i] - bs2[i]);
		i++;
	}
	return (0);
}
