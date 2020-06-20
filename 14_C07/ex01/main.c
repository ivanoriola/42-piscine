/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 08:22:58 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/27 16:45:45 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int	min = -5;
	int	max = 2;
	int	*intarray;
	int	i;
	int	range;

	intarray = ft_range(min, max);
	range = max - min;
	i = 0;
	while(i < range)
	{
		printf("%i ", intarray[i++]);
	}
	return(0);
}
