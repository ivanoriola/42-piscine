/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkinput2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:39:41 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/16 19:46:31 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		three_three_opposite(char *str);

int		checkinput2(char *g_inputstr)
{
	if (!three_three_opposite(g_inputstr))
	{
		return (0);
	}
	return (1);
}

int		three_three_opposite(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i < 7) || ((i > 15) && (i < 23)))
		{
			if ((str[i] == '3') && (str[i + 8] == '3'))
				return (0);
		}
		if (((i > 7) && (i < 15)) || ((i > 23) && (i < 31)))
		{
			if ((str[i] == '3') && (str[i - 8] == '3'))
				return (0);
		}
		i++;
	}
	return (1);
}
