/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:13:16 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 09:37:02 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
