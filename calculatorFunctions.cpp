enum opperator {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

struct node{
    float val;
    enum opperator opp;
    node* left;
    node* right;
};

float calculate(float num1, float num2, enum opperator opp){
    float ans = 0;
    switch (opp) {
        case 0:
            ans = num1 + num2;
            break;
        case 1:
            ans = num1 - num2;
            break;
        case 2:
            ans = num1 * num2;
            break;
        case 3:
            ans = num1 / num2;
            break;
    }
    return ans;
}
