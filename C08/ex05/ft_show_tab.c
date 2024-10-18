/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slow_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:05:15 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/23 17:05:20 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>
/*
int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*ptr;

	ptr = (char *)malloc(ft_strlen(src) + 1);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **argv)
{
	int			i;
	t_stock_str	*ptr;

	i = 0;
	ptr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ptr)
		return (0);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(argv[i]);
		ptr[i].str = argv[i];
		ptr[i].copy = ft_strdup(argv[i]);
		i ++;
	}
	ptr[i].str = 0;
	ptr[i].copy = 0;
	return (ptr);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i ++;
	}
}
/*
int main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
} */
