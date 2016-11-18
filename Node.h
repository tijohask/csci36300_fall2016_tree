// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _NODE_H_
#define _NODE_H_

#include "Stack.h"
#include "Visitor.h"

// The top Node object that all other Node objects will be inheriting from.
class Node
{
public:
	Node (void) {};
	virtual ~Node (void) {};
	virtual void accept (Visitor &) = 0;
};


#endif

