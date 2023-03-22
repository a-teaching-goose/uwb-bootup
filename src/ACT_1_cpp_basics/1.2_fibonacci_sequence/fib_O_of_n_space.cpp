int fib_space_inefficient(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int *data = new int[n + 1]; // why +1?
    data[0] = 0;
    data[1] = 1;

    for (int i = 2; i <= n; ++i) {
        data[i] = data[i - 1] + data[i - 2];
    }

    int ret = data[n];

    delete[]data;

    return ret;

    // how to improve this code?
    // what's the complexity?
    // do we need the data array?
}