// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _SUB_NODE_H_
#define _SUB_NODE_H_

#include "Stack.h"
//#include "Node.h"
#include "Binary_Node.h"
//#include "Visitor.h"

// Subtraction node, for when the user wants to subtract something
class Sub_Node : public Binary_Node
{
public:
	Sub_Node (void) {};
	void accept (Visitor &);
	int precedence();
};

#endif

