/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:02:04 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/23 17:23:50 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i ++;
	return (s1[i] - s2[i]);
}

void	ft_strsort(int argc, char *argv[])
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < argc - j - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
		}
		i ++;
		if (i == argc - j - 1)
		{
			i = 1;
			j ++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int		i;

	ft_strsort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
