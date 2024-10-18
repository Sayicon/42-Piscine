/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 18:40:06 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/20 18:40:08 by mcekici          ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	while (argc - 1 > 0)
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
		argc --;
	}
}
