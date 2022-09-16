int f(int i) 
{
    switch (i) 
    {
        case 1: 
            return 1;
        [[unlikely]] case 2: 
            return 2;
    }
    return 3;
}
