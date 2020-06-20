/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/18 20:31:48 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*ft_strstr(char *str, char *to_find);
void	ft_putstr(char *str);
int		main(void)
{
	char *str = "Hola caracola";
	char *to_find = "ola";
	ft_putstr(ft_strstr(str, to_find));
	return (0);
}
