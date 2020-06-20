/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:26:58 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/16 22:16:45 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	resettabs(void);
void	printinnertab(void);
void	clearspaces(char *str);
int		checkinput1(int g_inputnbr, char *g_inputstr);
int		checkinput2(char *g_inputstr);
void	solve(void);
void	true_solve(void);

char	g_tab[4][4];
char	*g_inputstr;
int		g_inputnbr;

int		main(int argc, char **argv)
{
	char	*errormsg;

	g_inputstr = argv[1];
	g_inputnbr = argc;
	if (!checkinput1(g_inputnbr, g_inputstr) || !checkinput2(g_inputstr))
	{
		errormsg = "Error\n";
		ft_putstr(errormsg);
		return (0);
	}
	resettabs();
	clearspaces(g_inputstr);
	solve();
	true_solve();
	printinnertab();
	return (0);
}

void	resettabs(void)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			g_tab[x][y] = '0';
			x++;
		}
		y++;
	}
}

void	printinnertab(void)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(g_tab[x][y]);
			if (x != 3)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

void	clearspaces(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			j = i;
			while (str[j] != '\0')
			{
				str[j] = str[j + 1];
				j++;
			}
		}
		i++;
	}
	str[i] = '\0';
}
