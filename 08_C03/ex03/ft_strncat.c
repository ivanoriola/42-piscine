/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:01:20 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/18 18:55:11 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	i = 0;
	size = 0;
	while (!(dest[size] == '\0'))
		size++;
	while (i < nb && !(src[i] == '\0'))
	{
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
