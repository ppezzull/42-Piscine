/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppezzull <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:52:03 by ppezzull          #+#    #+#             */
/*   Updated: 2022/10/24 21:56:06 by ppezzull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buff;

	i = 0;
	while (i < size / 2)
	{
		buff = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = buff;
		i++;
	}
}