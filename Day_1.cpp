704. Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;

        int mid = mid = start + (end - start)/2;

        while(start<=end)
        {
            if(nums[mid] == target)
                return mid;
            else if ( nums[mid]>target)
                end = mid - 1;
            else if (nums[mid]<target)
                start = mid + 1;
            
            mid = start + (end - start)/2;
        }

        return -1;
    }
};


374. Guess Number Higher or Lower

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

#include <vector>
class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;

        int mid = start + (end-start)/2;

        while(start<=end)
        {
            if(guess(mid) == 0)
                return mid;
            else if(guess(mid) == -1)
                end = mid-1;
            else
                start = mid+1;

            mid = start + (end-start)/2;
        }

        return mid;
    }
};
