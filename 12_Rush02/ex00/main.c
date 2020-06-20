/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:50:28 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/23 22:19:42 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/headers.h"
#include "includes/prototipes.h"

void		error(char *str)
{
	ft_putstr(" >>> Error");
	ft_putstr(str);
	exit(EXIT_FAILURE);
}

char		*get_dictionary(char *dictionary_file)
{
	int		dictionary_ref;
	char	*dictionary;
	int		n;

	n = 1024;
	dictionary = malloc(n);
	dictionary_ref = open(dictionary_file, O_RDONLY);
	if (dictionary_ref == -1)
	{
		ft_putstr(dictionary_file);
		error(" opening dictionary.");
	}
	if (read(dictionary_ref, dictionary, n) == -1)
	{
		ft_putstr(dictionary_file);
		error(" reading dictionary.");
	}
	return (dictionary);
}

char		*arguments(char *dictionary_file, int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		error(": Wrong arguments.");
	}
	if (argc == 2)
	{
		ft_str_copy(dictionary_file, "numbers.dict");
		return (argv[1]);
	}
	if (argc == 3)
	{
		ft_str_copy(dictionary_file, argv[2]);
		return (argv[2]);
	}
	return ("this is not a number");
}

char		*leadingzeros_out(char *number)
{
	while (*number == '0' && *number != '\0')
	{
		number++;
	}
	if (ft_strlen(number) == 0)
	{
		return ("0\0");
	}
	return (number);
}

int			main(int argc, char **argv)
{
	char	*number;
	char	*dictionary_file;
	char	*dictionary;

	dictionary_file = malloc(260);
	number = arguments(dictionary_file, argc, argv);
	if (!str_is_number(number))
	{
		ft_putstr(number);
		error(": Not a Number.");
	}
	number = leadingzeros_out(number);
	dictionary = get_dictionary(dictionary_file);
	if (ft_strlen(number) == 1)
	{
		print_from_dict(dictionary, number);
	}
	else
	{
		numtotext(number, dictionary);
	}
	free(dictionary);
	ft_putchar('\n');
	return (0);
}
