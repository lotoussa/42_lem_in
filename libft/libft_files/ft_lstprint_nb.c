/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstprint_nb.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/02 20:54:20 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/02 20:54:20 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_lstprint_nb(t_list *lst)
{
	while (lst)
	{
		ft_printf("%d ", *(int*)lst->content);
		lst = lst->next;
	}
}
