/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmrewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 13:42:49 by cmrewa            #+#    #+#             */
/*   Updated: 2019/02/17 15:04:29 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	pt_line(int width, char corn, char fill, char corn2)
{
	ft_putchar(corn);
	while (--width > 1)
		ft_putchar(fill);
	if (width == 1)
		ft_putchar(corn2);
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if ((x < 1) || (y < 1) || (x < 1 && y < 1))
		return (1);
	pt_line(x, 'A', 'B', 'C');
	while (--y > 1)
		pt_line(x, 'B', ' ', 'B');
	if (y == 1)
		pt_line(x, 'C', 'B', 'A');
	return (0);
}
