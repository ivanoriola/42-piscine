/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 16:16:55 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/17 16:51:46 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while ((dest[i] != '\0') && (i < size))
		i += 1;
	j = i;
	while (src[k] != '\0')
		k += 1;
	while ((src[i - j] != '\0') && (size > i + 1))
	{
		dest[i] = src[i - j];
		i += 1;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + k);
}
