// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mul_Node.h"
//#include "Visitor.h"

#define MUL_PREC 2

// Ryan: Please include comments in each file.
// FIXED: Added comments
void Mul_Node :: accept (Visitor & v)
{//accept visitor
	v.visit_Mul_Node(*this);
}

int Mul_Node :: precedence ()
{//return mul precedence (2)
	return MUL_PREC;
}

#undef MUL_PREC
