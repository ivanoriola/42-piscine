/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:28:32 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/19 16:29:51 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define TRUE 1
#define FALSE 0

int		ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (TRUE);
	else if (c == ' ' || c == '\f' || c == '\r')
		return (TRUE);
	else
		return (FALSE);
}

int		pos(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		baseok(char *base, int i)
{
	int	j;

	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (FALSE);
		j = i;
		while (base[j] != '\0')
		{
			if (base[i] == base[++j])
				return (FALSE);
		}
		i++;
	}
	return (TRUE);
}

int		number(int i, char *str, char *base, int baselen)
{
	int	nbr;

	nbr = 0;
	while (str[i])
	{
		if ((pos(str[i], base) < 0) || (pos(str[i], base) > (baselen - 1)))
			break ;
		else
			nbr = nbr * baselen - pos(str[i], base);
		i++;
	}
	return (nbr);
}

int		ft_atoi_base(char *str, char *base)
{
	int	baselen;
	int	negative;
	int	i;

	baselen = -1;
	while (base[++baselen])
	{
	}
	negative = -1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while ((str[i]) == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	if (baseok(base, i))
		return (negative * number(i, str, base, baselen));
	else
		return (0);
}
