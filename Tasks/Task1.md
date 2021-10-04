# Level 1
1. Create a function called cubic, which takes an integer X as input and returns a float Y as
the output, satisfying the equation</br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;***Y = 1000X³ - 30000X² + 200000X + 500000***
2. Create a int array of size 21 that contain data of cubic(0) to cubic(20)
3. Print the table of X and Y values from the array data.</br>

# Level 1 Output
+----+---------+</br>
|&nbsp;&nbsp; X&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;   Y&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|</br>
+----+---------+</br>
|&nbsp;&nbsp;&nbsp;&nbsp;0&nbsp; | &nbsp;500000 |</br> 
|&nbsp;&nbsp;&nbsp;&nbsp;1&nbsp; | &nbsp;671000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;2&nbsp; | &nbsp;788000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;3&nbsp; | &nbsp;857000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;4&nbsp; | &nbsp;884000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;5&nbsp; | &nbsp;875000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;6&nbsp; | &nbsp;836000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;7&nbsp; | &nbsp;773000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;8&nbsp; | &nbsp;692000 |</br>
|&nbsp;&nbsp;&nbsp;&nbsp;9&nbsp; | &nbsp;599000 |</br>
|&nbsp;&nbsp;&nbsp;10&nbsp;| &nbsp;500000 |</br>
|&nbsp;&nbsp;&nbsp;11&nbsp;| &nbsp;401000 |</br>
|&nbsp;&nbsp;&nbsp;12&nbsp;| &nbsp;308000 |</br>
|&nbsp;&nbsp;&nbsp;13&nbsp;| &nbsp;227000 |</br>
|&nbsp;&nbsp;&nbsp;14&nbsp;| &nbsp;164000 |</br>
|&nbsp;&nbsp;&nbsp;15&nbsp;| &nbsp;125000 |</br>
|&nbsp;&nbsp;&nbsp;16&nbsp;| &nbsp;116000 |</br>
|&nbsp;&nbsp;&nbsp;17&nbsp;| &nbsp;143000 |</br>
|&nbsp;&nbsp;&nbsp;18&nbsp;| &nbsp;212000 |</br>
|&nbsp;&nbsp;&nbsp;19&nbsp;| &nbsp;329000 |</br>
|&nbsp;&nbsp;&nbsp;20&nbsp;| &nbsp;500000 |</br>
+----+---------+</br>

# Level 2
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
# Level 2 Output
![image](https://user-images.githubusercontent.com/80484903/135869123-304c4356-6319-436d-81da-f60ce2012662.png)
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

# Level 3 Output
![image](https://user-images.githubusercontent.com/80484903/135869437-1b8fa8c8-b5b9-4a80-973f-0f332fde375e.png)

