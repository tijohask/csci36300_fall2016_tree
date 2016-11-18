// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Eval_Visitor.h"
//#include "Visitor.h"
//#include "Add_Node.h"
//#include "Num_Node.h"

// Ryan: Please make sure to comment in each file.
// FIXED: Added comments

/*
 * Every visit node method will start by visiting the node's children.
 * It will then pop two elements off the stack and run its 
 * evaluation on it.
 */
void Eval_Visitor :: visit_Add_Node (Add_Node & node)
{
	node.getChild1()->accept(*this);
	node.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1+n2);
}

void Eval_Visitor :: visit_Sub_Node (Sub_Node & node)
{
	node.getChild1()->accept(*this);
	node.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1-n2);
}

void Eval_Visitor :: visit_Mul_Node (Mul_Node & node)
{
	node.getChild1()->accept(*this);
	node.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	stack.push(n1*n2);
}

void Eval_Visitor :: visit_Div_Node (Div_Node & node)
{
	node.getChild1()->accept(*this);
	node.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	if( n2 == 0 )
	{//If the divisor is 0, throw an error.
		throw 0;
	}
	//push the division of the numbers on the stack.
	stack.push(n1/n2);
}

void Eval_Visitor :: visit_Mod_Node (Mod_Node & node)
{
	node.getChild1()->accept(*this);
	node.getChild2()->accept(*this);
	int n1 = this->stack.pop(), n2 = this->stack.pop();
	if( n2 == 0 )
	{//If the divisor is 0, throw an error.
		throw 0;
	}
	//push the division of the numbers on the stack.
	stack.push(n1%n2);
}

// Visiting a num node will just have the node push it's value onto the
// visitor's stack
void Eval_Visitor :: visit_Num_Node (Num_Node & node)
{
	this->stack.push(node.getVal());
}

// Return the Visitor's stack's topmost value.
int Eval_Visitor :: pop ()
{
	return this->stack.pop();
}
