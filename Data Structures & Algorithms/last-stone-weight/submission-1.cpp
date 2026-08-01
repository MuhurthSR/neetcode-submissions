class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;

        for(auto& a : stones){
            heap.push(a);
        }

        while(heap.size() > 1){
            int max1 = heap.top();
            heap.pop();
            int max2 = heap.top();
            heap.pop();

            if(max1 > max2){
                heap.push(max1-max2);
            }
            else if(max1 < max2){
                heap.push(max2-max1);
            }
        }

        if(heap.size() == 0){
            return 0;
        }
        return heap.top();
    }
};
