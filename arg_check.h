/*
 * defines for malloc string routines...
 *
 * Copyright 1995 by Gray Watson
 *
 * This file is part of the dmalloc package.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * NON-COMMERCIAL purpose and without fee is hereby granted, provided
 * that the above copyright notice and this permission notice appear
 * in all copies, and that the name of Gray Watson not be used in
 * advertising or publicity pertaining to distribution of the document
 * or software without specific, written prior permission.
 *
 * Please see the PERMISSIONS file or contact the author for information
 * about commercial licenses.
 *
 * Gray Watson makes no representations about the suitability of the
 * software described herein for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The author may be contacted via http://www.letters.com/~gray/
 *
 * $Id: arg_check.h,v 1.13 1998/10/26 14:24:25 gray Exp $
 */

#ifndef __ARG_CHECK_H__
#define __ARG_CHECK_H__

#include "dmalloc.h"			/* for DMALLOC_SIZE */
#include "conf.h"

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

#if HAVE_BCMP
/*
 * Dummy function for checking bcmp's arguments.
 */
extern
int	_dmalloc_bcmp(const void *b1, const void *b2, const DMALLOC_SIZE len);
#endif /* if HAVE_BCMP */

#if HAVE_BCOPY
/*
 * Dummy function for checking bcopy's arguments.
 */
extern
void	_dmalloc_bcopy(const char *from, char *to, const DMALLOC_SIZE len);
#endif /* if HAVE_BCOPY */

#if HAVE_MEMCMP
/*
 * Dummy function for checking memcmp's arguments.
 */
extern
int	_dmalloc_memcmp(const void *b1, const void *b2, const DMALLOC_SIZE len);
#endif /* if HAVE_MEMCMP */

#if HAVE_MEMCPY
/*
 * Dummy function for checking memcpy's arguments.
 */
extern
char	*_dmalloc_memcpy(char *to, const char *from, const DMALLOC_SIZE len);
#endif /* if HAVE_MEMCPY */

#if HAVE_MEMSET
/*
 * Dummy function for checking memset's arguments.
 */
extern
char	*_dmalloc_memset(void *buf, const char ch, const DMALLOC_SIZE len);
#endif /* if HAVE_MEMSET */

#if HAVE_INDEX
/*
 * Dummy function for checking index's arguments.
 */
extern
char	*_dmalloc_index(const char *str, const char ch);
#endif /* if HAVE_INDEX */

#if HAVE_RINDEX
/*
 * Dummy function for checking rindex's arguments.
 */
extern
char	*_dmalloc_rindex(const char *str, const char ch);
#endif /* if HAVE_RINDEX */

#if HAVE_STRCAT
/*
 * Dummy function for checking strcat's arguments.
 */
extern
char	*_dmalloc_strcat(char *to, const char *from);
#endif /* if HAVE_STRCAT */

#if HAVE_STRCMP
/*
 * Dummy function for checking strcmp's arguments.
 */
extern
int	_dmalloc_strcmp(const char *s1, const char *s2);
#endif /* if HAVE_STRCMP */

#if HAVE_STRLEN
/*
 * Dummy function for checking strlen's arguments.
 */
extern
DMALLOC_SIZE	_dmalloc_strlen(const char *str);
#endif /* if HAVE_STRLEN */

#if HAVE_STRTOK
/*
 * Dummy function for checking strtok's arguments.
 */
extern
char	*_dmalloc_strtok(char *str, const char *sep);
#endif /* if HAVE_STRTOK */

#if HAVE_BZERO
/*
 * Dummy function for checking bzero's arguments.
 */
extern
void	_dmalloc_bzero(void *buf, const DMALLOC_SIZE len);
#endif /* if HAVE_BZERO */

#if HAVE_MEMCCPY
/*
 * Dummy function for checking memccpy's arguments.
 */
extern
char	*_dmalloc_memccpy(char *s1, const char *s2, const char ch,
			  const DMALLOC_SIZE len);
#endif /* if HAVE_MEMCCPY */

#if HAVE_MEMCHR
/*
 * Dummy function for checking memchr's arguments.
 */
extern
char	*_dmalloc_memchr(const char *s1, const char ch, const DMALLOC_SIZE len);
#endif /* if HAVE_MEMCHR */

#if HAVE_STRCHR
/*
 * Dummy function for checking strchr's arguments.
 */
extern
char	*_dmalloc_strchr(const char *str, const char ch);
#endif /* if HAVE_STRCHR */

#if HAVE_STRRCHR
/*
 * Dummy function for checking strrchr's arguments.
 */
extern
char	*_dmalloc_strrchr(const char *str, const char ch);
#endif /* if HAVE_STRRCHR */

#if HAVE_STRCPY
/*
 * Dummy function for checking strcpy's arguments.
 */
extern
char	*_dmalloc_strcpy(char *to, const char *from);
#endif /* if HAVE_STRCPY */

#if HAVE_STRNCPY
/*
 * Dummy function for checking strncpy's arguments.
 */
extern
char	*_dmalloc_strncpy(char *to, const char *from, const DMALLOC_SIZE len);
#endif /* if HAVE_STRNCPY */

#if HAVE_STRCASECMP
/*
 * Dummy function for checking strcasecmp's arguments.
 */
extern
int	_dmalloc_strcasecmp(const char *s1, const char *s2);
#endif /* if HAVE_STRCASECMP */

#if HAVE_STRNCASECMP
/*
 * Dummy function for checking strncasecmp's arguments.
 */
extern
int	_dmalloc_strncasecmp(const char *s1, const char *s2,
			     const DMALLOC_SIZE len);
#endif /* if HAVE_STRNCASECMP */

#if HAVE_STRSPN
/*
 * Dummy function for checking strspn's arguments.
 */
extern
int	_dmalloc_strspn(const char *str, const char *list);
#endif /* if HAVE_STRSPN */

#if HAVE_STRCSPN
/*
 * Dummy function for checking strcspn's arguments.
 */
extern
int	_dmalloc_strcspn(const char *str, const char *list);
#endif /* if HAVE_STRCSPN */

#if HAVE_STRNCAT
/*
 * Dummy function for checking strncat's arguments.
 */
extern
char	*_dmalloc_strncat(char *to, const char *from, const DMALLOC_SIZE len);
#endif /* if HAVE_STRNCAT */

#if HAVE_STRNCMP
/*
 * Dummy function for checking strncmp's arguments.
 */
extern
int	_dmalloc_strncmp(const char *s1, const char *s2,
			 const DMALLOC_SIZE len);
#endif /* if HAVE_STRNCMP */

#if HAVE_STRPBRK
/*
 * Dummy function for checking strpbrk's arguments.
 */
extern
char	*_dmalloc_strpbrk(const char *str, const char *list);
#endif /* if HAVE_STRPBRK */

#if HAVE_STRSTR
/*
 * Dummy function for checking strstr's arguments.
 */
extern
char	*_dmalloc_strstr(const char *str, const char *pat);
#endif /* if HAVE_STRSTR */

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __ARG_CHECK_H__ */
