/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:35:13 by bgannoun          #+#    #+#             */
/*   Updated: 2022/10/17 19:43:25 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*new;

	if (!lst)
		return ;
	while (*lst)
	{
		new = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = new;
	}
}

// void	del(void *to_free)
// {
// 	free(to_free);
// }
// int	main(void)
// {
// 	t_list *no1;
// 	t_list *no2;
// 	t_list *no3;
// 	t_list *res;
// 	no1 = ft_lstnew("hi");
// 	no2 = ft_lstnew("and");
// 	no3 = ft_lstnew("fuck");
// 	ft_lstadd_back(&no1, no2);
// 	ft_lstadd_back(&no1, no3);
// 	ft_lstclear(&no2, &del);
// 	res = ft_lstlast(no1);
// 	res = res->content;
// 	printf("%s", (char *)res);
// 	return (0);
// }