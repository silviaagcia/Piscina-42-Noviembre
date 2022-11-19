/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:14:22 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/09 13:15:21 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{
	int i;
	int *nbrp;
	int **nbrpp;
	int ***nbrppp;
	int ****nbrpppp;
	int *****nbrppppp;
	int ******nbrpppppp;
	int *******nbrppppppp;
	int ********nbrpppppppp;
	int *********nbrppppppppp;

	i = 1;
	
	nbrp = &i;
	nbrpp = &nbrp;
	nbrppp = &nbrpp;
	nbrpppp = &nbrppp;
	nbrppppp = &nbrpppp;
	nbrpppppp = &nbrppppp;
	nbrppppppp = &nbrpppppp;
	nbrpppppppp = &nbrppppppp;
	nbrppppppppp = &nbrpppppppp;
	
	ft_ultimate_ft(nbrppppppppp);

	return (0);
}