// Given two numbers x and y, and a range [l, r] where 1 <= l, r <= 32. Find the set bits of y in range [l, r] and set these bits in x also.

// Example 1:

// Input: 
// X = 44, Y = 3 
// L = 1,  R = 5
// Output: 47
// Explaination: presenation of 44 and 3 are 
// 101100 and 11. So in the range 1 to 5 there 
// are two set bits. If those are set in 44 
// it will become 101111 = 47.

//question link -> https://practice.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1?page=1&status[]=unsolved&category[]=Bit%20Magic&curated[]=7&sortBy=submissions

    int setSetBit(int x, int y, int l, int r){
        // code here
        //find setBit of y in range of l -> r
        
        for(int i = l-1; i<r; i++){
            //if y's bit is set then set bit of x also
            //checking is bit set of y
            if(y & (1 << i)){
                //set the bit of x
                x = x | (1 << i);
            }
        }
       // cout << (2 << 0) << endl; 
        return x;
        
    }