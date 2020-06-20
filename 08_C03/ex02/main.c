/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/17 12:19:12 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str);
char *ft_strcat(char *dest, char *src);

int		main(void)
{
	char src[12] = "ABCDE";
	char dest[12] = "01234";
	ft_strcat(dest, src);
    ft_putstr(dest);
	return (0);
}
