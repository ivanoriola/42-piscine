/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:21:00 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/19 18:06:21 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_atoi_base(char *str, char *base);
void	ft_putstr(char *str);
void	ft_putchar(char c);

int		main(void)
{
	char	*str = " 	 		  		 	 +-+++---++--1E240";
	char 	*base = "0123456789ABCDEF";

	ft_putstr(str);
	ft_putchar('\n');
	printf("%d", (ft_atoi_base(str, base)));
}
