// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _EVAL_VISITOR_H_
#define _EVAL_VISITOR_H_

#include "Stack.h"
#include "Visitor.h"
//class Node;
//#include "Node.h"
//class Binary_Node;
//#include "Binary_Node.h"
//class Add_Node;
#include "Add_Node.h"
#include "Sub_Node.h"
//#include "Mul_Node.h"
//#include "Div_Node.h"
//#include "Mod_Node.h"
//class Num_Node;
#include "Num_Node.h"

// The top Node object that all other Node objects will be inheriting from.
class Eval_Visitor : public Visitor
{
public:
	Eval_Visitor (void) {};
	
	~Eval_Visitor (void) {};
	
	void visit_Add_Node(Add_Node&);
	void visit_Sub_Node(Sub_Node&);
//	void visit_Mul_Node(Mul_Node&);
//	void visit_Div_Node(Mul_Node&);
//	void visit_Mod_Node(Mul_Node&);
	void visit_Num_Node(Num_Node&);
	
//	void push(int);
//	int pop();

private:
	Stack <int> stack;
//	virtual int eval (void) = 0;
//	virtual void preorder (ostream &) = 0;
//	virtual bool execute (Stack <int> & stack) = 0;
//	virtual int precedence() = 0;
};

#endif
