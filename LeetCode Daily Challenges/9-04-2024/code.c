int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    
    int Timecount;
    int ind;

    Timecount = 0;

    for ( ind = 0; ind < ticketsSize; ind += 1 )
    {
        if ( ind <= k ) {
            if ( *(tickets+ind) < *(tickets+k) )
                Timecount += *(tickets+ind);
            else
                Timecount += *(tickets+k);
        }
        else {
            if ( *(tickets+ind) < *(tickets+k) )
                Timecount += *(tickets+ind);
            else
                Timecount += *(tickets+k) - 1;
        }
    }
    return Timecount;
}