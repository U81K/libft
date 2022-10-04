/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:34:29 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/04 20:25:08 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	main(void)
{
	char src[] = {"5678"};
	char dst[20] = {"1234"};
	
	// strlcat(dst, src, 0);
	ft_strlcat(dst, src, 0);
	puts(dst);
	// printf("%zu\n", strlcat(dst, src, 4));
	// printf("%zu", ft_strlcat(dst, src, 4));
}
