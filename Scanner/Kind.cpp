#include "Kind.h"
#include "Token.h"
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;


static map<string, Kind> stringToKind = {
    {"#unkown", Kind::Unknown},
    {"#EndOfToken", Kind::EndOfToken},

    {"null", Kind::NullLiteral},
    {"true", Kind::TrueLiteral},
    {"false", Kind::FalseLiteral},
    {"#Number", Kind::NumberLiteral},
    {"#String", Kind::StringLiteral},
    {"#identifier", Kind::Identifier},

    {"function", Kind::Function},
    {"return", Kind::Return},
    {"var", Kind::Variable},
    {"for", Kind::For},
    {"break", Kind::Break},
    {"continue", Kind::Continue},
    {"if", Kind::If},
    {"elif", Kind::Elif},
    {"else", Kind::Else},
    {"print", Kind::Print},
    {"printLine", Kind::PrintLine},

    {"and", Kind::LogicalAnd},
    {"or", Kind::LogicalOr},

    {"=", Kind::Assignment},

    {"+", Kind::Add},
    {"-", Kind::Subtract},
    {"*", Kind::Multiply},
    {"/", Kind::Divide},
    {"%", Kind::Modulo},

    {"==", Kind::Equal},
    {"!=", Kind::NotEqual},
    {"<", Kind::LessThan},
    {">", Kind::GreaterThan},
    {"<=", Kind::LessOrEqual},
    {">=", Kind::GreaterOrEqual},

    {",", Kind::Comma},
    {":", Kind::Colon},
    {";", Kind::Semicolon},
    {"(", Kind::LeftParen},
    {")", Kind::RightParen},
    {"{", Kind::LeftBrace},
    {"}", Kind::RightBrace},
    {"[", Kind::LeftBracket},
    {"]", Kind::RightBracket},
};

auto toKind(string string) -> Kind {
    if(stringToKind.count(string)){
        return stringToKind.at(string);
    };
    return Kind::Unknown;
}



// auto printTokenList(vector<Token> tokenList) -> void {
//   cout << setw(12) << left << "KIND"
//        << "STRING" << endl;
//   cout << string(23, '-') << endl;
//   for (auto &token : tokenList)
//     cout << token << endl;
// }