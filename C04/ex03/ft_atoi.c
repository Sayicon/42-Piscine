/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcekici <mcekici@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:36:58 by mcekici           #+#    #+#             */
/*   Updated: 2024/07/22 12:56:19 by mcekici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

int	ft_is_operator(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int		sign;
	long	result;

	result = 0;
	sign = 1;
	while (*str)
	{
		if ((*str >= 9 && *str <= 13) || *str == ' ')
			str ++;
		else if (ft_is_operator(*str))
		{
			if (*str == '-')
				sign *= -1;
			str ++;
		}
		else if (ft_is_numeric(*str))
		{
			result = result * 10 + (*str - '0');
			str ++;
		}
		else
			return (result * sign);
	}
	return (result * sign);
}
