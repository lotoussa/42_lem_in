/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/05/02 20:54:21 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/05/02 20:54:21 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	m;

	m = n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m *= -1;
	}
	if (m > 9)
		ft_putnbr_fd((int)(m / 10), fd);
	ft_putchar_fd((m % 10) + '0', fd);
}
