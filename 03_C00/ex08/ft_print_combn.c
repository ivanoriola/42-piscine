/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioriola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 21:22:49 by ioriola           #+#    #+#             */
/*   Updated: 2020/02/09 10:59:05 by ioriola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void writer(char num[], int n)
{
    int i;
    i = 0;
    while(i<n)
    {
        write (1,&num[i],1);
        i++;
    }
    //if NO END?
    write (1, ", ",2);
}

void	ft_print_combn(int n)
{
    char num[n];
    int i;
    int j;
    
    i = 0;
    while(i<n)
    {
        num[i] = 48 + i;
        i++;
    }
    
    while (num[0] < 58)
    {
        j = n - 1;
        while (!(j == 0))
        {
            //num[j] = num[j - 1] + 1;
            while (num[j]<58)
            {
                writer(num, n);
                num[j]++;
            }
            num[j - 1]++;
            num[j] = num[j - 1] + 1;
            j--;
        }
        num[0]++;
    }
}
