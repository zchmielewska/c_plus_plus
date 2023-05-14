void aFunc(int& a, const int& b);

int main() {
    int alpha = 7;
    int beta = 11;
    aFunc(alpha, beta);
    return 0;
}

void aFund(int& a, const int& b) {
    a = 107; // OK
    //b = 111; // error: can't modify constant argument
}