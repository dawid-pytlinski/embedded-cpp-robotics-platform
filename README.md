# Embedded C++ Robotics Platform
An educational project developed step by step while learning C++, with a focus on future applications in robotics and embedded systems.

The current version is a console application that calculates the position of the tip of a single arm in a two-dimensional plane. The user enters the arm length in centimetres and an angle in degrees, ranging from −90° to 90°, inclusive.

The program:
- checks whether input was read successfully and validates the arm length and angle range;
- converts the angle from degrees to radians;
- calculates the coordinates using x = L · cos(θ) and y = L · sin(θ);
- displays the input values and the calculated tip position.
The arm’s base is assumed to be at (0, 0), with the angle measured from the positive X-axis. Future development will focus on running the C++ application on the Portenta X8.