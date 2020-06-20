/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:22:53 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/26 22:11:14 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "prototipes.h"

int			**mallint(int lines, int cols)
{
	int		**solution;
	int		i;

	if ((solution = malloc(lines * sizeof(int *))) == NULL)
		error("Allocating memory error");
	i = 0;
	while (i < cols)
	{
		if ((solution[i] = malloc(cols * sizeof(int *))) == NULL)
			error("Allocating memory error");
		i++;
	}
	return (solution);
}
