/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 20:57:36 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 21:01:01 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (!lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
