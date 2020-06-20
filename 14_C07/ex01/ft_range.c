/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:19:41 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/27 10:42:20 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*buffer;

	if (min >= max)
	{
		return (0);
	}
	range = max - min;
	if ((buffer = malloc(range * sizeof(int))) == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
