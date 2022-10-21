//ONE OF THE BASIC IMPLEMENTATION OF THIS ALGORITHM
//FINDING THE REPEATED VALUE IN A GIVEN ARRAY IN WITH TIME COMPLEXITY O(N) AND SPACE COMPLEXITY O(1)
//THIS ALGORITHM IS ALSO KNOWN AS TORTOISE AND HARE'S ALGORITHM
SOURCE CODE-
//FUNCTION TO PRINT ALL DUPLICATE ELEMENT PRESENT IN GIVEN ARRAY
//Basic idea is that if duplicates present in given array then there must atleast two collisions of slow and fast
class solution{
    public:
          int findduplicate(vector<int>& nums)
          {
            int slow=nums[0];  //Here Slow moves with one step
            int fast=nums[0];   //Here fast moves with two steps
            do{
              slow=nums[slow];
              fast=nums[nums[fast]];
            }while(slow!fast);
            fast=nums[0];
            while(slow!=fast)
            {
              slow=nums[slow];
              fast[nums[fast];
            }
            return slow;
          }
   }; 
