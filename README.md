# Classes-and-Objects-in-C-Plus-Plus

# Aim: To study and implement Classes and Objects
# Software Requried: Visual Studio

# Theory:
In Object Oriented Programming, classes and objects are basic concepts of that are used to represent real-world concepts and entities.

A class is a template to create objects having similar properties and behavior, or in other words, we can say that a class is a blueprint for objects. An object is an instance of a class.

A class is a user-defined data type, which holds its own data members and member functions that can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object. Data Members: These are the variables that are defined inside the class. Member Functions: Functions declared inside a class. Also referred to as a member method.

When a class is defined, only the specification (attributes and behaviour) for the object is defined. No memory is allocated to the class definition. To use the data and access functions defined in the class, we need to create its objects. Objects are the actual entities that are created as an instance of a class. There can be as many objects of a class as desired Local Class: Classes are generally declared in global scope and are accessible to every function or other classes once they are defined. But C++ also provides facility to define a class within a function. It is called local class in C++ and is only accessible in that function.

Access Specifiers: Access specifiers control how the members (attributes and methods) of a class can be accessed. They help protect data and organize code so that only the right parts can be seen or changed.

In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
Implementaion:
The Concept of Classes and Objects is demonstrated using the following codes,

Displaying Student Information using classes
Displaying Car information using Classes and Methods
Calculators using Classes
Calculating the area of rectangle using Classes and Methods
Calculatiing the volume of a cuboid using Classes and Methods along with usage of private and public members.

# Algorithms:

# Algorithm: Class and Object in C++ (Student Information)

**Start**

1. Define a class Student with public data members:

   * name (string)
   * branch (string)
   * subject (string)
   * year (string)
   * result (float)

2. In main():

   * Create object s1 of type Student.
   * Assign values:

     * name = "Zub"
     * branch = "ENTC"
     * subject = "C++"
     * year = "2nd Year"
     * result = 9.5
   * Display details of s1.
   * Reassign new values:

     * name = "Dan"
     * branch = "ENTC"
     * subject = "C++"
     * year = "2nd Year"
     * result = 6.9
   * Display updated details of s1.

**End**

---

# Algorithm: Calculator using Class and Objects

**Start**

1. Define a class Calculator with public data members:

   * a, b (float, operands)
   * add, diff, mul, div (float, results)

2. Member functions:

   * input() → read values of a and b
   * addition() → compute a + b
   * subtraction() → compute a - b
   * mult() → compute a \* b
   * div1() → compute a / b

3. In main():

   * Create object c1 of class Calculator.
   * Call c1.input() to read numbers.
   * Call all calculation functions: mult(), div1(), addition(), subtraction().
   * Display results.

**End**

---

# Algorithm: Car Information using Class and Objects

**Start**

1. Define a class Car with public data members:

   * car\_model (string)
   * car\_yr (string)
   * car\_brand (string)

2. Member function: info() to input details.

   * Display "Enter the brand of the Car:" → read car\_brand.
   * Display "Enter the year of manufacture of the Car:" → read car\_yr.
   * Display "Enter the model of the Car:" → read car\_model.

3. In main():

   * Create object c1 of class Car.
   * Call c1.info() to input car details.
   * Display the stored details: Brand, Year of manufacture, Model.

**End**

---

# Algorithm: Calculate Rectangle Area using Class and Objects

**Start**

1. Define a class rec\_area with public data members:

   * length (float)
   * breadth (float)
   * area (float)

2. Member function: area1()

   * Display "Enter the length of the rectangle:" → read length.
   * Display "Enter the breadth:" → read breadth.
   * Calculate area = length \* breadth.

3. In main():

   * Create object r1 of class rec\_area.
   * Call r1.area1().
   * Display "Area of the rectangle is:" followed by area.

**End**

---

# Algorithm: Calculate Volume of a Cuboid using Class and Objects

**Start**

1. Define a class cuboid with private data members:

   * height = 10.0
   * width = 20.0
   * length = 45.0

2. Public member function:

   * volume() → return height \* width \* length.

3. In main():

   * Create object c1 of class cuboid.
   * Call c1.volume() and store result in variable vol.
   * Display "Volume:" followed by vol.

**End**


# Conclusion:
The Above codes demonstrates the usage of classes and objects in C++ , Then the types of access specifier was also demonstrated using the codes.
