#include <iostream>
#include <list>
#include <string>
#include <iomanip>

class Song {
  friend std::ostream &operator<<(std::ostream& os, const Song& s);
  
  private:
  std::string name_;
  std::string band_;

  public:
  Song();
  Song(std::string name, std::string band)
    : name_ {name}, band_ {band} {}
  
  std::string get_name() const {return name_;}
  std::string get_band() const {return band_;}
  
  bool operator<(const Song& rhs) const {
    return name_ < rhs.name_;
  }

  bool operator==(const Song& rhs) const {
    return name_ == rhs.name_;
  }
};

std::ostream &operator<<(std::ostream& os, const Song& s) {
  os << std::setw(20) << std::left << s.name_
     << std::setw(20) << std::left << s.band_;
  return os;
}

void display_menu() {
  std::cout << std::endl;
  std::cout << "F - Play first song." << std::endl;
  std::cout << "N - Play next song." << std::endl;
  std::cout << "P - Play previous song." << std::endl;
  std::cout << "A - Add and play a new song." << std::endl;
  std::cout << "L - List the current playlist." << std::endl;
  std::cout << "==============================" << std::endl;
  std::cout << " Enter a selection (Q to quit): ";
}

void play_first_song(std::list<Song>& l,
                     std::list<Song>::iterator& it)
{
  it = l.begin();
  std::cout << "Playing: " << l.front() << std::endl;
}

void play_next_song(std::list<Song>& l,
                    std::list<Song>::iterator& it)
{
  std::cout << "Playing: " << *(++it) << std::endl;
}

void play_previous_song(std::list<Song>& l,
                        std::list<Song>::iterator& it)
{
  std::cout << "Playing: " << *(--it) << std::endl;
}

void add_and_play_song(std::list<Song>& l,
                       std::list<Song>::iterator& it)
{
  std::string name, band;
  std::cout << "Enter song name: ";
  std::cin >> name;
  std::cout << "Enter song band: ";
  std::cin >> band;
  l.emplace(++it, Song(name, band));
  it--;
  play_next_song(l, --it);
}

void display_playlist(std::list<Song>& l) {
  for (Song& s: l) {
    std::cout << s << std::endl;
  }
  std::cout << std::endl;
}

int main() {
  std::list<Song> playlist {
    {"Nude", "Radiohead"},
    {"Time", "Pink Floyd"},
    {"Deadwing", "Porcupine Tree"},
    {"The Smoke", "The Smile"},
    {"Concorde", "BCNR"},
    {"Starles", "King Crimson"}
  };
  std::list<Song>::iterator it {playlist.begin()};

  std::cout << "Welcome to your music player!!" << std::endl;
  bool keep_running {true};
  char choice {' '};

  while (keep_running) {
    display_menu();
    std::cin >> choice;
    switch (choice) {
      case 'F':
        play_first_song(playlist, it);
        break;
      case 'N':
        play_next_song(playlist, it);
        break;
      case 'P':
        play_previous_song(playlist, it);
        break;
      case 'A':
        add_and_play_song(playlist, it);
        break;
      case 'L':
        display_playlist(playlist);
        break;
      case 'Q':
        keep_running = false;
        break;
      default:
        std::cout << "Invalid option. Please try again." << std::endl;
    }    
  }

  std::cout << "Terminating program..." << std::endl;
  return 0;
}
