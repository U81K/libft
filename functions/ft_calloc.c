/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:45:07 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/04 19:05:45 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
	size_t	i;
	void	*p;

	i = 0;
	p = malloc(nelem * elsize);
	if (!p)
		return (p);
		while (i < (nelem * elsize))
		{
			((char *)p)[i] = 0;
			i++;
		}
	return ((void *)p);	
}
