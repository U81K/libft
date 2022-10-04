/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:37:30 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/04 19:48:13 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str) - 1;
	if (c == '\0')
		return (((char *)str) + len + 1);
	while (str[len])
	{
		if (str[len] == c)
			return (((char *)str) + len);
		len--;
	}
	return (NULL);
}
