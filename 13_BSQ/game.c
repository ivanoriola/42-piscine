/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:34:55 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/26 22:08:30 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "prototipes.h"

int			game(char *map, char *buffer)
{
	int		lines;
	int		cols;
	char	rosetta[4];
	char	*grid;
	char	**table;

	lines = 0;
	if ((grid = loadfile(map, buffer)) != NULL)
	{
		cols = firstlinesdata(grid, &lines, rosetta);
		if (cols == -1)
			return (1);
		if (checkgrid(grid))
			return (1);
		if (cols == 1 || lines == 1)
			onecase(grid, rosetta);
		else
		{
			table = createtable(grid, cols, lines);
			free(grid);
			fillarray(table, lines, cols, rosetta);
			free(table);
		}
	}
	return (1);
}

void		printarray(char **table, int lines, int cols, int *mlrng)
{
	int		i;
	int		j;

	i = 0;
	while (i < lines)
	{
		j = 0;
		while (j < cols)
		{
			write(1, &table[i][j], 1);
			j++;
		}
		if (i != (lines - 1))
			write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
	free(mlrng);
}

void		fillarray(char **table, int lines, int cols, char *rosetta)
{
	int		**solution;
	int		i;
	int		j;
	int		*mlrng;

	solution = mallint(lines, cols);
	i = 0;
	while (i < lines)
	{
		j = 0;
		while (j < cols)
		{
			if (table[i][j] == rosetta[0])
				solution[i][j] = 1;
			else if (table[i][j] == rosetta[1])
				solution[i][j] = 0;
			else
				error("Map error");
			j++;
		}
		i++;
	}
	mlrng = findsolution(solution, lines, cols);
	checkmlrng(mlrng, lines, cols);
	printarray(resolution(table, mlrng, rosetta), lines, cols, mlrng);
}

int			*findsolution(int **sol, int lines, int cols)
{
	int		l;
	int		c;
	int		*mlrng;

	mlrng = malloc(3 * (sizeof(int)));
	l = 1;
	while (l < lines)
	{
		c = 1;
		while (c < cols)
		{
			if ((*(*(sol + l) + c)) != 0)
				*(*(sol + l) + c) = (*(*(sol + l) + c) + cmin(sol, l, c));
			if (*(*(sol + l) + c) > *mlrng)
			{
				*mlrng = *(*(sol + l) + c);
				*(mlrng + 1) = l;
				*(mlrng + 2) = c;
			}
			c++;
		}
		l++;
	}
	free(sol);
	return (mlrng);
}

int			cmin(int **sol, int l, int c)
{
	int		min;

	min = 0;
	if (sol[l - 1][c] < sol[l - 1][c - 1])
		min = sol[l - 1][c];
	else
		min = sol[l - 1][c - 1];
	if (sol[l][c - 1] < min)
		min = sol[l][c - 1];
	return (min);
}
