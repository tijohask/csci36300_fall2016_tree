// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mod_Node.h"
//#include "Visitor.h"

#define MOD_PREC 2

// Ryan: Please include comments in each file.
// FIXED: Added comments
void Mod_Node :: accept (Visitor & v)
{//accept visitor
	v.visit_Mod_Node(*this);
}

int Mod_Node :: precedence ()
{//return div precedence (2)
	return MOD_PREC;
}

#undef MOD_PREC
