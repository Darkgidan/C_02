/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:01:54 by tcarciof          #+#    #+#             */
/*   Updated: 2020/12/02 17:09:39 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i + 1] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
