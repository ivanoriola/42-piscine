/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/18 20:29:44 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);
void	ft_putstr(char *str);

int		main(void)
{
	char *src = "ABCDE";
	char dest[16] = "01234";
	ft_strncat(dest, src, 5);
    ft_putstr(dest);

	return (0);
}
