long long fact(long long a)
{
    if (a == 0 or a == 1)
        return 1;

    return a * fact(a - 1);
}

int main()
{
    long long q = fact(-1);
}