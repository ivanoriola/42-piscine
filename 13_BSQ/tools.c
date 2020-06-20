/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 12:03:27 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/26 21:04:46 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "prototipes.h"

char		**resolution(char **table, int *mlrng, char *rosetta)
{
	int		line;
	int		col;
	char	fillchar;
	int		i;
	int		j;

	if (mlrng[0] < 2)
		onlyone(table, mlrng, rosetta);
	fillchar = rosetta[2];
	line = mlrng[1];
	col = mlrng[2];
	i = 0;
	while (i < mlrng[0])
	{
		j = 0;
		while (j < mlrng[0])
		{
			table[line - i][col - j] = fillchar;
			j++;
		}
		i++;
	}
	return (table);
}

void		onecase(char *grid, char *rosetta)
{
	int		i;
	int		check;
	char	*aux;

	i = 0;
	check = 0;
	while (*grid != '\n')
		grid++;
	aux = grid;
	while (*grid != '\0')
	{
		if (check == 0 && *grid == rosetta[0])
		{
			*grid = rosetta[2];
			check = 1;
		}
		i++;
		grid++;
	}
	while (i != 0)
	{
		write(1, aux++, 1);
		i--;
	}
}

int			checkgrid(char *grid)
{
	int		i;
	int		j;

	i = 0;
	while (*grid != '\n')
	{
		grid++;
		i++;
	}
	i = 0;
	j = 0;
	while (*grid != '\0')
	{
		if (*grid == '\n')
		{
			if (j == 0)
				j = i;
			if (j != i)
				return (-1);
			i = 0;
		}
		i++;
		grid++;
	}
	return (0);
}

int			onlyone(char **table, int *mlrng, char *rosetta)
{
	int		i;
	int		j;

	i = 0;
	while (i < mlrng[1])
	{
		j = 0;
		while (j < mlrng[2])
		{
			if (table[i][j] == rosetta[0])
			{
				mlrng[0] = 1;
				mlrng[1] = i;
				mlrng[2] = j;
				return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void		checkmlrng(int *mlrng, int lines, int cols)
{
	if (mlrng[0] < 2)
	{
		mlrng[0] = 0;
		mlrng[1] = lines;
		mlrng[2] = cols;
	}
}
