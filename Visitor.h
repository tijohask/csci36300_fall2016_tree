// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _VISITOR_H_
#define _VISITOR_H_

#include "Stack.h"
//class Node;
//#include "Node.h"
//class Binary_Node;
//#include "Binary_Node.h"
class Add_Node;
//#include "Add_Node.h"
class Sub_Node;
//#include "Sub_Node.h"
class Mul_Node;
//#include "Mul_Node.h"
class Div_Node;
//#include "Div_Node.h"
class Mod_Node;
//#include "Mod_Node.h"
class Num_Node;
//#include "Num_Node.h"

// The top Node object that all other Node objects will be inheriting from.
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

private:
//	Stack <int> stack;
//	virtual int eval (void) = 0;
//	virtual void preorder (ostream &) = 0;
//	virtual bool execute (Stack <int> & stack) = 0;
//	virtual int precedence() = 0;
};

#endif
