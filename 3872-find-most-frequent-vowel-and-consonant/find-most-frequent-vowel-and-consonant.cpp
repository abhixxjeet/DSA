class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);

        // Count frequency of each character
        for (char c : s) {
            freq[c - 'a']++;
        }

        string vowels = "aeiou";
        int maxVowel = 0, maxConsonant = 0;

        // Find max vowel and consonant frequency
        for (int i = 0; i < 26; i++) {
            char ch = i + 'a';
            if (vowels.find(ch) != string::npos) {
                maxVowel = max(maxVowel, freq[i]);
            } else {
                maxConsonant = max(maxConsonant, freq[i]);
            }
        }

        return maxVowel + maxConsonant;
    }
};
