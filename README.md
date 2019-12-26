# polygonCal
A tool for calculating the area of a shape (triangle, square, polygon, etc)

note:

#1. Points in vector are assuemd to be in adjacent order.

#2. Would not work if number of points is invalid for respective shapes.

For example please see main.cpp

folder /include contains a self-made unique pointer .h

folder /src contains the main codes

ShapeCal is the BASE class.

DERIVED classes are TriCal, SquareCal, PolygonCal.

GoogleTest Suites for all three shapes and smart pointer (basicPtr) are written in the googlestest folder.
