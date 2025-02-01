// int max ( int , int ); 
int trap(int* height, int heightSize) {
    int start;
    int end;
    int count;
    int maximum;

    start = 0;
    end = heightSize - 1;

    maximum = count = 0;

    while ( start < end )
    {
        if ( *(height+start) <= *(height+end) )
        {
            //maximum = max (maximum, *(height+start));
            maximum = ( maximum < *(height+start) ) ? *(height+start) : maximum;
            count += maximum - *(height+start);
            start += 1;
        }
        else
        {
            //maximum = max ( maximum, *(height+end) );
            maximum = ( maximum < *(height+end) ) ? *(height+end) : maximum;
            count += maximum - *(height+end);
            end -= 1;
        }
    }

    return count;
}
// int max ( int a, int b )
// {
//     if ( a > b )
//         return a;
//     return b;
// }

// NEW LINE ADDED
