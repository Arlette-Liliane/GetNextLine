/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aemebiku <aemebiku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/28 16:02:37 by aemebiku          #+#    #+#             */
/*   Updated: 2014/06/28 16:02:38 by aemebiku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 1000000000

int					get_next_line(int const fd, char **line);

typedef struct		s_read
{
	int				size;
	int				index;
	int				fd;
	char			*read;
	struct s_read	*next;
}					t_read;

#endif /* !GET_NEXT_LINE_H */
