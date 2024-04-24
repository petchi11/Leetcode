int tribonacci(int n){

    if ( !n )
        return n;
    if ( n == 1 || n == 2 )
        return 1;

    int prev_prev;
    int prev;
    int curr;
    int loop;
    int result;

    loop = 3;
    prev_prev = 0;
    prev = 1;
    curr = 1;

    while ( loop <= n )
    {
        result = prev_prev + prev + curr;
        prev_prev = prev;
        prev = curr;
        curr = result;

        loop += 1;
    }

    return result;
}