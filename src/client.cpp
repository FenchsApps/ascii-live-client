/*
 * Ascii_live client
 * Made by FenchsApps
 *
 * Description: Client for displaying ASCII animations from ascii.live
 * Requires: curl installed in system
 */

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib> // for system()

using namespace std;

const vector<string> ANIMATIONS = {
    "batman", "dvd", "spidyswing", "purdue", "as",
    "coin", "knot", "torus-knot", "maxwell", "brittany",
    "batman-running", "clock", "donut", "forrest", "nyan",
    "playstation", "india", "bnr", "can-you-hear-me", "hes",
    "parrot", "rick", "bomb", "earth", "kitty"
};

void print_animations_list() {
    cout << "\nAvailable ASCII animations (" << ANIMATIONS.size() << " total):\n";
    
    for (size_t i = 0; i < ANIMATIONS.size(); ++i) {
        cout << "  " << ANIMATIONS[i];
        if (i != ANIMATIONS.size() - 1) cout << ",";
        if ((i + 1) % 5 == 0) cout << endl;
    }
}

void run_animation(const string& name) {
    string command = "curl -s ascii.live/" + name;
    cout << "Launching ASCII animation: " << name << endl;
    cout << "Press Ctrl+C to stop...\n\n";
    
    // Вызываем curl в полноэкранном режиме терминала
    int result = system(command.c_str());
    
    if (result != 0) {
        cerr << "\nError: Failed to run animation. Make sure curl is installed.\n";
    }
}

int main(int argc, char* argv[]) {
    cout << "=====================================\n";
    cout << "  ASCII.live Terminal Client v1.1\n";
    cout << "=====================================\n";
    
    if (argc == 1) {
        print_animations_list();
        cout << "\nUsage: " << argv[0] << " <animation_name>\n";
        cout << "Example: " << argv[0] << " nyan\n";
    } 
    else {
        string requested_anim = argv[1];
        bool found = false;
        
        for (const auto& anim : ANIMATIONS) {
            if (anim == requested_anim) {
                found = true;
                run_animation(anim);
                break;
            }
        }
        
        if (!found) {
            cerr << "\nError: Animation '" << requested_anim << "' not found!\n";
            print_animations_list();
            return 1;
        }
    }
    
    return 0;
}
