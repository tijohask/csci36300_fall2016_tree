// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mul_Node.h"
#include "Visitor.h"

//Add_Node :: ~Add_Node (void)
//{
//
//}

// Ryan: Please include comments in each file.

void Mul_Node :: accept (Visitor & v)
{
	v.visit_Mul_Node(*this);
}

int Mul_Node :: precedence ()
{
	return 2;
}