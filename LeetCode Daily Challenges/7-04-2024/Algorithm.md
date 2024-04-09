# Two Stacks

## Approach
- two stacks `star_stack` and `open_stack`
- loop through the string `s`
    - if `s[i]` is `')'` 
        - pop `open_stack`
            - if empty pop `star_stack`
                - if empty
                    - return **false**
    - else if `s[i]` is `'*'`
        - push to `star_stack`
    - else if `s[i]` is `'('`
        - push to` open_stack`
- loop until both stack are empty
    - if `star_stack[i]` < `open_stack[i]`
        - return **false**
- if open_stack is empty
    - return **true**
- else
    - return **false**

## Time Complexity
- looping through the string would take `O(n)`
- Emptying the two stack would take `O(m)`
- Hence, both would take O`(m+n)`. -> `O(n)`.
## Space Complexity
- Both stack would take up space so, `O(n)`.