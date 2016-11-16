// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Div_Node.h"
//#include "Visitor.h"

#define DIV_PREC 2

//Add_Node :: ~Add_Node (void)
//{
//
//}

// Ryan: Please include comments in each file.

void Div_Node :: accept (Visitor & v)
{
	v.visit_Div_Node(*this);
}

int Div_Node :: precedence ()
{
	return DIV_PREC;
}

#undef DIV_PREC
