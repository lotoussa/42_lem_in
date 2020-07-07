/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtoupper.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/02 20:54:21 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/02 20:54:21 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strtoupper(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ft_islower(s[i]))
			s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}
