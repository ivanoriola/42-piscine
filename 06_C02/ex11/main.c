/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:22:40 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/12 14:37:52 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void    ft_putstr_non_printable(char *str);

int		main(void)
{
	char src[] = "Coucou\ntu vas\\ bien ?\tTTT \rRRR";
	
	ft_putstr_non_printable(src);
	return (0);
}
