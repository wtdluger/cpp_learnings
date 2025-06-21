#include <SFML/Audio.hpp>
#include <iostream>

int main() {
    sf::SoundBuffer buffer;

    // Load the sound file
    if (!buffer.loadFromFile("Buzzer.wav")) {
        std::cerr << "Failed to load Buzzer.wav\n";
        return 1;
    }

    sf::Sound sound;
    sound.setBuffer(buffer);

    sound.play();  // Play the beep sound

    // Wait until sound finishes playing
    while (sound.getStatus() == sf::Sound::Playing) {
        sf::sleep(sf::milliseconds(100));
    }

    return 0;
}
/*
    linux command to install SFML
    sudo-apt-get install libsfml-dev

    linux command to compile this program
    g++ 2026.06.21_beep_tone2.cpp -o beep_beep2 -lsfml-audio -lsfml-system

*/