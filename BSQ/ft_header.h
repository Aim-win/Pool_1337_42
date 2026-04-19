/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 10:36:54 by momahdam          #+#    #+#             */
/*   Updated: 2026/04/19 10:36:57 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_map
{
	char	empty;
	char	obs;
	char	full;
	char	**matrix;
	int		is_valid;
}	t_map;

typedef struct s_square
{
	int	x_start;
	int	y_start;
	int	x_end;
	int	y_end;
}	t_square;

# define BUFFER_STDIN	1000000000

void		ft_error(void);
void		ft_error_map(void);
void		ft_exit(void);
int			ft_init(int argc, char *argv);
char		**ft_split(char *str);
t_map		ft_get_map(int argc, char *argv);
int			ft_is_map_valid(char **array_map, t_map map);
int			ft_check_map_line_value(char **array_map, t_map map);
int			ft_check_map_line_len(char **array_map);
t_map		ft_solver(t_map map);
t_square	find_square(t_map map, t_square square, int x_start, int y_start);
int			square_size(t_square square);
int			check_square(t_map map, t_square square);
t_map		fill_square(t_map map, t_square square);
int			x_size(char **matrix);
int			y_size(char **matrix);
void		ft_free(char **dict);
void		ft_free_map(t_map map);
char		**ft_read_file(char *dictpath);
char		**ft_read_stdin(void);
int			ft_get_file_size(char *dictpath, int *file);
int			ft_strlen(char *str);
int			ft_strprintable_len(char *str);
char		*ft_strdup(char *src);
int			ft_atoi(char *str);
char		**ft_copy(char **array_map);
void		ft_putstr(char *str);
void		ft_putchar(char c);
int			ft_is_printable(char c);
int			ft_is_number(char c);
int			ft_is_whitespace(char c);
void		ft_print_solution(t_map map);

#endif
