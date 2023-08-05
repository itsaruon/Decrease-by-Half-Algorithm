int DBH(int a, int b)
{
    int sum = 0;
    cout << "\n|-----------Decrease-by-Half Algorithm-----------|\n";
    cout << setw(8) << "a\t\t";
    cout << setw(9) << "b\n";
    while (a > 0)
    {
        cout << right << setw(6) << a << "\t\t";
        cout << setw(8) << right << b << "\t\t";
        if (a % 2 != 0)
        {
            sum = sum + b;
            cout << setw(6) << b;
        }

        a = a / 2;


        b = b * 2;
        cout << endl;
    }
    cout << "|------------------------------------------------|\n\n";
    return sum;
}
