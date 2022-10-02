/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:28:57 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/01 15:50:21 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	int	i;
	int	j;

	if (len == 0)
		return (0);
	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < len - 1)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return ((char *)str + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = {"abcd"};
	char	to_find[] = {"ab"};

	printf("%s\n", strnstr(str, to_find, 3));
	printf("%s", ft_strnstr(str, to_find, 3));
}