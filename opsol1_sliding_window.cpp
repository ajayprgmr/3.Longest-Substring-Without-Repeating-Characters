int lengthOfLongestSubstring(string s) {
    unordered_set<char> charSet;
    int left = 0, right = 0, maxLength = 0;
    int n=s.length();
    while (right < n) {
        if (charSet.find(s[right]) == charSet.end()) {
            // If character not found in hash set, add it and move right pointer
            charSet.insert(s[right]);
            right++;
            maxLength = max(maxLength, right - left); 
        } else {
            // If character found in hash set, remove left character and move left pointer
            charSet.erase(s[left]);
            left++;
        }
    }
    return maxLength;
}
   