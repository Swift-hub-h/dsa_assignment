This code is a proper depiction of using stack. Here, we ask user to input the statement( mathematical statement) and then check for both the opening and closing braces . If both the bracket's opening and closing is obtained the statement is said to be balances or else unbalanced.

Scan the expression from left to right.
Push every opening bracket (, [, { onto the stack.
When a closing bracket ), ], } is found, Pop the top element from the stack.
Compare: If the popped opening bracket matches the current closing bracket, continue. If they don't match (or the stack is empty), the expression is unbalanced.
Final Check: If the stack is empty at the end, the expression is Balanced.

In main():
It asks for the input and then use the funciton to checkbalance as defined.
