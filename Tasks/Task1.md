# Level 1
1. Create a function called cubic, which takes an integer X as input and returns a float Y as
the output, satisfying the equation</br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;***Y = 1000X³ - 30000X² + 200000X + 500000***
2. Create a int array of size 21 that contain data of cubic(0) to cubic(20)
3. Print the table of X and Y values from the array data.</br>

# Level2
1. Create a function called graph, which takes a pointer to int called table as the input, and
display a graph that satisfy the following criteria:
   - vertical axis(y-axis) is represented by |
   - horizontal axis (x-axis) is represented by -
   - origin is represented by +
   - line of graph is represented by %
   - each column(x-axis) represent 1 unit
   - each row(y-axis) represent 50000 units, for example:</br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       | row 2: from 50001 to 100000</br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;        | row 1: from 1 to 50000</br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       | row 0: x-axis, all use - except x-intercept use %</br>
   - only need to show graph of x-value from 0 to 20 inclusive, and y-value from
     0-1000000
   - x or y intercept is showed as % instead of - if any
   - 2 space is padded between each column of the graph, but for x-axis whole line use -
2. Pass the pointer to data as input to the function graph

# Level 3
  
1. Use code page 437 for this level.
2. Add title to the graph, remember to show the square:</br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ***y = 100[(x-10)²(x-110) + 500]***
3. Label each row and column
4. Fill the area under the graph using 0xDB from code page 437
5. Fill the area above the graph using 0xB0 from code page 437
6. Move the table to right side of the graph, use box drawing and block characters from code
page 437 to draw the table, and also the axes
7. Change the marking of the points of the graph to 2 characters ><
8. Note that 0xDB and 0xB0 takes 2 character spaces
