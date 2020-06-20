/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:07:52 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 08:18:38 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (!printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}
