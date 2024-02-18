// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

 

// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false
 

// Constraints:

// -231 <= n <= 231 - 1

// Explanation:


// number->binary form
// 3->0000 0011
// 4->0000 0100
// 5->0000 0101
// 6->0000 0110
// 7->0000 0111
// 8->0000 1000
// The observation we can conclude is that the number which is a power of two has always compulsoryily 1 true bit.

// Now consider :-
// bit representation of 7  -> 0111
// bit representation of 8  -> 1000
// bitwise AND of 7 and 8 -> 0000
// we are gonna use this property for for all numbers which are powers of two
#include <iostream>
using namespace std;




    int main(){

        int n;
        bool ans;
        cin >> n;
      
             if(n<=0)  ans =false;
              ans =((n&(n-1))==0);
        
        cout << ans << endl;
        return 0;

    }


// Time Complexity : O(1)
// Space Complexity : O(1)