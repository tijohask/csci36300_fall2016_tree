// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Node.h"
//#include "Visitor.h"

#define ADD_PREC 3

// Ryan: Please include comments in each file.
// FIXED: Added Comments
void Add_Node :: accept (Visitor & v)
{//accept visitor
	v.visit_Add_Node(*this);
}

int Add_Node :: precedence ()
{//return add precedence (3)
	return ADD_PREC;
}

#undef ADD_PREC
