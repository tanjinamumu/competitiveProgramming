<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,a,b,i,j;
    char mat[600][600];
    cin>>r>>c;
    for(i=0; i<r; i++)
    {
        cin>>mat[i];
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(mat[i][j]=='.')
            {
                mat[i][j]='D';
                //cout<<mat[i][j]<<" ";
            }
            if(mat[i][j]=='S')
            {
                if(mat[i-1][j]=='W'||mat[i+1][j]=='W'||mat[i][j-1]=='W'||mat[i][j+1]=='W')
                {
                    cout<<"No";
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(i=0; i<r; i++)
    {
        cout<<mat[i]<<endl;
    }
}
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,a,b,i,j;
    char mat[600][600];
    cin>>r>>c;
    for(i=0; i<r; i++)
    {
        cin>>mat[i];
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(mat[i][j]=='.')
            {
                mat[i][j]='D';
                //cout<<mat[i][j]<<" ";
            }
            if(mat[i][j]=='S')
            {
                if(mat[i-1][j]=='W'||mat[i+1][j]=='W'||mat[i][j-1]=='W'||mat[i][j+1]=='W')
                {
                    cout<<"No";
                    return 0;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
    for(i=0; i<r; i++)
    {
        cout<<mat[i]<<endl;
    }
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
