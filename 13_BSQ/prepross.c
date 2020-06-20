/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepross.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:45:57 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/26 22:11:14 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "prototipes.h"

int			firstlinesdata(char *src, int *lines, char *rosetta)
{
	int		i;

	i = 0;
	while (*src != '\n')
	{
		src++;
		i++;
	}
	src -= i;
	i -= 3;
	src = getlines(i, src, lines);
	return (setrosetta(src, rosetta));
}

char		*getlines(int i, char *src, int *lines)
{
	while (i > 0)
	{
		if (char_is_number(*src))
		{
			*lines *= 10;
			*lines += (*src - 48);
			src++;
		}
		else
		{
			error("Map error");
			return (NULL);
		}
		i--;
	}
	return (src);
}

int			setrosetta(char *src, char *rosetta)
{
	int		cols;

	cols = 0;
	if (src == NULL)
		return (-1);
	while ((*src > 31) && (*src != '\n'))
	{
		*rosetta = *src;
		rosetta++;
		src++;
	}
	src++;
	while (*src != '\n')
	{
		cols++;
		src++;
	}
	return (cols);
}

char		**createtable(char *grid, int cols, int lines)
{
	char	**table;
	int		i;

	if ((table = malloc(lines * sizeof(char *))) == NULL)
		error("Allocating memory error");
	i = 0;
	while (i < cols)
	{
		if ((table[i] = malloc(cols * sizeof(char *))) == NULL)
			error("Allocating memory error");
		i++;
	}
	while (*grid != '\n')
	{
		grid++;
	}
	grid++;
	table = filltable(lines, cols, grid, table);
	return (table);
}

char		**filltable(int lines, int cols, char *grid, char **table)
{
	int		i;
	int		j;

	i = 0;
	while (i < lines)
	{
		j = 0;
		while (j < cols)
		{
			if (*grid != '\n')
			{
				table[i][j] = *grid;
				j++;
			}
			grid++;
		}
		i++;
	}
	return (table);
}
