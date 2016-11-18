// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _MUL_NODE_H_
#define _MUL_NODE_H_

#include "Stack.h"
//#include "Node.h"
#include "Binary_Node.h"
//#include "Visitor.h"

// Mul node, for when you want to multiply something.
class Mul_Node : public Binary_Node
{
public:
	Mul_Node (void) {};
	void accept (Visitor &);
	int precedence();
};

#endif

