class Solution {
public:
    int addDigits(int num) {
    	return (1+(num-1)%9));
	//https://en.wikipedia.org/wiki/Digital_root
    }
};