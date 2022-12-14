/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:50:24 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/12/07 18:32:48 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;
	int		ret;

	ret = 0;
	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		ret += ft_putchar(str[i]);
		i++;
	}
	return (ret);
}
