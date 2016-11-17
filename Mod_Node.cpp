// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mod_Node.h"
//#include "Visitor.h"

#define MOD_PREC 2

//Add_Node :: ~Add_Node (void)
//{
//
//}

// Ryan: Please include comments in each file.

void Mod_Node :: accept (Visitor & v)
{
	v.visit_Mod_Node(*this);
}

int Mod_Node :: precedence ()
{
	return MOD_PREC;
}

#undef MOD_PREC
