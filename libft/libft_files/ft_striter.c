/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_striter.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/02 20:54:21 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/02 20:54:21 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
			f(&s[i++]);
	}
}