/* Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces. 
  */

solution:

class Solution {
public:
    int maxs(int a,int b)
    {
        if(a>b)
            return a;
        else
            return b;
    }
public:
    int lengthOfLongestSubstring(string s) 
    {
    int max=0;
    set<char>hash;
    int i=0;
    int j=0;
    while(i<s.length() && j<s.length())
    {
      if(hash.count(s[j]))
      {
                hash.erase(s[i]);
                i=i+1;
      }
      else
     {
     hash.insert(s[j]);
     j=j+1;
     max=maxs(j-i,max);   
     }
    }
    return max;    
    }
};


