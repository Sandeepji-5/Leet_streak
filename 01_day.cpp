
// Question link : https://leetcode.com/problems/adding-spaces-to-a-string?envType=daily-question&envId=2024-12-04
// Question name : 2109. Adding Spaces to a String
class Solution {
public:
    // Helper function to add spaces at the given positions in the string
    string addingString(string new_st, string st, vector<int>& pos, int s_length) {
        int k = 0;  // Pointer to track the position in the 'pos' array
        int i;
        
        // Iterate through the entire string 'st'
        for (i = 0; i < s_length; i++) {
            
            // If the current index 'i' matches the position 'pos[k]', add a space before the character
            if (k < pos.size() && i == pos[k]) {
                new_st += " ";  // Add a space at the given position
                k++;  // Move to the next space position
            }
            
            // Add the current character to 'new_st'
            new_st += st[i];
        }
        
        return new_st;  // Return the modified string with spaces added
    }

    // Main function to add spaces based on the 'spaces' array
    string addSpaces(string s, vector<int>& spaces) {
        string new_st = "";  // Initialize an empty string to store the result
        int s_length = s.length();  // Get the length of the input string 's'
        
        // Call the helper function to add spaces and return the modified string
        return addingString(new_st, s, spaces, s_length);
    }
};

