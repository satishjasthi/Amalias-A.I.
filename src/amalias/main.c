/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 17:40:19 by tle-mign          #+#    #+#             */
/*   Updated: 2014/03/12 19:34:47 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/lib.h"

int		main(int argc, char **argv, char **env)
{
	int		return_error;

	return_error = 0;
	if (argc && argv && env)
	{
		return_error = ft_amalias(argc, argv, env);
	else
		ft_putstr_red("Usage <./amalias \"A.I. Name\" \"Master Name\">\n");
	if (return_error > 0)
		ft_print_error(return_error);
	}
	else
	{
		ft_putstr_red("Something Goes Wrong With Entries parameters ");
		ft_putstr_red("Please Retry.\n");
	}
	return (0);
}
