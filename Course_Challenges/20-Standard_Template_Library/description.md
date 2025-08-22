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

This challenge has 2 parts. We will be reading words from a text file provided to you. The text file is named 'words.txt' and contains the fist few paragraphs from the book, "The Wonderful Wizard of Oz", by L. Frank Baum.

### Part 1

For part 1 of this challenge, you are to display each unique word in the file and immediately following each word display the number of time it occurs in the text file. The words should be displayed in ascending order.

Here is a sample listing of the first few words:

```
Word      Count
===============
Aunt        5
Dorothy     8
Dorothy's   1
Em          5
Even        1
From        1
```

Please use a map with `<string, int>` key/value pairs

### Part 2

For part 2 of this challenge, you are to display each unique word in the file and immediately following each word display the line numbers in which that word appears.

The words should be displayed in ascending order and the line numbers for each word should also be displayed in ascending order. If a word appears more than once on a line then the line number should only appear once.

Here is a sample listing of the first few words:

```
Word       Occurrences
======================
Aunt      [ 2 7 25 29 48 ]
Dorothy   [ 1 7 15 29 39 43 47 51 ]
Dorothy's [ 31 ]
Em        [ 2 7 25 30 48 ]
Even      [ 19 ]
From      [ 50 ]
```

Please use a map of `<string,set<int>>` key/value pairs

**Hint**: consider using stringstream to process words once you read in a line from the file.

**Note**: I have provided the basic shell for your program. I have also provided the functions that display the maps as well as the function that cleans the words read. You should call the `clean_string` function for every word  you read from the file.

## Challenge 4
