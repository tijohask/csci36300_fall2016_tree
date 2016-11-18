// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _ADD_NODE_H_
#define _ADD_NODE_H_

#include "Stack.h"
//#include "Node.h"
#include "Binary_Node.h"
//#include "Visitor.h"

// Add node, for when you want to add things.
class Add_Node : public Binary_Node
{
public:
	Add_Node (void) {};
	void accept (Visitor &);
	int precedence();
};

#endif

