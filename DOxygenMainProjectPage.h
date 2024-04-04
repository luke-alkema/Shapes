/// \mainpage Shapes Project
///
///
/// \section intro Program Introduction
/// The <b>Shapes</b> Project is meant to be a firt look at inheritance in the world of OOP. Aiming to model a Shape class at its most basic elements,
/// to be inherited from by more specified Shapes like a Circle or Square. It shows a simple yet intutive relationship of classes allowing for the development of 
/// some true virtual functions in the Shape class, that get implemented in its child-classes. The Shape class holds many oppourtunites to be used to create a variety of
/// Shapes. These classes relate to eachother because they are Shapes, which is modeled by the Shape class. Its attributes are name of shape and colour of shape thing's that every shape has, it also covers the case of unknown or undefiend
/// names and colours. As well as some behaviors implemented as pure virtual functions to be overridden by child classes to calculate their permieter, area, or trait-dimesnions (hypotenuse, diameter, side length). So far there are 2 child classes 
/// that make use of these virtual functions, Circle and Square! Which both use their signyfying trait to calculate each one of those values. The circle and square class both have their own values such as radius and side length to model their respective
/// shapes. As well as their own behaviors like showing information and the virtual functions mentioned above.
/// 
/// \section Shape
/// The <b>Shape<b> class is the base class for every possible shape. How is this possible? Well, because the only attributes in this class are colour 
/// and the name of the shape (e.g. Triangle). Besides the getters and setters for these attributes, there are 3 pure virtual functions in this class. 
/// This is becuase for every class that inherits from it, we want to force them to include functions to calculate the perimeter, area, and overall dimension.
/// We hope you enjoy this wonderful class. You are in for quite the experience, so buckle up!
/// 
/// \section Circle
/// The <b>Circle<b> class inherits from the shape class. This means that <i>Circle<i> must implement the 3 pure virtual functions from <i>Shape<i> including:
/// Perimeter(), Area(), and OverallDimension(). These functions change with each different shape, as formulas for these calculations arn't all the same. 
/// The <i>Square<i> class has data-members like name and colour, the generic attributes from <i>Shape<i>.
/// Where the <i>Circle<i> class starts to change from the <i>Shape<i> class is that it also has a double radius attribute, for the radius of the circle. 
/// As well as holds the definition of PI for use in operations. 
/// 
/// \section Square
/// The <b>Square<b> class inherits from the shape class. This means that <i>Square<i> must have the 3 pure virtual functions from <i>Shape<i> including:
/// Perimeter(), Area(), and OverallDimension(). These functions change with each different shape, as formulas for these calculations arn't all the same. 
/// The <i>Square<i> class has data-members like name and colour, the generic attributes from <i>Shape<i>.
/// Where the <i>Square<i> class starts to change from the <i>Shape<i> class is that it also has a double sideLength attribute, for the length of the sides of the square. 
/// Not all shapes have sides (e.g. circle), so this is a special attribute just for square. 
///
/// \section GitHub
/// - <A target=blank HREF="https://github.com/LukeleLegend/Shapes/"> GitHub Repository A-04</A>
/// \section Requirements
/// <hr>
/// <blockquote>
/// \htmlinclude OOP-A04.htm
/// </blockquote>
///
/// <hr>
/// \section version Current version of the Dog Project :
/// <ul>
/// <li>\authors   The <b><i>Luke Alkema & Dylan Shouldice-Jacobs</i></b> Team !!</li>
/// <li>\version   1.0.1.0.1.0.A</li>
/// <li>\date      2024-2024</li>
/// <li>\copyright Shape-Expert Team</li>
/// </ul>
///