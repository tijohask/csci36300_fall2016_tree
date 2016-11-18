// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _VISITOR_H_
#define _VISITOR_H_

#include "Stack.h"
class Add_Node;
class Sub_Node;
class Mul_Node;
class Div_Node;
class Mod_Node;
class Num_Node;

// The top Visitor object that all other Visitor objects 
// will be inheriting from.
class Visitor
{
public:
	Visitor (void) {};

	virtual void visit_Add_Node(Add_Node&) = 0;
	virtual void visit_Sub_Node(Sub_Node&) = 0;
	virtual void visit_Mul_Node(Mul_Node&) = 0;
	virtual void visit_Div_Node(Div_Node&) = 0;
	virtual void visit_Mod_Node(Mod_Node&) = 0;
	virtual void visit_Num_Node(Num_Node&) = 0;
};

#endif
