/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:39:41 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/16 20:06:15 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		number_space(char *str);
int		validnum(char c);
int		four_one_opposite(char *str);
int		one_one_corner(char *str);

int		checkinput1(int g_inputnbr, char *g_inputstr)
{
	if (g_inputnbr != 2)
		return (0);
	if (!number_space(g_inputstr))
		return (0);
	if (!four_one_opposite(g_inputstr))
		return (0);
	if (!one_one_corner(g_inputstr))
		return (0);
	return (1);
}

int		number_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!validnum(str[i]))
		{
			return (0);
		}
		i++;
		if (str[i] == '\0')
			break ;
		if (str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int		validnum(char c)
{
	if ((c >= '1') && (c <= '4'))
		return (1);
	return (0);
}

int		four_one_opposite(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i < 7) || ((i > 15) && (i < 23)))
		{
			if ((str[i] == '4') && (str[i + 8] != '1'))
				return (0);
		}
		if (((i > 7) && (i < 15)) || ((i > 23) && (i < 31)))
		{
			if ((str[i] == '4') && (str[i - 8] != '1'))
				return (0);
		}
		i++;
	}
	return (1);
}

int		one_one_corner(char *str)
{
	if ((str[0] == '1' && str[16] != '1') || (str[16] == '1' && str[0] != '1'))
		return (0);
	if ((str[6] == '1' && str[24] != '1') || (str[24] == '1' && str[6] != '1'))
		return (0);
	if ((str[8] == '1' && str[22] != '1') || (str[22] == '1' && str[8] != '1'))
		return (0);
	if (str[14] == '1' && str[30] != '1')
		return (0);
	if (str[30] == '1' && str[14] != '1')
		return (0);
	return (1);
}
