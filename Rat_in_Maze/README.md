# Rat in maze
Problem: we have a rat stuck inside a maze. we need to find a path using which rat can enter out of the maze.  
This problem can be easily solved using backtracking approach.
### Backtracking.
Inside this algorithm, we come across each and every possible solution and try to remove all the solutions that does not pass the constrains. Thus our wrong solutions are restricted by boundary condition.  
### Approach
Our rat can go either below/ either down. and rat can only move on those blocks that are free. Thus we try to create 2 arrays, one having all the map of maze and other containing possible soltion to move out of maze. Boundary condition is responsible for making rat move back (backtracking).
## Input
![image](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Rat_in_Maze/Expected_input.png)
## Output
![image](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Rat_in_Maze/output.png)
## Path created using backtracking
![image](https://github.com/ashwinjain10320/Algorithms_for_CP/blob/main/Rat_in_Maze/Path_by_algorithm.png)
