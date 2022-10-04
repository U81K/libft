/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:35:42 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/04 15:46:28 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char *p;

	p = (char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	puts(ft_memchr(s, 2, 3));
// 	puts(memchr(s, 2, 3));
// }