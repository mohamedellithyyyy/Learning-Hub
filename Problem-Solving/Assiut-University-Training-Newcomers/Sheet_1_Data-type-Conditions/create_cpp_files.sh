#!/bin/bash

# Array of problem letters
letters=(B C D E F G H I J K L M N O P Q R S T U V W X Y Z)

# Corresponding problem names
names=(
"Basic Data Types"
"Simple Calculator"
"Difference"
"Area of a Circle"
"Digits Summation"
"Summation from 1 to N"
"Two numbers"
"Welcome for you with Conditions"
"Multiples"
"Max and Min"
"The Brothers"
"Capital or Small or Digit"
"Char"
"Calculator"
"First digit !"
"Coordinates of a Point"
"Age in Days"
"Interval"
"Sort Numbers"
"Float or int"
"Comparison"
"Mathematical Expression"
"Two intervals"
"The last 2 digits"
"Hard Compare"
)

# Loop through letters and create cpp files
for i in "${!letters[@]}"; do
    # Replace spaces and special characters with underscores for file names
    filename="${letters[$i]}_${names[$i]// /_}.cpp"
    echo "Creating $filename"
    
    # Add a basic C++ template inside each file
    cat <<EOL > "$filename"
#include <iostream>
using namespace std;

int main() {
    // Problem: ${names[$i]}
    
    return 0;
}
EOL
done

echo "All files created!"
