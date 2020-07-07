/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/02 20:54:21 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/02 20:54:21 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	value;
	char	*start;
	char	*end;

	value = (char)c;
	start = (char *)s;
	end = (char *)s;
	while (*end)
		end++;
	if (c == '\0')
		return (end);
	end--;
	while (end >= start)
	{
		if (*end == c)
			return (end);
		end--;
	}
	return (NULL);
}
