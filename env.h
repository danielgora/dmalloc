/*
 * defines for the env routines
 *
 * Copyright 1993 by the Antaire Corporation
 *
 * This file is part of the dmalloc package.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose and without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies, and that
 * the name of Antaire not be used in advertising or publicity pertaining to
 * distribution of the document or software without specific, written prior
 * permission.
 *
 * The Antaire Corporation makes no representations about the suitability of
 * the software described herein for any purpose.  It is provided "as is"
 * without express or implied warranty.
 *
 * The author may be contacted at gray.watson@antaire.com
 *
 * $Id: env.h,v 1.3 1994/11/12 23:08:00 gray Exp $
 */

#ifndef __ENV_H__
#define __ENV_H__

#include "dmalloc_loc.h"		/* for IMPORT */

/* init values for arguments */
#define ADDRESS_INIT		0L
#define ADDRESS_COUNT_INIT	(-1)
#define DEBUG_INIT		(-1L)
#define INTERVAL_INIT		(-1)
#define LOGPATH_INIT		NULL
#define START_FILE_INIT		NULL
#define START_LINE_INIT		(-1)
#define START_COUNT_INIT	(-1)

/* env labels */
#define ADDRESS_LABEL		"addr"
#define DEBUG_LABEL		"debug"
#define INTERVAL_LABEL		"inter"
#define LOGFILE_LABEL		"log"
#define START_LABEL		"start"

#define ASSIGNMENT_CHAR		'='

/*<<<<<<<<<<  The below prototypes are auto-generated by fillproto */

/*
 * break up ADDR_ALL into ADDRP and ADDR_COUNTP
 */
IMPORT	void	_dmalloc_address_break(const char * addr_all,
				       unsigned long * addrp,
				       int * addr_countp);

/*
 * break up START_ALL into SFILEP, SLINEP, and SCOUNTP
 */
IMPORT	void	_dmalloc_start_break(const char * start_all,
				     char ** sfilep, int * slinep,
				     int * scountp);

/*
 * process the values of dmalloc environ variable(s) from ENVIRON
 * string.
 */
IMPORT	void	_dmalloc_environ_get(const char * environ,
				     unsigned long * addrp,
				     int * addr_countp,
				     long * debugp, int * intervalp,
				     char ** logpathp,
				     char ** sfilep, int * slinep,
				     int * scountp,
				     void (*message)());

/*
 * set dmalloc environ variable(s) with the values (maybe SHORT debug
 * info) into BUF
 */
IMPORT	void	_dmalloc_environ_set(char * buf, const char long_tokens,
				     const char short_tokens,
				     const unsigned long address,
				     const int addr_count, const long debug,
				     const int interval,
				     const char * logpath,
				     const char * sfile,
				     const int sline,
				     const int scount);

/*<<<<<<<<<<   This is end of the auto-generated output from fillproto. */

#endif /* ! __ENV_H__ */
