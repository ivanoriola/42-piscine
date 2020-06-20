/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:08:17 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/18 18:38:09 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n);
int		main(void)
{
	char 			*s1;
	char 			*s2;
	unsigned int	n = 5;

	s1 = "abc_0";
	s2 = "abc_0";
	printf("ft_strncmp: %d", ft_strncmp(s1, s2, n));
	printf("\n");
	printf("strncmp:    %d", strncmp(s1, s2, n));
	printf("\n");
	printf("\n");

	s1 = "abc_1";
	s2 = "abc_0";
	printf("ft_strncmp: %d", ft_strncmp(s1, s2, n));
	printf("\n");
	printf("strncmp:    %d", strncmp(s1, s2, n));
	printf("\n");
	printf("\n");

	s1 = "abc_0";
	s2 = "abc_1";
	printf("ft_strncmp: %d", ft_strncmp(s1, s2, n));
	printf("\n");
	printf("strncmp:    %d", strncmp(s1, s2, n));
	printf("\n");
	printf("\n");
	return (0);
}
