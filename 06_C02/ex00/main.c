/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/11 19:35:50 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = ("hola");
	char dest[] = ("Adios");

	ft_putstr(src);
	ft_putstr(dest);
	ft_strcpy(dest, src);
	ft_putstr(src);
	ft_putstr(dest);
	return (0);
}
