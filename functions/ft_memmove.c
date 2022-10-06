/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:04:03 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/05 18:58:39 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;
	
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (d >= s)
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char src[20] = {"geeksfor"};
// 	char dest[20] = {"hello"};
// 	memmove(src + 2, src, 4);
// 	// ft_memmove(src + 2, src, 4);
// 	puts(dest);
// }