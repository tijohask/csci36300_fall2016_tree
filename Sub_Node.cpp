// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Sub_Node.h"
#include "Visitor.h"

//Add_Node :: ~Add_Node (void)
//{
//
//}

// Ryan: Please include comments in each file.

void Sub_Node :: accept (Visitor & v)
{
	v.visit_Sub_Node(*this);
}

int Sub_Node :: precedence ()
{
	return 3;
}
