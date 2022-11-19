/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laumoral <laumoral@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:45:50 by laumoral          #+#    #+#             */
/*   Updated: 2022/11/15 10:48:09 by laumoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str >= '32' && *str <= '126')
			str++;
		else
			return (0);
	}
	return (1);
}
/*int main(void)
{
    char str[2];
    str[1] = 1;
    int result = ft_str_is_printable(str);
    
    if (result == 0)
        write(1,"KO", 2);
    else if (result == 1)
        write(1, "OK", 2);
    return (0);
}*/
