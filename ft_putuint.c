/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:58:37 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/12/14 02:11:03 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int nbr)
{
	int	ret;

	ret = 0;
	if (nbr > 9)
	{
		ret += ft_putuint(nbr / 10);
		ret += ft_putuint(nbr % 10);
	}
	else if (nbr < 10)
	{
		nbr = nbr + 48;
		ret += ft_putchar(nbr);
	}
	else
	{
		nbr = nbr + 87;
		ret += ft_putchar(nbr);
	}
	return (ret);
}
