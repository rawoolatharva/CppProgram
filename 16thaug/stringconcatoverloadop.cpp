#include <iostream>
#include <cstring>
using namespace std;

class String
{
    private:
        char str[30];
    public:
        friend void operator>>(istream &, String &);
        friend void operator<<(ostream &,const String &);

        String operator+(const String s)
        {
            String t;
            strcpy(t.str, str);
            strcat(t.str, s.str);
            return t;
        }
};
void operator>>(istream &in, String &s)
{
    in>>s.str;
}
void operator<<(ostream &out, const String &s)
{
    out<<s.str;
}
int main()
{ 
    String s1, s2, s3;
    cout<<"\n\tEnter first String : ";
    cin >> s1;
    cout<<"\n\tEnter second String : ";
    cin >> s2;
    s3 = s1 + s2;
    cout<<"\n\tConcatinated String is : "<<s3;
    return 0;
}