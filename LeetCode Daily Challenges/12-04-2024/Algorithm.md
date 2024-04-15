## Two Pointers

### Approach

If there are gaps between the bar then, there will be water. so, inbetween the left-most and right-most bars if there are values which are less than them (left and right-most ) will contain water in it.

- two pointers point to the `start` and `end`
- set `maximum` = `count` = 0.
- loop until `start` less than `end`.
- if `start.val` <= `end.val`
    - so, the values in the path which are less than start.val will contains water in it. 
    - get the max ( maximum, start.val ) and set it `maximum`.
    - count `maximum - start.val`.
    - move the start pointer to next position. 
- else 
    - get the max ( maximum, start.val ) and set it `maximum`.
    - count `maximum - start.val`
    - move the end pointer to next position. (reverse).
- return `count`.

