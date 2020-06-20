/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfernand <vfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:36:58 by rmeza-co          #+#    #+#             */
/*   Updated: 2020/02/09 22:23:10 by vfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rush(int x, int y)
{
	int c;
	int r;

	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			if (c == 0 && r == 0)
				ft_putchar('/');
			else if ((c == (x - 1) && r == 0) || (c == 0 && r == (y - 1)))
				ft_putchar('\\');
			else if (c == (x - 1) && r == (y - 1))
				ft_putchar('/');
			else if (r == 0 || r == (y - 1) || c == 0 || c == (x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
