/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 14:02:06 by tcarciof          #+#    #+#             */
/*   Updated: 2020/12/02 12:54:11 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	int		word;

	ptr = str;
	word = 0;
	if (*str == '\0')
		return (str);
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'z') ||
				(*str >= 'A' && *str <= 'Z'))
		{
			if (word == 0 && (*str >= 'a' && *str <= 'z'))
				*str -= 32;
			if (word == 1 && *str >= 'A' && *str <= 'Z')
				*str += 32;
			word = 1;
		}
		else
			word = 0;
		str++;
	}
	return (ptr);
}
