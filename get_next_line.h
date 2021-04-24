/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acami <acami@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 21:02:37 by acami             #+#    #+#             */
/*   Updated: 2021/04/24 21:08:09 by acami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int	get_next_line(int fd, char **line);

typedef struct		s_line_holder
{
	s_line_holder	*next;
	int				fd;
	char			*str;
}					t_line_holder;


#endif
