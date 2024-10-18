/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:31:43 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/15 16:34:11 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	value;

	i = 0;
	while (*(str + i))
	{
		value = *(str + i);
		if (!((value <= 'z' && value >= 'a') || (value <= 'Z' && value >= 'A')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
