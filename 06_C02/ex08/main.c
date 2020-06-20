/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:15:57 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/12 09:19:58 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

char	*ft_strlowcase(char *str);

int		main(void)
{
	char src[] = "Hola";

	ft_putstr(src);
	ft_strlowcase(src);
	ft_putstr(src);
	return (0);
}
