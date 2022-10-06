/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:34:29 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/05 14:38:44 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	ld;
	unsigned int	ls;

	ld = ft_strlen(dst);
	ls = ft_strlen((char *)src);
	i = 0;
	if (size == 0 || size <= ld)
		return (ls + size);
	while (src[i] && i < (size - ld - 1))
	{
		dst[ld + i] = src[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ld + ls);
}

// int	main(void)
// {
// 	char *src = 0;
// 	char *dst = 0;
	
// 	// strlcat(0, 0, 10);
// 	ft_strlcat(dst, src, 10);
// 	puts(dst);
// 	// printf("%zu\n", strlcat(dst, src, 4));
// 	// printf("%zu", ft_strlcat(dst, src, 4));
// }
