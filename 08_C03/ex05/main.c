/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/17 16:17:41 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int		main(void)
{
	char src[12] = "ABCDE";
	char dest[12] = "01234";
	ft_strlcat(dest, src, 5);
    ft_putstr(dest);
	return (0);
}
