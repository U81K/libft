/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:04:03 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/04 15:43:25 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((char *)dest > (char *)src)
	{
		while (n > 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			n--;
		}
	}
	else
	{
		while (((char *)src)[i] && i < n)
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
// 	// memmove(dest, src, 4);
// 	ft_memmove(src + 2, src, 4);
// 	puts(dest);
// }