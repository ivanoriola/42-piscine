/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:22:40 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/12 09:58:25 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

void	ft_putstr(char *str);

char *ft_strcapitalize(char *str);

int		main(void)
{
	char src[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_putstr(src);
	ft_strcapitalize(src);
	ft_putstr(src);
	return (0);
}
