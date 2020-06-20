/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:22:08 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 16:22:14 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanum(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		lower(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int in_word;

	i = 0;
	in_word = 0;
	while (!(str[i] == '\0'))
	{
		if (lower(str[i]) && (in_word == 0))
			str[i] -= 32;
		else if (upper(str[i]) && (in_word == 1))
			str[i] += 32;
		if (alphanum(str[i]))
			in_word = 1;
		else
			in_word = 0;
		i++;
	}
	return (str);
}
