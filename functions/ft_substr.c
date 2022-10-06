/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:11:05 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/06 15:52:34 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,	size_t len)
{
	char	*res;
	size_t	i;
	size_t	ss;

	if (!(res = (char *)malloc(len * sizeof(char) + 1)))
		return (0);
	i = 0;
	ss = start;
	if (start < (unsigned int)ft_strlen((char *)s))
	{
		while (i < len)
		{
			res[i] = s[ss];
			i++;
			ss++;
		}
		res[i] = '\0';
	}
	return (res);
}
