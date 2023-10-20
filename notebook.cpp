#include <emscripten/bind.h>
#include <vector>
#include <string>

using namespace emscripten;
using namespace std;

class Notebook {
public:
    void addNote(const string& note) {
        notes.push_back(note);
    }

    string getNote(int index) {
        if (index >= 0 && index < notes.size()) {
            return notes[index];
        }
        return "";
    }

    int noteCount() {
        return notes.size();
    }

private:
    vector<string> notes;
};

EMSCRIPTEN_BINDINGS(notebook) {
    class_<Notebook>("Notebook")
        .constructor<>()
        .function("addNote", &Notebook::addNote)
        .function("getNote", &Notebook::getNote)
        .function("noteCount", &Notebook::noteCount);
}
