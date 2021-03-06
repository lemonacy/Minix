/* $Header: /cvsup/minix/src/lib/libp/pexit.c,v 1.1.1.1 2005/04/21 14:56:23 beng Exp $ */
/*
 * (c) copyright 1983 by the Vrije Universiteit, Amsterdam, The Netherlands.
 *
 *          This product is part of the Amsterdam Compiler Kit.
 *
 * Permission to use, sell, duplicate or disclose this software must be
 * obtained in writing. Requests for such permissions may be sent to
 *
 *      Dr. Andrew S. Tanenbaum
 *      Wiskundig Seminarium
 *      Vrije Universiteit
 *      Postbox 7161
 *      1007 MC Amsterdam
 *      The Netherlands
 *
 */

#include	<pc_file.h>

extern struct file	**_extfl;
extern			_wrs();
extern			_wrz();
extern			_wln();

procexit(name) char *name; {
	struct file *f;

	f = _extfl[1];
	_wrs(5,"exit ",f);
	_wrz(name,f);
	_wln(f);
}
