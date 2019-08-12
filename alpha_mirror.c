/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:10:48 by lramovha          #+#    #+#             */
/*   Updated: 2019/08/12 15:14:22 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = 'm' - (argv[1][i] - 'n');
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = 'M' - (argv[1][i] - 'N');
			}
			else
				j = argv[1][i];
			write(1, &j, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
