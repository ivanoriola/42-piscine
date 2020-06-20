/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:18:46 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/16 22:11:35 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fourtoone(char **g_tab, char *g_inputstr);
void	onetothree(char **g_tab, char *g_inputstr);

void	solve(char **g_tab, char *g_inputstr)
{
	fourtoone(g_tab, g_inputstr);
	onetothree(g_tab, g_inputstr);
}

void	fourtoone(char **g_tab, char *g_inputstr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (g_inputstr[i] == '4')
		{
			g_tab[i][0] = '1';
			g_tab[i][1] = '2';
			g_tab[i][2] = '3';
			g_tab[i][3] = '4';
		}
		i++;
	}
	while (i < 8)
	{
		if (g_inputstr[i] == '4')
		{
			g_tab[i][3] = '1';
			g_tab[i][2] = '2';
			g_tab[i][1] = '3';
			g_tab[i][0] = '4';
		}
		i++;
	}
	while (i < 12)
	{
		if (g_inputstr[i] == '4')
		{
			g_tab[0][i] = '1';
			g_tab[1][i] = '2';
			g_tab[2][i] = '3';
			g_tab[3][i] = '4';
		}
		i++;
	}
	while (i < 16)
	{
		if (g_inputstr[i] == '4')
		{
			g_tab[3][i] = '1';
			g_tab[2][i] = '2';
			g_tab[1][i] = '3';
			g_tab[0][i] = '4';
		}
		i++;
	}
}

void	onetothree(char **g_tab, char *g_inputstr)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (g_inputstr[i] == '1' && g_inputstr[i + 4] == '3')
		{
			g_tab[i][0] = '4';
		}
		i++;
	}
	while (i < 8)
	{
		if (g_inputstr[i] == '1' && g_inputstr[i + 4] == '3')
		{
			g_tab[i][3] = '4';
		}
		i++;
	}
	while (i < 12)
	{
		if (g_inputstr[i] == '1' && g_inputstr[i + 4] == '3')
		{
			g_tab[0][i] = '4';
		}
		i++;
	}
	while (i < 16)
	{
		if (g_inputstr[i] == '1' && g_inputstr[i + 4] == '3')
		{
			g_tab[3][i] = '4';
		}
		i++;
	}
}
