#ifndef LOOPS_H
#define LOOPS_H

#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include "TwitterPost.h"

// Skeleton Loop Classes
class ForLoop
{
public:
    static void displayAll(const std::vector<TwitterPost> &posts);
    static void likePost(std::vector<TwitterPost> &posts, const std::string &content);
};

class RangeForLoop
{
public:
    static void displayAll(const std::vector<TwitterPost> &posts);
    static void likePost(std::vector<TwitterPost> &posts, const std::string &content);
};

class IteratorLoop
{
public:
    static void displayAll(const std::vector<TwitterPost> &posts);
    static void likePost(std::vector<TwitterPost> &posts, const std::string &content);
};

class FindPost
{
public:
    static void findAndLikePost(std::vector<TwitterPost> &posts, const TwitterPost &post);
};

class ForEachDisplay
{
public:
    static void displayAll(const std::vector<TwitterPost> &posts);
};

#endif // LOOPS_H