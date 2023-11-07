#include "ELMoves_Finisher_Part.h"

FELMoves_Finisher_Part::FELMoves_Finisher_Part() {
    this->Type = EFinisher_Type::None;
    this->RSDir = EFinisher_RS_Direction::All;
    this->MovesIndex = 0;
}

FELMoves_Finisher_Part::FELMoves_Finisher_Part(const FELMoves_Finisher_Part& Other)
{
    this->Type = Other.Type;
    this->RSDir = Other.RSDir;
    this->MovesIndex = Other.MovesIndex;
}

bool FELMoves_Finisher_Part::operator==(const  FELMoves_Finisher_Part& Other) const
{
    return Equals(Other);
}

bool FELMoves_Finisher_Part::operator!=(const  FELMoves_Finisher_Part& Other) const
{
    return !Equals(Other);
}
bool FELMoves_Finisher_Part::Equals(const  FELMoves_Finisher_Part& Other) const
{
    return Type == Other.Type && RSDir == Other.RSDir && MovesIndex == Other.MovesIndex;
}