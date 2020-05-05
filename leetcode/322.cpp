class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {    
        if(amount == 0) return 0; 
        int matrix[coins.size()][amount+1]; 
        
        for(int i = 1; i < amount+1; i++){
            matrix[0][i] = i%coins[0] == 0? i / coins[0] : -1; 
        }
        for (int i = 1; i < coins.size(); i++){
            int curr_coin = coins[i]; 
            for(int j = 1; j <= amount; j++){

                if(j - curr_coin > 0){
                    if(matrix[i][j - curr_coin] != -1 && matrix[i - 1][j] != -1){
                       matrix[i][j] = min(matrix[i][j - curr_coin] + 1, matrix[i - 1][j]);
                    }else if(matrix[i][j - curr_coin] == -1){
                        matrix[i][j] = matrix[i-1][j]; 
                    }else{
                        matrix[i][j] = matrix[i][j - curr_coin] + 1; 
                    }
                    
                }else{
                    if(matrix[i-1][j] == -1)
                    matrix[i][j] = j%curr_coin ==0 ? j / curr_coin : -1;
                    else matrix[i][j] = j%curr_coin == 0? j / curr_coin : matrix[i-1][j];
                }
            }
        }
        
        return matrix[coins.size()-1][amount]; 
    }
};

/*
n: number of coins
m: amount

time complexity: O(n * m)
space complexity: O(n * m)
*/