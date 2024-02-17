#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Node.h"

class Playlist {
    private:
        Node* head;
    public:
        Playlist();
        Playlist(Node *head);
        ~Playlist();
        Playlist(const Playlist& newPlaylist);
        void insertTail(Brano& newBrano);
        Node* ricercaBrano(string t);
        Brano& maxDurata();
        Brano& operator-(string t);
        void operator!();
        void swap(Node* a, Node* b);
        Playlist& operator+(Brano& newBrano);
        void ascolta();
        void prossBrano();
    friend ostream& operator<<(ostream& out, Playlist& newPlaylist);
    friend istream& operator>>(istream& in, Playlist& newPlaylist);

};
#endif