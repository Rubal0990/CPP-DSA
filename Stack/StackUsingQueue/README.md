# Implementing stack using queue

Implement a Stack data structure using only instances of Queue. Queue operations allowed on the instances.

## Algorithm

This method makes sure that newly entered element is always at the front of ‘q1’, so that pop operation just dequeues from ‘q1’. ‘q2’ is used to put every new element at front of ‘q1’.

1.  push(s, x) operation’s step are described below:
    Enqueue x to q2
    One by one dequeue everything from q1 and enqueue to q2.
    Swap the names of q1 and q2
2.  pop(s) operation’s function are described below:
    Dequeue an item from q1 and return it.

## Constraints

- 1 <= Ai <= 10<sup>7</sup>
