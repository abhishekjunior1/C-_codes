int l;
    for(int i=0;i<k;k++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(mer[i]==mer[j])
            {
                for(l=j;l<k-1;l++)
                {
                    mer[l]=mer[l+1];
                }
                k--;
                j--;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<mer[i]<<" ";
    }
    