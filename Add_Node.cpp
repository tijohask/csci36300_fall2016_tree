// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Node.h"
#include "Visitor.h"

//Add_Node :: ~Add_Node (void)
//{
//
//}

void Add_Node :: accept (Visitor & v)
{
	v.visit_Add_Node(*this);
}

int Add_Node :: precedence ()
{
	return 3;
}
