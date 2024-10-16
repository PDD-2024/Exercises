#include "TwitterPost.h"

TwitterPost::TwitterPost(std::string text, std::string user, std::string date)
    : content(text), user(user), date(date), liked(false) {}

void TwitterPost::like()
{
    liked = true;
}

bool TwitterPost::isLiked() const
{
    return liked;
}

std::string TwitterPost::getContent() const
{
    return content;
}

void TwitterPost::display() const
{
    std::cout << "==============================\n";
    std::cout << "User: @" << user << "\n";
    std::cout << "Date: " << date << "\n";
    std::cout << "------------------------------\n";
    std::cout << content << "\n";
    std::cout << "------------------------------\n";
    if (liked)
    {
        std::cout << "[❤️ You liked this post]\n";
    }
    else
    {
        std::cout << "[💔 Not liked]\n";
    }
    std::cout << "==============================\n";
}

bool TwitterPost::operator==(const TwitterPost &other) const
{
    return content == other.content && user == other.user && date == other.date;
}