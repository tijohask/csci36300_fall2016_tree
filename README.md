# csci36300_fall2016_tree
Infix to postfix solution, using a tree to represent the operation instead of a stack.

Current State:
My project is currently able to compile and run [after removing the reference to Eval_Visitor in the mpc...]. It can tell the user whether the equation the user entered is valid. It does not do any evaluation afterward.

Current Problems:
My forward declaration in Eval_Visitor comes back with the following error:

	Eval_Visitor.cpp: In member function ‘virtual void Eval_Visitor::visit_Add_Node(Add_Node)’:
	Eval_Visitor.cpp:6:47: error: ‘node’ has incomplete type
	 void Eval_Visitor :: visit_Add_Node (Add_Node node)
	                                               ^
	In file included from Eval_Visitor.h:10:0,
	                 from Eval_Visitor.cpp:1:
	Visitor.h:14:7: note: forward declaration of ‘class Add_Node’
	 class Add_Node;
	       ^
	Eval_Visitor.cpp: In member function ‘virtual void Eval_Visitor::visit_Num_Node(Num_Node)’:
	Eval_Visitor.cpp:14:47: error: ‘node’ has incomplete type
	 void Eval_Visitor :: visit_Num_Node (Num_Node node)
	                                               ^
	In file included from Eval_Visitor.h:10:0,
	                 from Eval_Visitor.cpp:1:
	Visitor.h:20:7: note: forward declaration of ‘class Num_Node’
	 class Num_Node;
 
I'm not sure what the best technique to use for this is. Should I declare the nodes as pointers? Because I don't think that would fix the fact that the nodes need to call a method in the visitor class.

// Ryan: These errors tell me there is a linking problem and you need forward declaration.
