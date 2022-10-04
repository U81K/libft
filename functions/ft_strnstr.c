/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 21:56:55 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/04 16:13:47 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	if (len == 0)
		return (0);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			else
			{
				j++;
			}
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[] = {"aaabcabcd"};
// 	char to_find[] = {"aabc"};

// 	printf("%s\n", strnstr("22", "b", 2));
// 	printf("%s\n", ft_strnstr("22", "b", 2));
// }