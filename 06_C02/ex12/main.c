/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:22:40 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/12 16:09:19 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void    *ft_print_memory(void *addr, unsigned int size)

int		main(void)
{
	void			*addr = "hola! \n ¿Como esta?";;
	unsigned int	size;

	ft_putstr(src);
	ft_print_memory(addr, size);
	return (0);
}
