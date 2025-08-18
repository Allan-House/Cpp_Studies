# Section 20 Challenges - Standard Template Library

## Challenge 1 - Deque

A Palindrome is a string that reads the same backwards or forwards. Simple examples are:
- madam
- bob
- toot
- radar

An entire phrase can also be a palindome, for example:
- A Toyota's a toyota
- A Santa at NASA
- A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!

For the purposes of this assignment, we will only consider alpha characters and omit all other characters.We will also not be considering case. So, A Santa at Nasa, will be processed as: ASANTAATNASA.

A common method to solve this problem is to compare the string to its reverse and if the are equal then it must be a palindrome. But we will use a deque.

I am providing the main driver for you which will automatically run several test cases. You challenge is to write the function `bool is_palindrome(const std::string &s)`. This function will expect a string and it must determine if that string is a palindrome and return true if it is, or false if it is not.

Please use a deque to solve the problem.

## Challenge 2 - List

In this challenge you will create a menu driven application that will simulate a user playing songs from a playlist of songs.

We will use a list to simulate the user selecting the the first song in the playlist and then selecting next and previous to play forward of backwards through the playlist.

Please refer to the video demo run.

We will also allow users to add new song to the playlist and they will be added prior to the currently playing song.

The menu looks as follows:

```
F - Play First Song
N - Play Next song
P - Play Previous song
A - Add and play a new Song at current location
L - List the current playlist
========================
Enter a selection (Q to quit):
```

And the available playlist is modeled as a `std::list<Song>`. I will provide the Song class.

I have provided the starting project.

Note:
If you have trouble reading input, you can clear std::cin and ignore everything in the buffer with:

```
std::cin.clear();
std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
```

Make sure you `#include <limits>` to use it.

## Challenge 3 - Set and Map

## Challenge 4
