/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototipes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 12:09:10 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/26 22:11:24 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTIPES_H
# define PROTOTIPES_H

int		char_is_number(char c);
int		firstlinesdata(char *src, int *lines, char *rosetta);
char	*getlines(int i, char *src, int *lines);
int		setrosetta(char *src, char *rosetta);
char	**createtable(char *grid, int cols, int lines);
char	**filltable(int lines, int cols, char *grid, char **table);
void	fillarray(char **table, int lines, int cols, char *rosetta);
int		game(char *map, char *buffer);
void	error(char *errormsg);
void	printarray(char **table, int lines, int cols, int *mlrng);
int		*findsolution(int **sol, int lines, int cols);
int		cmin(int **sol, int l, int c);
int		**mallint(int lines, int cols);
char	*loadfile(char	*grid_file, char *buffer);
char	**resolution(char **table, int *mlrng, char *rosetta);
void	onecase(char *grid, char *rosetta);
int		checkgrid(char *grid);
void	loadstandard(char *buffer);
int		onlyone(char **table, int *mlrng, char *rosetta);
void	checkmlrng(int *mlrng, int lines, int cols);

#endif
