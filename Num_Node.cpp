// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Num_Node.h"
#include "Visitor.h"

// Ryan: Please include comments in each file.

Num_Node :: Num_Node (int n)
{
	val = n;
}

void Num_Node :: accept (Visitor & v)
{
	v.visit_Num_Node(*this);
}

int Num_Node :: getVal ()
{
	return val;
}

void Num_Node :: setVal (int input)
{
	val = input;
}
