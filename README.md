# SoftUni C++ OOP

Solutions for the SoftUni C++ OOP course: objects and classes, code organization and templates, constructors, the rule
of 3/5/0, inheritance, polymorphism and abstract classes. One `ExNNN` folder per problem, usually with its own headers.

## Lectures

| #   | Lecture | Exercises |
| --- | ------- | --------- |
| 001 | Objects and Classes | [Words Starting with a Letter](001-Objects-and-Classes/Ex001) · [Matrix Simulation](001-Objects-and-Classes/Ex002) · [Locations](001-Objects-and-Classes/Ex003) |
| 002 | Exercise: Objects and Classes | [Rotate Words](002-Exercise-Objects-and-Classes/Ex001) · [Distance Between Points](002-Exercise-Objects-and-Classes/Ex002) · [Sales by City](002-Exercise-Objects-and-Classes/Ex003) · [Average Student Grade](002-Exercise-Objects-and-Classes/Ex004) |
| 003 | Code Organization and Templates | [Compile-Error Guard (`Defines.h`)](003-Code-Organization-and-Templates/Ex001) · [Article 13 Filter](003-Code-Organization-and-Templates/Ex002) · [Parse and Print](003-Code-Organization-and-Templates/Ex003) · [Split and Join](003-Code-Organization-and-Templates/Ex004) · [Sort Songs](003-Code-Organization-and-Templates/Ex005) |
| 004 | OOP Constructors | [Contact Manager](004-OOP-Constructors/Ex001) · [Note Names (Solfège)](004-OOP-Constructors/Ex002) · [Sort Vectors by Length](004-OOP-Constructors/Ex003) |
| 005 | Exercise: OOP Constructors | [Try Parse](005-Exercise-OOP-Constructors/Ex001) · [Find Company](005-Exercise-OOP-Constructors/Ex002) · [Ordered Inserter](005-Exercise-OOP-Constructors/Ex003) · [Profit Report](005-Exercise-OOP-Constructors/Ex004) · [Company Register](005-Exercise-OOP-Constructors/Ex005) · [Word Counter](005-Exercise-OOP-Constructors/Ex006) · [Big Integer Sum](005-Exercise-OOP-Constructors/Ex007) · [Integer Sequence Generator](005-Exercise-OOP-Constructors/Ex008) |
| 006 | Rule of 3/5/0 | [Smart Array (Rule of 3)](006-Rule-of-3-5-0/Ex001) · [Smart Array Iterator](006-Rule-of-3-5-0/Ex002) |
| 007 | Exercise: Rule of 3/5/0 | [Min By](007-Exercise-Rule-of-3-5-0/Ex001) · [Remove Invalid Companies](007-Exercise-Rule-of-3-5-0/Ex002) · [Make Company](007-Exercise-Rule-of-3-5-0/Ex003) · [Parse Companies](007-Exercise-Rule-of-3-5-0/Ex004) · [Company Register](007-Exercise-Rule-of-3-5-0/Ex005) · [Array of Pointers](007-Exercise-Rule-of-3-5-0/Ex006) · [Merge Sorted Lists](007-Exercise-Rule-of-3-5-0/Ex007) · [Matrices](007-Exercise-Rule-of-3-5-0/Ex008) |
| 008 | Inheritance | [Vehicle → Car (public fields)](008-Inheritance/Ex001) · [Protected Members](008-Inheritance/Ex002) · [Base Constructors](008-Inheritance/Ex003) · [Airplane](008-Inheritance/Ex004) · [Member Hiding](008-Inheritance/Ex005) · [Multiple Derived Classes](008-Inheritance/Ex006) · [Car and Wheel](008-Inheritance/Ex007) · [Car and Wheel (callback)](008-Inheritance/Ex008) |
| 009 | Exercise: Inheritance | [Sort Companies By](009-Exercise-Inheritance/Ex001) · [Numbers in Ranges](009-Exercise-Inheritance/Ex002) · [Max-Sum Array](009-Exercise-Inheritance/Ex003) · [Shapes](009-Exercise-Inheritance/Ex004) · [Serialize Companies](009-Exercise-Inheritance/Ex005) · [Indexed Set](009-Exercise-Inheritance/Ex006) · [Memory Allocator](009-Exercise-Inheritance/Ex007) · [Snake Game](009-Exercise-Inheritance/Ex008) |
| 010 | Polymorphism | [Static Binding](010-Polymorphism/Ex001) · [Virtual Functions](010-Polymorphism/Ex002) · [Virtual Destructor](010-Polymorphism/Ex003) · [Override](010-Polymorphism/Ex004) · [Polymorphic Vehicles](010-Polymorphism/Ex005) · [Vehicles in a Container](010-Polymorphism/Ex006) · [Organisms](010-Polymorphism/Ex007) · [Organism Hierarchy](010-Polymorphism/Ex008) |
| 011 | Exercise: Polymorphism | [Companies](011-Exercise-Polymorphism/Ex001) · [Remove Duplicates](011-Exercise-Polymorphism/Ex002) · [Aggregators](011-Exercise-Polymorphism/Ex003) · [Typed Streams](011-Exercise-Polymorphism/Ex004) · [Placeholder *(empty stub)*](011-Exercise-Polymorphism/Ex005) · [Calculator Extensions](011-Exercise-Polymorphism/Ex006) · [Pistols](011-Exercise-Polymorphism/Ex007) |
| 012 | Abstract Classes | [Writers](012-Abstract-Classes/Ex001) · [Describable Company](012-Abstract-Classes/Ex002) · [Animals and Plants](012-Abstract-Classes/Ex003) · [Virtual Inheritance](012-Abstract-Classes/Ex004) · [Describable Interface](012-Abstract-Classes/Ex005) · [Car and Wheel](012-Abstract-Classes/Ex006) · [Car and Wheel (callback)](012-Abstract-Classes/Ex007) · [Car Interface](012-Abstract-Classes/Ex008) |
| 013 | Exercise: Abstract Classes | [Text Filters](013-Exercise-Abstract-Classes/Ex001) · [Company](013-Exercise-Abstract-Classes/Ex002) · [File System](013-Exercise-Abstract-Classes/Ex003) · [Placeholder *(empty stub)*](013-Exercise-Abstract-Classes/Ex004) · [Text Transforms (cut / paste)](013-Exercise-Abstract-Classes/Ex005) · [File System Tree View](013-Exercise-Abstract-Classes/Ex006) · [File Explorer with Shortcuts](013-Exercise-Abstract-Classes/Ex007) · [Heroes](013-Exercise-Abstract-Classes/Ex008) |

*Placeholder* folders only contain an empty `main` stub.

## Run

Needs CMake and a C++17 compiler. Every lecture folder is a CMake project; each exercise has `tests/*.in` / `*.out`
pairs that CTest feeds through the program.

```bash
cmake -S 011-Exercise-Polymorphism -B build/011-Exercise-Polymorphism
cmake --build build/011-Exercise-Polymorphism
ctest --test-dir build/011-Exercise-Polymorphism --output-on-failure
```

## License

[MIT](LICENSE)
