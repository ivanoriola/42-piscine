/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:09:54 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 08:15:03 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (!alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}