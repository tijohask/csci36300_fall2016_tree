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

// Div node, for when you want to divide something.
class Div_Node : public Binary_Node
{
public:
	Div_Node (void) {};
	void accept (Visitor &);
	int precedence();
};

#endif

