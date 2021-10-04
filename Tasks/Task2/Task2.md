# Level 1

1. Print a 5x5 tiles in console as below, where 2x1 characters = 1 tile:</br>
![Level1](https://user-images.githubusercontent.com/80484903/135872519-e0a185fd-4483-4969-a3a1-d1e0aebcb9bc.png)
2. Draw the Player represented by && inside the frame.
3. Print a new frame every second, up to 30 frames.
4. During each refresh, the Player randomly chooses to move up, right, left, or down by one tile, but cannot choose to stay at the same tile.
5. The Player cannot pass through the walls.

# Level 2
1. Generate a level 2 map using map.c, and any random seed.
2. This is a level containing 21x21 tiles, walls, and a destination only.
3. During each round the Player can move to 1 adjacent tile(up down left right) only, and cannot pass through walls. Find the path of the Player to destination and simulate each frame from start to end. 

# Level 3
1. Generate a level 3 map using map.c, and any random seed.
2. This is a level containing 20x20 tiles, walls, a destination, and also teleport portals.
3. During each round the Player can move to 1 adjacent tile(up down left right) only, and cannot pass through walls. Find the path of the Player to destination and simulate each frame from start to end.

# Level 4
1. Find the shortest distance from the Player to the destination in any level 2 or level 3 map.
2. No need to simulate each frame, but now display the path by overwriting tile of ground with * for normal version, or ▓ (U+2593) for BETTERVERSION

# Note
1. 2x1 characters represent a unit tile.
2. Each character + ,  |  and - represents the wall.
3. 2x1 characters “. “ (a period and a space)  represents a tile of ground.
4. 2x1 characters @@ means the destination.
5. 2x1 characters && means the Player.
6. 2x1 characters AA means Teleport Portal A, it will teleport Player to Teleport Portal B.
7. 2x1 characters BB means Teleport Portal B, it will teleport Player to  Teleport Portal A.
8. 2x1 characters CC means Teleport Portal C, it will teleport Player to Teleport Portal D.
9. 2x1 characters DD means Teleport Portal D, it will teleport Player to Teleport Portal C.
10. 2x1 characters EE means Teleport Portal E, it will teleport Player to Teleport Portal F.
11. 2x1 characters FF means Teleport Portal E, it will teleport Player to Teleport Portal E.
12. The period of each frame can be a minimum of 50ms.
13. Make sure your algorithmn is working in different maps, so feel free to generate random maps using map.c to verify your code. The output map file is called generatedmap
14. You are more than welcome to complete the task using BETTERVERSION of the map. Note that the width of each symbol is now twice the width of a normal character. The meaning of each symbols are as follows:
    - █  wall
    - ░  a tile of ground
    - δ   the Player
    - Φ  destination
    - α  Teleport Portal A
    - σ  Teleport Portal B

