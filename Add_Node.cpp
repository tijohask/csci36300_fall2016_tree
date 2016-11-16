// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Node.h"
#include "Visitor.h"

#define ADD_PREC 3

//Add_Node :: ~Add_Node (void)
//{
//
//}

// Ryan: Please include comments in each file.

void Add_Node :: accept (Visitor & v)
{
	v.visit_Add_Node(*this);
}

int Add_Node :: precedence ()
{
	return ADD_PREC;
}

#undef ADD_PREC
