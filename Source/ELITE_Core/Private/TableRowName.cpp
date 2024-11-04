#include "TableRowName.h"

FTableRowName::FTableRowName() {
}

FTableRowName::FTableRowName(const FTableRowName& Other)
{
    this->Name = Other.Name;
}

bool FTableRowName::operator==(const  FTableRowName& Other) const
{
    return Equals(Other);
}

bool FTableRowName::operator!=(const  FTableRowName& Other) const
{
    return !Equals(Other);
}
bool FTableRowName::Equals(const  FTableRowName& Other) const
{
    return Name == Other.Name;
}