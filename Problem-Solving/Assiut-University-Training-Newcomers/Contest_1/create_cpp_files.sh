#!/bin/bash

# Array of problem letters
letters=(A B C D E F G H I)

# Corresponding problem names
names=(
"Winter Sale"
"Memo and Momo"
"Next Alphabet"
"Ali Baba and Puzzles"
"Interval Sweep"
"Adding Bits"
"Katryoshka"
"Data Type Guessing"
"Lucky Numbers"
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
