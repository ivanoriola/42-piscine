/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:45:46 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/26 22:08:40 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"
#include "prototipes.h"

void		error(char *errormsg)
{
	int		i;

	i = 0;
	while (!(errormsg[i] == '\0'))
	{
		write(1, &errormsg[i], 1);
		i++;
	}
	write(1, "\n", 1);
	write(1, "\n", 1);
}

int			main(int argc, char **argv)
{
	char	*map;
	int		currentmap;
	char	*buffer;
	int		coderror;

	buffer = (char*)malloc(sizeof(char));
	currentmap = 1;
	if (argc < 2)
	{
		loadstandard(buffer);
		coderror = game("map", buffer);
	}
	else
	{
		while (currentmap < argc)
		{
			map = argv[currentmap++];
			coderror = game(map, buffer);
			if (currentmap < (argc))
				write(1, "\n", 1);
		}
	}
	free(buffer);
}
