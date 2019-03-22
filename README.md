# PyramidProjection

### Requirements

1. Read a line containing three positive integer values greater than 0 from stdin. The values are separated by one or more spaces.
2. The input is guaranteed to be well-formed.
3. The values represent the width (x dimension), breadth (y dimension) and height (z
dimension) of a symmetrical rectangular-based pyramid, respectively. The height is
measured perpendicularly from the base of the pyramid.
4. All values will be in the range [1..50].
5. On standard output, render a view from above the pyramid, showing its rectangular
base, i.e., the projection of the pyramid onto the plane z=0. In this view, x increases
from left to right, and y increases from bottom to top.
6. Draw the outline of the pyramid with the '#' character. The outline must approximate
the pyramid's boundary as shown in the examples below and described in the next
two requirements.
7. The top and bottom rows shall be drawn with exactly width '#' characters.
8. For every remaining text row, either one or two '#' characters shall be drawn,
covering the left-most and right-most position on that row intersected by the edge of
the pyramid,
9. Any non-boundary area inside the shape must be filled with the '.' character.

### Example

1. 
Input:
6 6 4
Output:

     ######
     #....#
     #....#
     #....#
     #....#
     ######
2. 
Input:
7 4 4
Output:

     #######
     #.....#
     #.....#
     #######
     
3. 
Input:
1 1 1
Output:

#
