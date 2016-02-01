/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2006 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License Version 2.4 (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.systemc.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  sc_wait.h -- Wait() and related functions.

  Original Author: Stan Y. Liao, Synopsys, Inc.
                   Martin Janssen, Synopsys, Inc.

 *****************************************************************************/

/******************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date:
  Description of Modification:

******************************************************************************/

/* 
$Log: sc_wait.h,v $
Revision 1.5  2007/11/19 19:21:54  dgb
Re-checkin systemc 2.2.0 source

Revision 1.1.1.1  2006/12/15 20:31:37  acg
SystemC 2.2

Revision 1.2  2006/01/03 23:18:45  acg
Changed copyright to include 2006.

Revision 1.1.1.1  2005/12/19 23:16:44  acg
First check in of SystemC 2.1 into its own archive.

Revision 1.10  2005/07/30 03:45:05  acg
Changes from 2.1, including changes for sc_process_handle.

Revision 1.9  2005/04/04 00:16:08  acg
Changes for directory name change to sys from systemc.
Changes for sc_string going to std::string.
Changes for sc_pvector going to std::vector.
Changes for reference pools for bit and part selections.
Changes for const sc_concatref support.

Revision 1.6  2004/10/13 18:13:22  acg
sc_ver.h - updated version number. sc_wait.h remove inclusion of
sysc/kernel/sc_event.h because it is not necessary.

Revision 1.5  2004/09/27 20:49:10  acg
Andy Goodrich, Forte Design Systems, Inc.
   - Added a $Log comment so that CVS checkin comments appear in the
        checkout source.

*/

#ifndef SC_WAIT_H
#define SC_WAIT_H


#include "sysc/kernel/sc_simcontext.h"

namespace sc_core {

class sc_event;
class sc_event_and_list;
class sc_event_or_list;
class sc_simcontext;

extern sc_simcontext* sc_get_curr_simcontext();

// static sensitivity for SC_THREADs and SC_CTHREADs

extern
void
wait( sc_simcontext* = sc_get_curr_simcontext() );


// dynamic sensitivity for SC_THREADs and SC_CTHREADs

extern
void
wait( const sc_event&,
      sc_simcontext* = sc_get_curr_simcontext() );

extern
void
wait( sc_event_or_list&,
      sc_simcontext* = sc_get_curr_simcontext() );

extern
void
wait( sc_event_and_list&,
      sc_simcontext* = sc_get_curr_simcontext() );

extern
void
wait( const sc_time&,
      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
wait( double v, sc_time_unit tu,
      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    wait( sc_time( v, tu, simc ), simc );
}

extern
void
wait( const sc_time&,
      const sc_event&,
      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
wait( double v, sc_time_unit tu,
      const sc_event& e,
      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    wait( sc_time( v, tu, simc ), e, simc );
}

extern
void
wait( const sc_time&,
      sc_event_or_list&,
      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
wait( double v, sc_time_unit tu,
      sc_event_or_list& el,
      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    wait( sc_time( v, tu, simc ), el, simc );
}

extern
void
wait( const sc_time&,
      sc_event_and_list&,
      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
wait( double v, sc_time_unit tu,
      sc_event_and_list& el,
      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    wait( sc_time( v, tu, simc ), el, simc );
}


// static sensitivity for SC_METHODs

extern
void
next_trigger( sc_simcontext* = sc_get_curr_simcontext() );


// dynamic sensitivity for SC_METHODs

extern
void
next_trigger( const sc_event&,
	      sc_simcontext* = sc_get_curr_simcontext() );

extern
void
next_trigger( sc_event_or_list&,
	      sc_simcontext* = sc_get_curr_simcontext() );

extern
void
next_trigger( sc_event_and_list&,
	      sc_simcontext* = sc_get_curr_simcontext() );

extern
void
next_trigger( const sc_time&,
	      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
next_trigger( double v, sc_time_unit tu,
	      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    next_trigger( sc_time( v, tu, simc ), simc );
}

extern
void
next_trigger( const sc_time&,
	      const sc_event&,
	      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
next_trigger( double v, sc_time_unit tu,
	      const sc_event& e,
	      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    next_trigger( sc_time( v, tu, simc ), e, simc );
}

extern
void
next_trigger( const sc_time&,
	      sc_event_or_list&,
	      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
next_trigger( double v, sc_time_unit tu,
	      sc_event_or_list& el,
	      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    next_trigger( sc_time( v, tu, simc ), el, simc );
}

extern
void
next_trigger( const sc_time&,
	      sc_event_and_list&,
	      sc_simcontext* = sc_get_curr_simcontext() );

inline
void
next_trigger( double v, sc_time_unit tu,
	      sc_event_and_list& el,
	      sc_simcontext* simc = sc_get_curr_simcontext() )
{
    next_trigger( sc_time( v, tu, simc ), el, simc );
}


// for SC_METHODs and SC_THREADs and SC_CTHREADs

extern
bool
timed_out( sc_simcontext* = sc_get_curr_simcontext() );

// misc.

extern
void
sc_set_location( const char*,
		 int,
		 sc_simcontext* = sc_get_curr_simcontext() );

} // namespace sc_core

#endif

// Taf!
