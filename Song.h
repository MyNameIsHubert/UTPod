//
// Created by Hubert ECE on 10/29/2018.
//



#ifndef UTPODRIGHT_SONG_H
#define UTPODRIGHT_SONG_H

#endif //UTPODRIGHT_SONG_H

#include <iostream>
#include <string>

using namespace std;

class Song {
private:
    string artist;
    string title;
    int size;
public:

    Song();
    Song(string name);
    Song(string name, string art);
    Song(string name, string art, int mem);

    string getTitle() const
    {
        return title;
    }

    string getArtist() const
    {
        return artist;
    }

    int getSize() const
    {
        return size;
    }

    void setTitle(string const name)
    {
        title = name;
    }

    void setArtist(string const name2)
    {
      artist = name2;
    }

    void setSize(int const mem1)
    {
        size = mem1;
    }

    bool operator >(Song const &rhs);
    bool operator ==(Song const &rhs);

    ~Song();
};

