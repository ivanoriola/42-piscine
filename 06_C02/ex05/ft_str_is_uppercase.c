/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:02:56 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 08:17:19 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (!uppercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
