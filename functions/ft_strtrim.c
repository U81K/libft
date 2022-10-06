/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:04:18 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/06 22:23:46 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	is_str_found(char *str, char *set)
{
	size_t	str_len;
	size_t	set_len;
	size_t	i;
	size_t	is_set_found_s;
	size_t	is_set_found_f;
	
	
	str_len = ft_strlen(str);
	set_len = ft_strlen(set);
	
	i = 0;
	while (i < set_len)
	{
		if (str[i] == set[i])
			i++;
		else
			break;
	}
	if (set_len == i)
		is_set_found_s = 1;
	i = 0;
	while (set_len > 0)
	{
		if (str[str_len] == set[set_len])
		{
			str_len--;
			set_len--;
		}
		else
			break;
	}
	if (set_len == 0)
		is_set_found_f = 1;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	s1_len;
	size_t	set_len;
	size_t	set_len1;
	size_t	i;
	size_t	is_set_found_s;
	size_t	is_set_found_f;
	
	
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	set_len1 = ft_strlen(set);
	i = 0;
	while (i < set_len)
	{
		if (s1[i] == set[i])
			i++;
		else
			break;
	}
	if (set_len == i)
		is_set_found_s = 1;
	i = 0;
	while (set_len > 0)
	{
		if (s1[s1_len] == set[set_len])
		{
			s1_len--;
			set_len--;
		}
		else
			break;
	}
	if (set_len == 0)
		is_set_found_f = 1;
	if (is_set_found_s == 1 && is_set_found_f == 1)
		if (!(res = (char *)malloc(sizeof(char) * (s1_len - (set_len * 2) + 1))))
			return (0);
	i = 0;
	set_len = ft_strlen(set);
	while (i < (s1_len - set_len1))
	{
		res[i] = s1[set_len];
		i++;
		set_len++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	char str[] = {"oohellooo"};
	char set[] = {"oo"};

	puts(ft_strtrim("0012345678900", "00"));
}