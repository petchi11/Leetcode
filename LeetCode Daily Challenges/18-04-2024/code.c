int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int i;
    int j;
    int box_count;
    int connected;

    box_count = 0;
    connected = 0;

    for ( i = 0; i < gridSize; i += 1 )
    {
        for ( j = 0; j < *(gridColSize+i); j += 1  )
        {
            if ( *(*(grid+i)+j) ) {
                box_count += 1;

                if ( j + 1 < *(gridColSize+i) && *(*(grid+i)+(j+1)) )
                    connected += 1;

                if ( i + 1 < gridSize && *(*(grid+(i+1))+j) )
                    connected += 1;
            }
        }
    }

    return (box_count * 4) - ( connected * 2 );
}