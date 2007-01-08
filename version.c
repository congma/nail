#define	V	"12.3pre"
/*
 * Heirloom mailx - a mail user agent derived from Berkeley Mail.
 *
 * Copyright (c) 2000-2004 Gunnar Ritter, Freiburg i. Br., Germany.
 */
/*
 * Copyright (c) 1980, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef lint
#ifdef	DOSCCS
static char sccsid[] = "@(#)version.c	2.364 (gritter) 01/08/07";
#endif
#endif /* not lint */

/*
 * Just keep track of the date/sid of this version of Mail.
 * Load this file first to get a "total" Mail version.
 */
/*char	*version = "8.1 6/6/93";*/
const char *version = V " 01/08/07";
#ifndef	lint
static const char *versionid
#ifdef	__GNUC__
__attribute__ ((unused))
#endif
= "@(#)mailx " V " (gritter) 01/08/07";
#endif	/* !lint */
/* SLIST */
/*
aux.c:static char sccsid[] = "@(#)aux.c	2.83 (gritter) 3/4/06";
base64.c:static char sccsid[] = "@(#)base64.c	2.14 (gritter) 4/21/06";
cache.c:static char sccsid[] = "@(#)cache.c	1.61 (gritter) 3/4/06";
cmd1.c:static char sccsid[] = "@(#)cmd1.c	2.96 (gritter) 3/4/06";
cmd2.c:static char sccsid[] = "@(#)cmd2.c	2.46 (gritter) 3/4/06";
cmd3.c:static char sccsid[] = "@(#)cmd3.c	2.84 (gritter) 01/02/07";
cmdtab.c:static char sccsid[] = "@(#)cmdtab.c	2.51 (gritter) 3/4/06";
collect.c:static char sccsid[] = "@(#)collect.c	2.52 (gritter) 3/4/06";
def.h: *	Sccsid @(#)def.h	2.104 (gritter) 3/4/06
dotlock.c:static char sccsid[] = "@(#)dotlock.c	2.9 (gritter) 3/20/06";
edit.c:static char sccsid[] = "@(#)edit.c	2.24 (gritter) 3/4/06";
extern.h: *	Sccsid @(#)extern.h	2.159 (gritter) 3/4/06
fio.c:static char sccsid[] = "@(#)fio.c	2.71 (gritter) 01/02/07";
getname.c:static char sccsid[] = "@(#)getname.c	2.5 (gritter) 3/4/06";
getopt.c:	Sccsid @(#)getopt.c	1.6 (gritter) 10/2/04	
glob.h: *	Sccsid @(#)glob.h	2.26 (gritter) 3/4/06
head.c:static char sccsid[] = "@(#)head.c	2.17 (gritter) 3/4/06";
hmac.c:	Sccsid @(#)hmac.c	1.8 (gritter) 3/4/06	
imap.c:static char sccsid[] = "@(#)imap.c	1.217 (gritter) 3/4/06";
imap_gssapi.c:static char sccsid[] = "@(#)imap_gssapi.c	1.10 (gritter) 3/4/06";
imap_search.c:static char sccsid[] = "@(#)imap_search.c	1.29 (gritter) 3/4/06";
junk.c:static char sccsid[] = "@(#)junk.c	1.73 (gritter) 3/4/06";
lex.c:static char sccsid[] = "@(#)lex.c	2.86 (gritter) 12/25/06";
list.c:static char sccsid[] = "@(#)list.c	2.61 (gritter) 01/07/07";
lzw.c: * Sccsid @(#)lzw.c	1.11 (gritter) 3/4/06
macro.c:static char sccsid[] = "@(#)macro.c	1.13 (gritter) 3/4/06";
maildir.c:static char sccsid[] = "@(#)maildir.c	1.20 (gritter) 12/28/06";
main.c:static char sccsid[] = "@(#)main.c	2.49 (gritter) 7/7/06";
md5.c:	Sccsid @(#)md5.c	1.8 (gritter) 3/4/06	
md5.h:	Sccsid @(#)md5.h	1.8 (gritter) 3/4/06	
mime.c:static char sccsid[]  = "@(#)mime.c	2.67 (gritter) 01/06/07";
names.c:static char sccsid[] = "@(#)names.c	2.22 (gritter) 3/4/06";
nss.c:static char sccsid[] = "@(#)nss.c	1.45 (gritter) 12/25/06";
openssl.c:static char sccsid[] = "@(#)openssl.c	1.24 (gritter) 3/4/06";
pop3.c:static char sccsid[] = "@(#)pop3.c	2.43 (gritter) 3/4/06";
popen.c:static char sccsid[] = "@(#)popen.c	2.20 (gritter) 3/4/06";
quit.c:static char sccsid[] = "@(#)quit.c	2.28 (gritter) 3/4/06";
rcv.h: *	Sccsid @(#)rcv.h	2.7 (gritter) 3/4/06
send.c:static char sccsid[] = "@(#)send.c	2.83 (gritter) 3/4/06";
sendout.c:static char sccsid[] = "@(#)sendout.c	2.94 (gritter) 01/07/07";
smtp.c:static char sccsid[] = "@(#)smtp.c	2.41 (gritter) 01/08/07";
ssl.c:static char sccsid[] = "@(#)ssl.c	1.39 (gritter) 6/12/06";
strings.c:static char sccsid[] = "@(#)strings.c	2.6 (gritter) 3/4/06";
temp.c:static char sccsid[] = "@(#)temp.c	2.8 (gritter) 3/4/06";
thread.c:static char sccsid[] = "@(#)thread.c	1.57 (gritter) 3/4/06";
tty.c:static char sccsid[] = "@(#)tty.c	2.28 (gritter) 3/4/06";
v7.local.c:static char sccsid[] = "@(#)v7.local.c	2.10 (gritter) 3/4/06";
vars.c:static char sccsid[] = "@(#)vars.c	2.11 (gritter) 3/4/06";
*/
