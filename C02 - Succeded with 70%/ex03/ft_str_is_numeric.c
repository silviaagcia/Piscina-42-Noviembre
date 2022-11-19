/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:37:11 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/13 13:15:05 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
    char str[] = "123";

    int result = ft_str_is_numeric(str);
    
    if (result == 0)
        write(1,"KO", 2);
    else if (result == 1)
        write(1, "OK", 2);
    return (0);
}*/
