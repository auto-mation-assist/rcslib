/*
*	New C++ Header  File starts here.
*	This file should be named obstacle_mapn_n_codegen_protos.hh
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  HHFile=obstacle_mapn.hh
*
*	.gen script :
*		0:load obstacle_mapn.hh
*		1:clear
*		2:select_from_file obstacle_mapn.hh
*		3:generate C++ protos>obstacle_mapn_n_codegen_protos.hh
*		4:generate C++ format>obstacle_mapn_n.cc
*		5:generate C++ update>obstacle_mapn_n.cc
*		6:generate C++ constructor>obstacle_mapn_n.cc
*		7:exit
*
*/

#ifndef obstacle_mapn_n_codegen_protos_hh_included
#define obstacle_mapn_n_codegen_protos_hh_included

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "obstacle_mapn.hh"

// Forward Function Prototypes


#ifndef MAX_OBSTACLE_MAPNAME_LENGTH
#define MAX_OBSTACLE_MAPNAME_LENGTH 17
#endif
#ifndef OBSTACLE_MAPNAME_LIST_LENGTH
#define OBSTACLE_MAPNAME_LIST_LENGTH 2
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
extern const NMLTYPE obstacle_mapid_list[OBSTACLE_MAPNAME_LIST_LENGTH];
extern const size_t obstacle_mapsize_list[OBSTACLE_MAPNAME_LIST_LENGTH];

// Enumerated Type Constants

extern int obstacle_mapFormat(NMLTYPE type, void *buffer, CMS *cms);

#endif
	/* # endif obstacle_mapn_n_codegen_protos_hh_included */ 
