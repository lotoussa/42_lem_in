/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstpush.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/02 20:54:20 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/02 20:54:20 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstpush(t_list **alst, t_list *new)
{
	t_list		*cur;

	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	cur = *alst;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
}
