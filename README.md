# ch02-class-definition
An example program that demonstrates creating a simple **Person** class, with the class definition in a header file *person.h* and the implementation of its member functions in a source file *person.cpp*.

In this program, the **Person** class has two private data members **m_name** and **m_age**, and four public member functions - a default constructor, a constructor that takes a name and an age parameter, and two getter/setter pairs for the data members.

The class definition is in the header file *person.h*, and the implementation of its member functions is in the source file *person.cpp*. The **#include** directive is used to include the header file in both *person.cpp* and *main.cpp*.

In main(), two Person objects are created - person1 using the default constructor, and person2 using the parameterized constructor. The member functions of the Person class are called to set and get the values of the data members, and the values are printed to the console.

The process of separating the class declaration (interface) from its implementation is called "separation of concerns" or "decoupling". It is also commonly referred to as "header/implementation file separation" or "header/source file separation".

---
Separation of concerns is a design principle that advocates breaking down a software system into distinct parts or modules that deal with different functionality or responsibilities. The idea behind this principle is to reduce complexity, promote code reuse, and make it easier to maintain and modify the code over time.

By separating concerns, developers can focus on one aspect of the system at a time, rather than having to consider all aspects simultaneously. This makes it easier to understand the code, identify problems, and make changes. It also facilitates collaboration between developers since different team members can work on different parts of the system without interfering with each other's work.

Overall, separation of concerns is an essential practice for creating high-quality, maintainable, and scalable software systems.
