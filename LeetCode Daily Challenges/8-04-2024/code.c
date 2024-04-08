int countStudents(int* students, int studentsSize, int* sandwiches, int sandwichesSize) {
    
    int ones_count;
    int zeros_count;
    int *ind;
    int *first;
    int *last;
    int *sandwich;

    ones_count = zeros_count = 0;

    for ( ind = students; ind != students+studentsSize; ind += 1 )
    {
        if ( *ind )
            ones_count += 1;
        else
            zeros_count += 1;
    }

    sandwich = sandwiches;
    first = students;
    last = &*(students+(studentsSize-1));

    while ( studentsSize )
    {
        if ( *sandwich && !ones_count )
            break;
        
        if ( !*sandwich && !zeros_count )
            break;

        if ( *first == *sandwich )
        {
            if ( *first )
                ones_count -= 1;
            else
                zeros_count -= 1;
                
            for ( ind = first; ind != students+(studentsSize - 1); ind += 1 )
            {
                *ind = *(ind + 1);
            }
            studentsSize -= 1;
            sandwich += 1;
        }
        else
        {
            last = first;
            first += 1;
        }

        if ( first == students+studentsSize )
            first = students;
        if ( last == students+studentsSize )
            last -= 1; 
    }

    return studentsSize;

}