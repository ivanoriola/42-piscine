/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:13:16 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 09:37:04 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
