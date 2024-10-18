/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:16:45 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/20 17:16:48 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	i = 1;
	result = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (nb != 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i++ < power)
		result *= nb;
	return (result);
}
