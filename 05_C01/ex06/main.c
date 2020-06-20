/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 09:48:46 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putnbr(int nb);
int			ft_strlen(char *str);

int			main(void)
{
	char	string[4];

	string[0] = 'H';
	string[1] = 'o';
	string[2] = 'l';
	string[3] = 'a';
	ft_putnbr(ft_strlen(&string[0]));
	return (0);
}
