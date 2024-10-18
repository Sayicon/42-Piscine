/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:22:19 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/20 17:22:20 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb != 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (nb);
}
