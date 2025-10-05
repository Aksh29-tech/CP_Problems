#include <bits/stdc++.h>
using namespace std;

int findRes(string s, int zeros, int ones) {
    for(int i=0;i<s.size();i++) {
        if(s[i] == '0') {
            if(ones == 0) {
                return i;
            }
            ones--;
        } else {
            if(zeros == 0) {
                return i;
            }
            zeros--;
        }
    }
    return s.size();
}
int main() {
	int t;
	cin>>t;
	
	while(t--) {
	    string s;
	    cin>>s;
	    
	    int zeros = 0;
	    int ones = 0;
	    for(int i = 0;i<s.size();i++) {
	        if(s[i] == '0') zeros++;
	        else ones++;
	    }
	    
	    cout<<s.size() - findRes(s, zeros, ones)<<endl;
	}

}

// Problem link: https://codeforces.com/problemset/problem/1913/B

// My thought Process: I am trying through maths bu directly counting zeros and ones and then subtracting twice 
// the minimum of them from the size of the string.

// Actual worked: Implementation instead of maths. Simply count the zeros and ones and then traverse the string 
// and keep decrementing the count of zeros and ones until one of them becomes zero. The index at which it
// becomes zero is the answer. Subtract this from the size of the string to get the result.
