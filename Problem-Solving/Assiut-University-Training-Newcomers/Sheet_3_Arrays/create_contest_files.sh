#!/bin/bash

# أسماء المسائل
letters=(A B C D E F G H I J K L M N O P Q R S T U V W X Y Z)
names=(
"Summation"
"Searching"
"Replacement"
"Positions in array"
"Lowest Number"
"Reversing"
"Palindrome Array"
"Sorting"
"Smallest Pair"
"Lucky Array"
"Sum Digits"
"Max Subarray"
"Replace MinMax"
"Check Code"
"Fibonacci"
"Minimize Number"
"Count Subarrays"
"Permutation with arrays"
"Search In Matrix"
"Matrix"
"Is B a subsequence of A ?"
"Frequency Array"
"Mirror Array"
"8 Neighbors"
"Range sum query"
"Binary Search"
)

# إنشاء الملفات
for i in "${!letters[@]}"; do
    filename="${letters[$i]}_${names[$i]// /_}.cpp"
    echo "Creating $filename"
    
    cat <<EOL > "$filename"
// Problem: ${names[$i]}
#include <iostream>
using namespace std;
int main() {
    
    
    return 0;
}
EOL
done

echo "All files created!"
