int fib_recursion(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    return fib_recursion(n - 1) + fib_recursion(n - 2);
}