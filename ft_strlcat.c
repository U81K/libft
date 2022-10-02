/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:34:29 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/02 19:46:25 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	
	// strlcat(dst, src, 8);
	ft_strlcat(dst, src, 8);
	puts(dst);
	// printf("%zu\n", strlcat(dst, src, 4));
	// printf("%zu", ft_strlcat(dst, src, 4));
}
