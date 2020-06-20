/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 08:22:58 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/27 08:53:00 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "prototipes.h"

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			main(void)
{
	char	*str;

	str = "Dar cera, pulir cera...";
	ft_putstr(str);
	write(1, "\n", 1);
	ft_putstr(ft_strdup(str));
	return (0);
}
