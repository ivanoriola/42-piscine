/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfernand <vfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:46:05 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/09 22:22:36 by vfernand         ###   ########.fr       */
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
			if ((c == 0 && r == 0) || (c == (x - 1) && r == 0))
				ft_putchar('A');
			else if ((c == 0 && r == (y - 1)) || (c == (x - 1) && r == (y - 1)))
				ft_putchar('C');
			else if ((r == 0) || (r == (y - 1)) || (c == 0) || (c == (x - 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}
