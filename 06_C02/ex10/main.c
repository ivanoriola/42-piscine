/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/12 10:34:42 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			ft_putstr(char *str);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char	src[] = ("1234567890");
	char	dest[] = ("");

	ft_strlcpy(dest, src, 12);
	ft_putstr(dest);
	return (0);
}
