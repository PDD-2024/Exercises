#ifndef TWITTERPOST_H
#define TWITTERPOST_H

#include <string>
#include <iostream>

class TwitterPost
{
public:
    TwitterPost(std::string text, std::string user, std::string date);

    void like();
    bool isLiked() const;
    std::string getContent() const;
    void display() const;

    bool operator==(const TwitterPost &other) const;

private:
    std::string content;
    std::string user;
    std::string date;
    bool liked;
};

#endif // TWITTERPOST_H