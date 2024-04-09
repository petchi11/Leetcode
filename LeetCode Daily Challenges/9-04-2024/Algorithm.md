## One Pass

### Approach

- There are `n` number of people in a queue. you have to find how much time will it take for a person `k` at `tickets[k]` to buy his tickets.

- Important thing to note here is if the person `k` have to buy his ticket. we need to consider the persons who are before and after k. Since, it would take **exactly 1 second** for a person to buy a ticket. 
    - The persons who are before `k` have to buy `tickets[k]` tickets if greater than `k`.
    - if less than `k` they have to buy `tickets[i]` (their actually tickets count).
    - The persons who are after k have to buy `tickets[k]` - 1 tickets because once k bought his ticket we can stop. They would have bought `tickets[k]` - 1 before `k`.

- variable `Timecount`
- Loop through the array `tickets`
    - The elements before k
        - if the `tickets[i]` less than `tickets[k]` increment the `Timecount` by tickets[i].
        - else (equal or greater) increment the `Timecount` by `tickets[k]`.
    - The elements after k
        - if the `tickets[i]` less than `tickets[k] `increment the `Timecount` by `tickets[i]`.
        - else (equla or greater) increment the `Timecount` by `tickets[k]` - 1.
- return the Timecount.

### Time Complexity

- Since, we loop through the array `tickets` only once it would take `O(n)`.

### Space Complexity

- We didn't use any extra space so, the space complexity would be `O(1)`.