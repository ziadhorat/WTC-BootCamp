/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 06:49:23 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/19 07:29:17 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char *c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(&str[i]);
		i++;
	}
}
