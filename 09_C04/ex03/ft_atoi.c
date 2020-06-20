/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 11:23:22 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/18 14:54:33 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (TRUE);
	else if (c == ' ' || c == '\f' || c == '\r')
		return (TRUE);
	else
		return (FALSE);
}

int	isnumber(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (TRUE);
	return (FALSE);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	nbr;

	i = 0;
	negative = -1;
	nbr = 0;
	while (ft_isspace(str[i]))
		i++;
	while ((str[i]) == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (isnumber(str[i]))
	{
		nbr *= 10;
		nbr -= ((int)str[i++] - 48);
	}
	return (negative * nbr);
}
