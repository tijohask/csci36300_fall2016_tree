#include "Num_Node.h"
#include "Visitor.h"

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
