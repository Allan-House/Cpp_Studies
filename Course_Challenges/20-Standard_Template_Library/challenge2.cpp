#include <cctype>
#include <iostream>
#include <limits>
#include <list>
#include <string>
#include <iomanip>

class Song {
  friend std::ostream &operator<<(std::ostream& os, const Song& s);
  
  private:
  std::string name_;
  std::string band_;

  public:
  Song() = default;
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

void play_current_song(const Song& song) {
  std::cout << "Playing: " << song << std::endl;
}

void add_and_play_song(std::list<Song>& playlist,
                       std::list<Song>::iterator& current_song)
{
  std::string name, band;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Enter song name: ";
  std::getline(std::cin, name);
  std::cout << "Enter song band: ";
  std::getline(std::cin, band);
  playlist.emplace(++current_song, Song(name, band));
  current_song--;
  play_current_song(*current_song);
}

void display_playlist(const std::list<Song>& playlist) {
  for (const Song& song: playlist) {
    std::cout << song << std::endl;
  }
  std::cout << std::endl;
}

int main() {
  std::cout << "Welcome to your music player!!" << std::endl;
  
  std::list<Song> playlist {
    {"Nude", "Radiohead"},
    {"Time", "Pink Floyd"},
    {"Deadwing", "Porcupine Tree"},
    {"The Smoke", "The Smile"},
    {"Concorde", "BCNR"},
    {"Starless", "King Crimson"}
  };
  std::list<Song>::iterator current_song {playlist.begin()};
  display_playlist(playlist);

  bool keep_running {true};
  char selection {};
  while (keep_running) {
    display_menu();
    std::cin >> selection;
    selection = std::toupper(selection);
    switch (selection) {
      case 'F':
        current_song = playlist.begin();
        play_current_song(*current_song);
        break;
      case 'N':
        current_song++;
        play_current_song(*current_song);
        break;
      case 'P':
        current_song--;
        play_current_song(*current_song);
        break;
      case 'A':
        add_and_play_song(playlist, current_song);
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
