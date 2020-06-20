/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototipes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <ioriola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:36:12 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/23 22:58:16 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTIPES_H
# define PROTOTIPES_H

char	*str_firstchar(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		str_is_number(char *str);
int		char_is_number(char c);
int		char_is_alpha(char c);
int		char_is_space(char c);
char	*ft_strcat(char *dest, char *src);
char	*ft_str_copy(char *dest, char *src);
char	*ft_str_n_copy(char *dest, char *src, int n);
int		ft_strlen(char *str);
char	*ft_strstr(char *str, char *to_find);
void	error(char *str);
char	*get_dictionary(char *dictionary_file);
char	*arguments(char *dictionary_file, int argc, char **argv);
void	numtotext(char *number, char *dictionary);
void	print_from_dict(char *dictionary, char *tofind);
char	*leadingzeros_out(char *number);
void	check_hundreds(int i, char *number, char *dictionary);
void	check_tens(int i, char *number, char *dictionary);
void	check_units(int i, char *number, char *dictionary);
char	*zillions(int n_zeros);

#endif
