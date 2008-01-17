/*MT*
    
    MediaTomb - http://www.mediatomb.cc/
    
    comment.cc - this file is part of MediaTomb.
    
    Copyright (C) 2005 Gena Batyan <bgeradz@mediatomb.cc>,
                       Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>
    
    Copyright (C) 2006-2007 Gena Batyan <bgeradz@mediatomb.cc>,
                            Sergey 'Jin' Bostandzhyan <jin@mediatomb.cc>,
                            Leonhard Wimmer <leo@mediatomb.cc>
    
    MediaTomb is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2
    as published by the Free Software Foundation.
    
    MediaTomb is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    version 2 along with MediaTomb; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
    
    $Id$
*/

/// \file comment.cc

#ifdef HAVE_CONFIG_H
    #include "autoconfig.h"
#endif

#include "mxml.h"
#include "comment.h"

using namespace zmm;
using namespace mxml;

Comment::Comment(String text) : Node()
{
    type = mxml_node_comment;
    this->text = text;
}

void Comment::print_internal(Ref<StringBuffer> buf, int indent)
{
    static char *ind_str = "                                                               ";
    static char *ind = ind_str + strlen(ind_str);
    char *ptr = ind - indent * 2;
    *buf << ptr;
    
    *buf << "<!-- " << text << " -->";
}
