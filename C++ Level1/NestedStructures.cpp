#include <iostream>

using namespace std;

enum enColor {Green, Red, Yellow, Blue};
enum enGendor {Male, Female};
enum enMaritalStatus {Single, Married};

struct stAddress {
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};

struct stContactInfo {
    string Phone;
    string Email;
    stAddress Address;
};

struct stPerson {
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enMaritalStatus MaritalStatus;
    enGendor Gendor;
    enColor FavoriteColor;
};

int main () {

    stPerson Person1;

    Person1.FirstName = "Ahmad";
    Person1.LastName = "Majed";

    Person1.ContactInfo.Email = "majedahmad817@gmail.com";
    Person1.ContactInfo.Phone = "+961 71094818";

    Person1.ContactInfo.Address.StreetName = "Beirut, Lebanon";
    Person1.ContactInfo.Address.BuildingNo = "Mondial";
    Person1.ContactInfo.Address.POBox = "234";
    Person1.ContactInfo.Address.ZipCode = "1200";

    Person1.Gendor = enGendor::Male;
    Person1.MaritalStatus = enMaritalStatus::Single;
    Person1.FavoriteColor = enColor::Red;

    cout << Person1.FirstName << endl;

    return 0;   
}
