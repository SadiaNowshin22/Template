for(int i=1; i<=n; i++)
{
    for(int j=i+1; j<=n; j++)
    {
        if(num[i]>num[j])
        {
            swap(num[i], num[j]);
        }
    }
}
