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

// The top Node object that all other Node objects will be inheriting from.
class Mod_Node : public Binary_Node
{
public:
	Mod_Node (void) {};
	//~Add_Node (void) {};
	void accept (Visitor &);
//	virtual void preorder (ostream &) = 0;
//	virtual bool execute (Stack <int> & stack) = 0;
	int precedence();
};

#endif

