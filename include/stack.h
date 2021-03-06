// self-referential structure                     
struct stackNode 
{                                   
  int data; // define data as an int             
  struct stackNode *nextPtr; // stackNode pointer
}; // end structure stackNode                     

typedef struct stackNode StackNode; // synonym for struct stackNode
typedef StackNode *StackNodePtr; // synonym for StackNode*

// prototypes
void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructions( void );
int stackLenght( StackNodePtr topPtr );
