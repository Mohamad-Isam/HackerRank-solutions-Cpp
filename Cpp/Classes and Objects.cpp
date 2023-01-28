

class Student {
    public:
    vector <int> scores;
    void input(){
        int x;
        for(int i = 0; i < 5; i++)
        {
            cin >> x;
            scores.push_back(x);
        }
    }
    int calculateTotalScore(){
        int sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum += scores[i];
        }
        return sum;
    }
};

