// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Num_Node.h"
//#include "Visitor.h"

// Ryan: Please include comments in each file.
// FIXED: Added comments.
Num_Node :: Num_Node (int n): val(n)
{
	//initialize with input value n
}

void Num_Node :: accept (Visitor & v)
{//accept visitor
	v.visit_Num_Node(*this);
}

int Num_Node :: getVal ()
{//return stored value
	return val;
}
