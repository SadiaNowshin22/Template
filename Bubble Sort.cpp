for(int i=1; i<=n; i++)
{
    for(int j=1; j<n; j++)
    {
        if(num[j+1]>num[j])
        {
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
        }
    }
}
