/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 21:06:09 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char src[] = "Hola";

	ft_putstr(src);
	ft_str_is_uppercase(src);
	return (0);
}
