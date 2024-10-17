#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "TwitterPost.h"
#include "loops.h"


void showMenu()
{
    std::cout << "\nSelect an option:\n";
    std::cout << "1. Display all posts (For loop)\n";
    std::cout << "2. Display all posts (Range-based For loop)\n";
    std::cout << "3. Display all posts (Iterator)\n";
    std::cout << "4. Display all posts (For each)\n";
    std::cout << "5. Like a post (For loop)\n";
    std::cout << "6. Like a post (Range-based For loop)\n";
    std::cout << "7. Like a post (Iterator)\n";
    std::cout << "8. Like a post (Find)\n";
    std::cout << "9. Exit\n";
    std::cout << "Enter your choice: ";
}

int main()
{
    // Initial set of 20 posts
    std::vector<TwitterPost> posts = {
        TwitterPost("Just had a great cup of coffee!", "user1", "2023-10-01"),
        TwitterPost("Loving the new season of my favorite show.", "user2", "2023-10-02"),
        TwitterPost("Exploring the mountains today.", "user3", "2023-10-03"),
        TwitterPost("Reading a fascinating book on AI.", "user4", "2023-10-04"),
        TwitterPost("Had a productive day at work.", "user5", "2023-10-05"),
        TwitterPost("Enjoying a sunny day at the beach.", "user6", "2023-10-06"),
        TwitterPost("Cooking a new recipe tonight.", "user7", "2023-10-07"),
        TwitterPost("Watching a beautiful sunset.", "user8", "2023-10-08"),
        TwitterPost("Learning to play the guitar.", "user9", "2023-10-09"),
        TwitterPost("Just finished a 5k run!", "user10", "2023-10-10"),
        TwitterPost("Attending a tech conference.", "user11", "2023-10-11"),
        TwitterPost("Trying out a new programming language.", "user12", "2023-10-12"),
        TwitterPost("Visited a historical museum today.", "user13", "2023-10-13"),
        TwitterPost("Had a great time with friends.", "user14", "2023-10-14"),
        TwitterPost("Experimenting with new art techniques.", "user15", "2023-10-15"),
        TwitterPost("Planning my next travel adventure.", "user16", "2023-10-16"),
        TwitterPost("Enjoying a quiet evening at home.", "user17", "2023-10-17"),
        TwitterPost("Volunteering at a local shelter.", "user18", "2023-10-18"),
        TwitterPost("Practicing mindfulness and meditation.", "user19", "2023-10-19"),
        TwitterPost("Celebrating a personal milestone.", "user20", "2023-10-20")};

    while (true)
    {
        showMenu();
        int choice;
        std::cin >> choice;

        if (choice == 9)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            ForLoop::displayAll(posts);
            break;
        case 2:
            RangeForLoop::displayAll(posts);
            break;
        case 3:
            IteratorLoop::displayAll(posts);
            break;
        case 4:
            ForEachDisplay::displayAll(posts);
            break;
        case 5:
        {
            std::cout << "Enter the post number to like (1-20): ";
            int postIndex;
            std::cin >> postIndex;
            ForLoop::likePost(posts, posts[postIndex - 1].getContent());
            break;
        }
        case 6:
        {
            std::cout << "Enter the post number to like (1-20): ";
            int postIndex;
            std::cin >> postIndex;
            RangeForLoop::likePost(posts, posts[postIndex - 1].getContent());
            break;
        }
        case 7:
        {
            std::cout << "Enter the post number to like (1-20): ";
            int postIndex;
            std::cin >> postIndex;
            IteratorLoop::likePost(posts, posts[postIndex - 1].getContent());
            break;
        }
        case 8:
        {
            std::cout << "Enter the post number to like (1-20): ";
            int postIndex;
            std::cin >> postIndex;

            FindPost::findAndLikePost(posts, posts[postIndex - 1]);
            break;
        }
        default:
            std::cout << "Invalid choice, try again.\n";
        }
    }

    return 0;
}
