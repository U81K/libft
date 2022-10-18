/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:04:03 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/19 00:29:01 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;

	d = (char *)dest;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	if (d >= (char *)src)
	{
		while (n-- > 0)
		{
			d[n] = ((char *)src)[n];
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