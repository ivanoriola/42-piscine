/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/18 20:26:34 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr(char *str);

int     ft_strcmp(char *s1, char *s2);
int		main(void)
{
	char s1[] = ("hola");
	char s2[]= ("holo");
    printf("%d", ft_strcmp(s1, s2));
	return (0);
}
