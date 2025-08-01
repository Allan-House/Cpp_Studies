#include <iostream>
#include <string>

std::string decrypt(const std::string& message);
std::string encrypt(const std::string& message);

const std::string g_alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
const std::string g_key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};


int main() {
  std::string message;
  std::cout << "Enter a secret message: ";
  std::getline(std::cin, message);

  std::string encrypted = encrypt(message);
  std::cout << "Encrypted message: " << encrypted << std::endl;

  std::string decrypted = decrypt(encrypted);
  std::cout << "Decrypted message: " << decrypted << std::endl;
  return 0;
}

std::string decrypt(const std::string& message) {
  std::string decrypted = message;

  for (size_t i = 0; i < decrypted.length(); i++) {
    size_t position = g_key.find(decrypted.at(i));
    if (position != std::string::npos) {
      decrypted.at(i) = g_alphabet.at(position);
    }
  }

  return decrypted;
}

std::string encrypt(const std::string& message) {
  std::string encrypted = message;

  for (size_t i = 0; i < encrypted.length(); i++) {
    size_t position = g_alphabet.find(encrypted.at(i));
    if (position != std::string::npos) {
      encrypted.at(i) = g_key.at(position);
    }
  }

  return encrypted;
}
