/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 10:09:04 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/13 20:57:47 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srcsize;
	unsigned int	destsize;
	unsigned int	i;

	srcsize = ft_strlen(src);
	if (!size)
		return (srcsize);
	if (srcsize >= size)
		destsize = size;
	else
		destsize = srcsize;
	i = 0;
	while (i < destsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srcsize);
}
