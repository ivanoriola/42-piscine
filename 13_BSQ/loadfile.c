/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loadfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:24:14 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/26 21:01:41 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "prototipes.h"

char		*loadfile(char *grid_file, char *buffer)
{
	int		grid_lenght;
	int		grid_ref;

	grid_lenght = 0;
	grid_ref = open(grid_file, O_RDONLY);
	if (grid_ref == -1)
		error("Opening file error");
	else
	{
		while (read(grid_ref, buffer, 1))
		{
			grid_lenght++;
		}
		buffer = (char*)malloc(grid_lenght + 1);
		close(grid_ref);
		grid_ref = open(grid_file, O_RDONLY);
		if (grid_ref == -1)
			error("Opening file error");
		read(grid_ref, buffer, grid_lenght);
		close(grid_ref);
		return (buffer);
	}
	return (NULL);
}

void		loadstandard(char *buffer)
{
	int		grid_ref;

	grid_ref = open("map", O_CREAT | O_RDWR, 0777);
	while (read(0, &buffer, 1))
		write(grid_ref, &buffer, 1);
	close(grid_ref);
}
