/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmacdona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 11:52:40 by mmacdona          #+#    #+#             */
/*   Updated: 2017/06/06 13:50:28 by mmacdona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_array_up(char *ap, size_t size, size_t n); 
size_t	ft_findnext(char const *str, char c, size_t start);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar(char s);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	ft_strclr(char *s);
void	ft_strdel(char **as);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *s);
char	*ft_strmap(char const *s, char (*f)	(char));
char	*ft_strmapi(char const *s, char (*f)	(unsigned int, char));
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
int		ft_strspaces(char *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char *s);
size_t	ft_words(char const *str, char d);
int		str_copy(char *src, char *dest, int n);

#endif
