// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Eval_Visitor.h"
//#include "Visitor.h"
//#include "Add_Node.h"
//#include "Num_Node.h"

void Eval_Visitor :: visit_Add_Node (Add_Node node)
{
	node.getChild1()->accept(*this);
	node.getChild2()->accept(*this);
	int n2 = this->stack.pop(), n1 = this->stack.pop();
	stack.push(n1+n2);
}

void Eval_Visitor :: visit_Num_Node (Num_Node node)
{
	this->stack.push(node.getVal());
}

