/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:49:23 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/20 14:49:53 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_put_str(char *dizi, int i)
{
	while (--i >= 0)
		ft_putchar(dizi[i]);
}

void	ft_arr_add(char *dizi, int *i, int nb)
{
	while (nb / 10 > 0)
	{
		dizi[*i] = nb % 10 + '0';
		nb = nb / 10;
		*i += 1;
		if (nb / 10 == 0)
		{
			dizi[*i] = nb % 10 + '0';
			*i += 1;
		}
	}
}

void	ft_putnbr(int nb)
{
	char	dizi[10];
	int		i;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	i = 0;
	if (nb / 10 == 0)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_arr_add(dizi, &i, nb);
	ft_rev_put_str(dizi, i);
}
