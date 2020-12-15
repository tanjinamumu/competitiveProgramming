<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
deque <int>queuee;
int main()
{
    int t, n, flag;
    char s[1005];
    while(cin>>t)
    {
        flag = 1;
        for (int i=1; i<=t; i++)
        {
            cin>>s;
            if (strcmp(s, "toFront") == 0)
            {
                cin>>n;
                if (flag > 0)
                {
                     queuee.push_front(n);
                }
                else
                {
                    queuee.push_back(n);
                }
            }
            if (strcmp(s, "push_back") == 0)
            {
                cin>>n;
                if (flag > 0)
                {
                     queuee.push_back(n);
                }
                else
                {
                    queuee.push_front(n);
                }
            }
            if (strcmp(s, "front") == 0)
            {
                if (queuee.empty())
                {
                    cout<<"No job for Ada?"<<endl;
                }
                else
                {
                    if (flag > 0)
                    {
                        cout<<queuee.front()<<endl;
                        queuee.pop_front();
                    }
                    else
                    {
                        cout<<queuee.back()<<endl;
                        queuee.pop_back();
                    }
                }
            }
            if (strcmp(s, "back") == 0)
            {
                if (queuee.empty())
                {
                    cout<<"No job for Ada?"<<endl;
                }
                else
                {
                    if (flag > 0)
                    {
                        cout<<queuee.back()<<endl;
                        queuee.pop_back();
                    }
                    else
                    {
                        cout<<queuee.front()<<endl;
                        queuee.pop_front();
                    }
                }
            }
            if (strcmp(s, "reverse") == 0)
                flag = -flag;
        }
        queuee.clear();
    }
    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
deque <int>queuee;
int main()
{
    int t, n, flag;
    char s[1005];
    while(cin>>t)
    {
        flag = 1;
        for (int i=1; i<=t; i++)
        {
            cin>>s;
            if (strcmp(s, "toFront") == 0)
            {
                cin>>n;
                if (flag > 0)
                {
                     queuee.push_front(n);
                }
                else
                {
                    queuee.push_back(n);
                }
            }
            if (strcmp(s, "push_back") == 0)
            {
                cin>>n;
                if (flag > 0)
                {
                     queuee.push_back(n);
                }
                else
                {
                    queuee.push_front(n);
                }
            }
            if (strcmp(s, "front") == 0)
            {
                if (queuee.empty())
                {
                    cout<<"No job for Ada?"<<endl;
                }
                else
                {
                    if (flag > 0)
                    {
                        cout<<queuee.front()<<endl;
                        queuee.pop_front();
                    }
                    else
                    {
                        cout<<queuee.back()<<endl;
                        queuee.pop_back();
                    }
                }
            }
            if (strcmp(s, "back") == 0)
            {
                if (queuee.empty())
                {
                    cout<<"No job for Ada?"<<endl;
                }
                else
                {
                    if (flag > 0)
                    {
                        cout<<queuee.back()<<endl;
                        queuee.pop_back();
                    }
                    else
                    {
                        cout<<queuee.front()<<endl;
                        queuee.pop_front();
                    }
                }
            }
            if (strcmp(s, "reverse") == 0)
                flag = -flag;
        }
        queuee.clear();
    }
    return 0;
}
>>>>>>> 8bc4f57e466bd1c299f32d7dc4a14a0b5f3414aa
