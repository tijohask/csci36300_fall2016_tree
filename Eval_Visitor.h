// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _EVAL_VISITOR_H_
#define _EVAL_VISITOR_H_

#include "Stack.h"
#include "Visitor.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mul_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"
#include "Num_Node.h"

// The concrete implementation of visitor.
// Visits the various nodes of a tree, doing certain actions based on
// what the current node is.
class Eval_Visitor : public Visitor
{
public:
	Eval_Visitor (void) {};
	
	~Eval_Visitor (void) {};
	
	void visit_Add_Node(Add_Node&);
	void visit_Sub_Node(Sub_Node&);
	void visit_Mul_Node(Mul_Node&);
	void visit_Div_Node(Div_Node&);
	void visit_Mod_Node(Mod_Node&);
	void visit_Num_Node(Num_Node&);
	
	int pop();

private:
	Stack <int> stack;
};

#endif
