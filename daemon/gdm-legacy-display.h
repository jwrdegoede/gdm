/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2007 William Jon McCann <mccann@jhu.edu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */


#ifndef __GDM_LEGACY_DISPLAY_H
#define __GDM_LEGACY_DISPLAY_H

#include <glib-object.h>
#include "gdm-display.h"

G_BEGIN_DECLS

#define GDM_TYPE_LEGACY_DISPLAY         (gdm_legacy_display_get_type ())
#define GDM_LEGACY_DISPLAY(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), GDM_TYPE_LEGACY_DISPLAY, GdmLegacyDisplay))
#define GDM_LEGACY_DISPLAY_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), GDM_TYPE_LEGACY_DISPLAY, GdmLegacyDisplayClass))
#define GDM_IS_LEGACY_DISPLAY(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), GDM_TYPE_LEGACY_DISPLAY))
#define GDM_IS_LEGACY_DISPLAY_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), GDM_TYPE_LEGACY_DISPLAY))
#define GDM_LEGACY_DISPLAY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GDM_TYPE_LEGACY_DISPLAY, GdmLegacyDisplayClass))

typedef struct GdmLegacyDisplayPrivate GdmLegacyDisplayPrivate;

typedef struct
{
        GdmDisplay               parent;
        GdmLegacyDisplayPrivate *priv;
} GdmLegacyDisplay;

typedef struct
{
        GdmDisplayClass   parent_class;

} GdmLegacyDisplayClass;

GType               gdm_legacy_display_get_type                (void);
GdmDisplay *        gdm_legacy_display_new                     (int display_number);


G_END_DECLS

#endif /* __GDM_LEGACY_DISPLAY_H */
