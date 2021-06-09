/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptycho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:19:00 by ptycho            #+#    #+#             */
/*   Updated: 2021/04/23 12:19:00 by ptycho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; ++i)
		{
			int j = 0;
			while (av[i][j])
				std::cout << static_cast<char>(std::toupper(av[i][j++]));
		}
		std::cout << std::endl;
	}
	return 0;
}