# Visualizing 2D Shapes with GNU Plot

## Overview
This project aims to visualize various 2D shapes using GNU Plot. Users input lengths of shapes, which are processed to generate coordinate data. This data is then saved into a file and fed into GNU Plot to visualize the shapes. The project implements a hierarchy with a base class Shape and derived classes representing different geometric shapes. Additionally, it includes a Point class for handling coordinates.

## Steps to Execute
1. **Create Shape Base Class:**
   - Begin by creating a Shape class as the base class for all geometric shapes.
  
2. **Implement Derived Classes:**
   - Derive specific shape classes (e.g., Rectangle, Triangle) from the Shape base class.
   - Ensure that these derived classes include the header file of the Point class for managing coordinates.
  
3. **Override Virtual Methods:**
   - Override virtual methods from the Shape class in all derived classes.
   - This enables specific implementations for computing area, perimeter, and other shape-specific functionalities.
  
4. **Process User Input:**
   - Prompt the user to input lengths or dimensions of the desired shapes.
   - Use these inputs to calculate coordinates of the shapes.
  
5. **Write Data to File:**
   - Save the calculated coordinates into a file.
   - Each shape should have its data stored in a structured format for easy retrieval and processing.
  
6. **Visualization with GNU Plot:**
   - Utilize GNU Plot tool to visualize the shapes based on the saved coordinate data.
   - Feed the data file into GNU Plot to generate visual representations of the shapes.

## Requirements
- **Point Class & Shape Base Class:**
  - Ensure that the project includes a Point class for managing coordinates.
  - Implement a base class named Shape from which all geometric shapes inherit.
  
- **Hierarchy (Inheritance):**
  - Utilize inheritance to establish a hierarchy of geometric shapes.
  - Each derived class should inherit common functionalities and attributes from the base Shape class.

## Usage
- **Input Lengths:**
  - Execute the application and provide input lengths or dimensions of desired shapes.
  
- **Generate Coordinate Data:**
  - The program will process the input and generate coordinate data for the specified shapes.
  
- **Save Data to File:**
  - Save the generated coordinate data into a file for future visualization.
  
- **Visualize with GNU Plot:**
  - Use GNU Plot tool to visualize the shapes based on the coordinate data saved in the file.
  - Follow the instructions provided by GNU Plot to render the shapes accurately.
