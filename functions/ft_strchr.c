/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:23:14 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/04 19:42:46 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int str_len;

	str_len = ft_strlen(str);
	i = 0;
	if (c == '\0')
		return (((char *)str) + str_len);
	while (str[i])
	{
		if (str[i] == c)
			return (((char *)str) + i);
		i++;
	}
	return (NULL);
}
