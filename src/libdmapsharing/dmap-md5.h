/*
 * Copyright (C) 2006 INDT
 *  Andre Moreira Magalhaes <andre.magalhaes@indt.org.br>
 * Copyright (C) 2004,2005 Charles Schmidt <cschmidt2@emich.edu>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA*
 */

#ifndef __DMAP_MD5_H__
#define __DMAP_MD5_H__

#include <glib.h>

G_BEGIN_DECLS
	void dmap_hash_generate (short version_major,
				 const guchar * url,
				 guchar hash_select,
				 guchar * out, gint request_id);

#ifdef HAVE_CHECK
#include <check.h>

Suite *dmap_test_daap_connection_suite (void);
#endif

G_END_DECLS
#endif
