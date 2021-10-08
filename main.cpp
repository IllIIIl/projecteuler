int main() {
    int s = 0, a = 1, b = 2, t = 0;
    while(a <= 4000000){
        t = b;
        b = a + b;
        a = t;
        if(t % 2 == 0){
            s += t;
        }
    }
    return 0;
}
