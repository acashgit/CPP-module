/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acash <acash@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:24:36 by acash             #+#    #+#             */
/*   Updated: 2022/02/18 16:10:22 by acash            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	(void)argv;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(i < argc)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
			argv[i][j] = std::toupper(argv[i][j]);
		std::cout << argv[i] << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}