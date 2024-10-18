/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:13:55 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/23 16:24:38 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stock_str *val1 = ft_strs_to_tab(argc, argv);

	int i = 0;
	while (i < argc)
	{
		printf("size: %d\n", val1[i].size);
		printf("str adres: %p\n", val1[i].str);
		printf("copy adres: %p\n", val1[i].copy);
		i ++;
	}
} */
