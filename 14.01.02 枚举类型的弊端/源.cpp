#include <iostream>

using namespace std;

class AuthorityType {
    enum InternalType {
        ITBan,
        ITGuest,
        ITMember,
        ITAdmin,
        ITSystem,
    };
    InternalType self_;
public:
    AuthorityType(InternalType self) : self_(self) {}
    bool operator < (const AuthorityType& other) const
    {
        return self_ < other.self_;
    }
    bool operator > (const AuthorityType& other) const
    {
        return self_ > other.self_;
    }
    bool operator <= (const AuthorityType& other) const
    {
        return self_ <= other.self_;
    }
    bool operator >= (const AuthorityType& other) const
    {
        return self_ >= other.self_;
    }
    bool operator == (const AuthorityType& other) const
    {
        return self_ == other.self_;
    }
    bool operator != (const AuthorityType& other) const
    {
        return self_ != other.self_;
    }
    const static AuthorityType System, Admin, Member, Guest, Ban;
};


#define DEFINE_AuthorityType(x) const AuthorityType AuthorityType::x(AuthorityType::IT ## x) // ## ÊÇ¹¹´®²Ù×÷·û
DEFINE_AuthorityType(System);
DEFINE_AuthorityType(Admin);
DEFINE_AuthorityType(Member);
DEFINE_AuthorityType(Guest);
DEFINE_AuthorityType(Ban);


int main(int argc, char** argv)
{
    bool b = AuthorityType::System > AuthorityType::Admin;
    cout << boolalpha << b << endl;
    return 0;
}