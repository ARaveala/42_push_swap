# ft_push_swap

`push_swap` is a 42 School algorithmic project focused on sorting a stack of integers using the fewest possible operations.  
The challenge lies in implementing a sorting strategy using only two stacks and a very limited set of allowed moves all while keeping the number of operations as low as possible.

The project emphasizes algorithmic thinking, data structures (especially linked lists), and optimization under strict constraints.

---

## Usage  
**TBA**  
*(Compilation, running examples, flags, etc. will be added later.Right now attempting to reverse-engineer an executable utalized for checking corectness of push swap, for fun) *

---

## Project Overview

The goal is simple on paper:  
Sort a list of integers using only the operations provided by the subject (`sa`, `pb`, `ra`, etc.).

In practice, the project requires you to:

- Select or design an efficient sorting algorithm  
- Implement it using linked lists  
- Optimize aggressively to reduce the number of moves  
- Handle edge cases and large input sizes  
- Maintain clean, stable, and memory safe code  

I initially tried to design my own algorithm from scratch. It was a great learning experience, but I quickly discovered why so many peers recommended the **Turk algorithm** (also known as the “chunk” or “greedy” method). After exploring alternatives, I eventually adopted a variation of Turks because it was the most practical path forward — and because it was the method others could help me debug and refine.

---

## What I Learned

### 1. The temptation to reinvent everything  
My first instinct was to create a completely original algorithm. That ambition taught me a lot, but it also showed me how easy it is to get lost in complexity. Using a known strategy wasn’t “cheating”, it was learning how to implement and optimize something proven.

### 2. Optimization can become a rabbit hole  
Once the algorithm worked, I kept trying to squeeze out more performance.  
Sometimes I gained a few moves, sometimes nothing at all.  
The hardest part was knowing when to stop. This project taught me the importance of setting realistic limits and respecting my own time and energy. Improvement is good, but perfectionism can become a trap.

### 3. The value of peers 
Talking with other students was essential. Understanding Turks, debugging edge cases, and comparing approaches helped me progress faster than working alone. Collaboration is a huge part of the 42 experience, and this project made that very clear.

### 4. Using my own libft in a real project 
Integrating my `libft` gave me immediate feedback on what worked, what didn’t, and what was missing. It highlighted the importance of writing reusable, reliable utility functions. 

### 5. Enjoyable but unforgiving 
`push_swap` is fun in a puzzle‑like way, but it’s also strict. One wrong pointer, one off by one error, one forgotten free and everything collapses. It pushed me to be more disciplined with memory, edge cases, and testing. 

--- 

## Notes For my previous project (*philosophers*)
I included code snippets to illustrate certain concepts. I’m still deciding whether to do the same here. `push_swap` is more algorithmic and less visual, so I may keep this README focused on explanation rather than code examples.
