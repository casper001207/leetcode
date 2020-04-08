class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.size(); ++i) {
            switch (s.at(i)) {
                case 'M':{
                    result += 1000;
                    break;
                }
                case 'D':{
                    result += 500;
                    break;
                }
                case 'C':{
                    if (i == s.size()-1)
                        result += 100;
                    else if (s.at(i+1) == 'D') {
                        result += 400;
                        ++i;
                    }
                    else if (s.at(i+1) == 'M') {
                        result += 900;
                        ++i;
                    }
                    else
                        result += 100;
                    break;
                }
                case 'L':{
                    result += 50;
                    break;
                }
                case 'X':{
                    if (i == s.size()-1)
                        result += 10;
                    else if (s.at(i+1) == 'L') {
                        result += 40;
                        ++i;
                    }
                    else if (s.at(i+1) == 'C') {
                        result += 90;
                        ++i;
                    }
                    else
                        result += 10;
                    break;
                }
                case 'V':{
                    result += 5;
                    break;
                }
                case 'I':{
                    if (i == s.size()-1)
                        result += 1;
                    else if (s.at(i+1) == 'V') {
                        result += 4;
                        ++i;
                    }
                    else if (s.at(i+1) == 'X') {
                        result += 9;
                        ++i;
                    }
                    else
                        result += 1;
                    break;
                }
            }
        }
        return result;
    }
};