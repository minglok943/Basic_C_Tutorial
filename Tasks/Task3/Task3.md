# Level 1
1. Load the stl file generated from solidworks called question_03_level1.stl
2. Print out the number of vertices of the model.
3. List down the vertices of the model without repeating. For ease of reading limit the
decimal place and allow multiple vertices to be printed on each line.

# Level 2
1. Load the bitmap file called question_03_level2.bmp
2. From code page 437, using 4 characters only: 0xff, 0xB0, 0xB1 and 0xB2, to represent 4 level of shades
3. Converts the bitmap into 4 shades represented by 0xff, 0xB0, 0xB1, and
4. 0xB2, where 0xff is the darkest and 0xB2 is the brightest, and print it in the dev-c++ console or cmd.
5. Assuming the suggested character as 1 unit, print the image in size of 40 columns. The
number of rows should be chosen so that the aspect ratio of image formed is
approximately the same as the original bitmap.

# Level 3
1. Write a program called question_03_lvl3 that can display bitmap files and show details of stl files using code from level 1 and 2.
2. This program may only handle binary stl files.
3. question_03_lvl3.exe -b \<file> will display the bitmap file called \<file>
4. question_03_lvl3.exe -s \<file> will print details of the stl file called \<file>
5. question_03_lvl3.exe -h will print the usage of the program as below:</br>
Usage: question_03_lvl3 (-b <file>|-s <file>|-h)</br>
-b \<file>: display bitmap file in console</br>
-s \<file>: print details of stl file</br>
-h : print this message</br>
6. handle cases where:</br>
    a. wrong format of file supplied.</br>
    b. wrong argument is entered.</br>
    c. any error you can think that will occur</br>
  
# Note
1. You have to search for the file format specification on your own.
2. For the bitmap file conversion, no limitation to the algorithm as long as the output image
can be understood by senior.
3. Those who want to write the program in other OS, you are free to do so but please submit
a version that works in windows cmd
