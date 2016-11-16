// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _DIV_NODE_H_
#define _DIV_NODE_H_

#include "Stack.h"
//#include "Node.h"
#include "Binary_Node.h"
//#include "Visitor.h"

// The top Node object that all other Node objects will be inheriting from.
class Div_Node : public Binary_Node
{
public:
	Div_Node (void) {};
	//~Add_Node (void) {};
	void accept (Visitor &);
//	virtual void preorder (ostream &) = 0;
//	virtual bool execute (Stack <int> & stack) = 0;
	int precedence();
};

#endif

