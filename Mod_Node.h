// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _MOD_NODE_H_
#define _MOD_NODE_H_

#include "Stack.h"
//#include "Node.h"
#include "Binary_Node.h"
//#include "Visitor.h"

// Mod node, for when you want to modulo something
class Mod_Node : public Binary_Node
{
public:
	Mod_Node (void) {};
	void accept (Visitor &);
	int precedence();
};

#endif

