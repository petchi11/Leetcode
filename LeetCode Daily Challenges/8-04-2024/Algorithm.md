## Two Pointers

### Approach

- First we take the count of the number of ones and zeros and store it in the variables.
    - <code>ones_count</code> 
    - <code>zeros_count</code>
- We are using two pointers namely <code>first</code> and <code>last</code> to keep in track of the queue and another pointer <code>sandwich</code> to point to the top of the stack.
- Loop until the <code>size</code> of the queue is greater than zero (i.e) _the students are yet to serve._  and
    - if top of the stack is <code>0</code> _(circular sandwich)_ the <code>zeros_count</code> must be greater than zero (i.e) _there are students who want circular sandwich._
    - if top of the stack is <code>1</code> _(square sandwich)_ the <code>ones_count</code> must be greater than zero (i.e) _there are students who want square sandwich._
    - if any one of the above condition is false. we break the loop and return the <code>size</code> of the queue. (i.e) _there are students who didn't got their sandwich._
- while looping 
    - if the first <code>students[i]</code> in the queue perference match with the top of the stack remove the <code>students[i]</code> from the stack by shifting in the <code>students</code> array. and move the <code>sandwich</code> pointer in the stack to point to the next element and decrement the <code>size</code> of the queue.
    - else if didn't match we make the <code>last</code> pointer to point to the (end) <code>first></code> pointer location and make the <code>first</code> pointer to point to the next <code>students[i]</code>.
- Edge cases
    - while looping if the <code>first</code> pointer point out of the index location we intialize it to the start address.
    - if the <code>last</code> pointer point out of the index location we decrement it to point to the last location.

- we return the <code>size</code> of the queue. Thus, all the students who served will be removed. so, the students didn't got served will be remain in the queue.

### Time Complexity

- Since, we calculate the counts of ones and zeros that would take <code>O(n)</code>.
- For shifting it would take <code>O(m)</code>.
- Totally, <code>The Time Complexity</code> would be <code>O(m+n)</code>.

### Space Complexity

- We didn't use any extra space. so, the <code>Space Complexity</code> would be <code>O(1)</code>.