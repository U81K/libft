/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:52:00 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/09 20:08:58 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	word_count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] == c)
			i++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count + 1);
}

char	*str_count(char *str, char c)
{
	int			i;
	int			str_count;
	char		*word;

	i = 0;
	str_count = 0;
	while (str[i] && str[i] != c)
	{
		str_count++;
		i++;
	}
	word = (char *)malloc(sizeof(char) * str_count + 1);
	if (!word)
		return (0);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;

	if (!s)
		return (0);
	res = malloc(sizeof(char *) * (word_count((char *)s, c)));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			res[j++] = str_count((char *)&s[i], c);
		while (s[i] && s[i] != c)
			i++;
	}
	return (res);
}

// int main(void)
// {
//     char test[] = "||||hello||||my||||name|||||is||||karim|||||";
//     char **split;
//     int i;

//     i = 0;
//     split = ft_split(test, '|');
//     while (split[i])
//     {
//         printf("%s\n",split[i]);
//         i++;
//     }
// }