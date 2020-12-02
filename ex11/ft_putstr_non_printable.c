/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:01:39 by tcarciof          #+#    #+#             */
/*   Updated: 2020/12/02 12:39:04 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dec_to_hexa(char *c)
{
	char printed;

	printed = 47;
	write(1, &printed, 1);
	printed = *c / 16;
	if (printed < 10)
		printed += '0';
	else
		printed += 'a' - 9;
	write(1, &printed, 1);
	printed = *c % 16;
	if (printed < 10)
		printed += '0';
	else
		printed += 'a' - 9;
	write(1, &printed, 1);
}

void	ft_putstr_non_printable(char *str)
{
	if (*str == '\0')
		return ;
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
			dec_to_hexa(str);
		else
			write(1, str, 1);
		str++;
	}
	return ;
}
