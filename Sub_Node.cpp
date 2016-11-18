// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Sub_Node.h"
//#include "Visitor.h"

#define SUB_PREC 3

// Ryan: Please include comments in each file.
// FIXED: Added Comments.
void Sub_Node :: accept (Visitor & v)
{//accept visitor
	v.visit_Sub_Node(*this);
}

int Sub_Node :: precedence ()
{//return sub precedence (3)
	return SUB_PREC;
}

#undef SUB_PREC
