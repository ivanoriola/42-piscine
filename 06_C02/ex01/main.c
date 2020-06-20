/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/18 09:57:36 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	int n = 5;
	char src[] = ("123456789");
	char dest[n];

	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	return (0);
}
