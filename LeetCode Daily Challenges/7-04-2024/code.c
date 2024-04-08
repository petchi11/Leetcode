struct stack
{
    int data;
    struct stack* next;
};

typedef struct stack stack;

int isEmpty ( stack* head )
{
    if ( !head )
        return 1;
    return  0;
}

stack* NODE ( int data )
{
    stack* temp = (stack*) malloc ( sizeof (stack) );

    (*temp).data = data;
    (*temp).next = NULL;

    return temp;
}

stack* push ( stack* head, int data )
{
    if ( !head ) {
        head = NODE (data);
        return head;
    }

    stack* temp = NODE (data);

    (*temp).next = head;
    head = temp;

    return head;
}

int pop ( stack** head )
{
    if ( isEmpty (*head) )
        return 0;
    
    int data;

    data = (*(*head)).data;
    *head = (*(*head)).next;

    return data;
}

bool checkValidString(char* s) {
    stack* head = NULL;
    stack* head2 = NULL;

    char poped;
    int i;

    i = 0;

    while ( *(s+i) )
    {
        if ( *(s+i) == ')' ) {
            poped = pop (&head);

            if ( !poped ) {
                poped = pop (&head2);
                if ( !poped )
                    return false;
            }
        } 
        else if ( *(s+i) == '*' ) {
            head2 = push (head2, i+1);
        }
         else {
            head = push (head, i+1);
        }
        i += 1;
    }

    while ( !isEmpty (head) && !isEmpty (head2) ) {

        if (pop (&head) > pop (&head2))
            return false;
    }

    if ( isEmpty (head) ) 
        return true;
    else
        return false;
}