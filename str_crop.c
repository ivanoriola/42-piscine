/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_crop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:55:26 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/23 11:57:38 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"
#include "includes/prototipes.h"

char		*str_crop(int in, int out, char *str)
{
	char	*dest;
	int		i;

	dest = malloc((out - in + 1) * sizeof(char));
	i = 0;
	while (i < (out - in))
	{
		dest[i] = str[i + in];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
