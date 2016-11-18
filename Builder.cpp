// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

// Ryan: Incomplete class.
// FIXED: Completed the class.

#include "Builder.h"
//#include "Node.h"
//#include "Num_Node.h"
//#include "Binary_Node.h"
//#include "Add_Node.h"

// For all binary build methods,
// Create the node pointer
// Clear the stack based on the pointer's precedence
// Push the pointer on the op_stack
bool Builder :: build_add_node ( )
{
	Add_Node * temp = new Add_Node();
	clear_op_stack( temp->precedence() );
	op_stack.push( temp );
}

bool Builder :: build_sub_node ( )
{
	Sub_Node * temp = new Sub_Node();
	clear_op_stack( temp->precedence() );
	op_stack.push( temp );
}

bool Builder :: build_mul_node ( )
{
	Mul_Node * temp = new Mul_Node();
	clear_op_stack( temp->precedence() );
	op_stack.push( temp );
}

bool Builder :: build_div_node ( )
{
	Div_Node * temp = new Div_Node();
	clear_op_stack( temp->precedence() );
	op_stack.push( temp );
}

bool Builder :: build_mod_node ( )
{
	Mod_Node * temp = new Mod_Node();
	clear_op_stack( temp->precedence() );
	op_stack.push( temp );
}

// Build the node based on the input
// Push it onto the tree stack
bool Builder :: build_num_node ( int n )
{
	Num_Node * temp = new Num_Node( n );
	tree_stack.push( temp );
}

// For every node popped off the op_stack, add the top two nodes on tree
// stack to it's children, then push the node back onto the stack
bool Builder :: clear_op_stack ( int prec )
{
	while( !op_stack.is_empty() && op_stack.top()->precedence() <= prec )
	{// while the stack is not empty and the stack's precedence
		Binary_Node * temp = op_stack.pop();
		temp->setChild1( tree_stack.pop() );
		temp->setChild2( tree_stack.pop() );
		tree_stack.push( temp );
	}
}

// push the incoming node on the tree stack
void Builder :: push_tree ( Node * node )
{
	tree_stack.push( node );
}

// clear the stack, then return the top node of the stack.
Node * Builder :: get_top ()
{
	clear_op_stack( 5 );
	return tree_stack.top();
}


