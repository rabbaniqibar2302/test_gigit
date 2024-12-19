#include <iostream>
#include <vector>
using namespace std;

// base class
class Instrument
{
public:
    // Regular Virtual Function
    // Rules harus diikutin
    virtual void play()
    {
        cout << "Playing Instrument....\n";
    };
};

// deriven (turunan)
class Drum : public Instrument
{
public:
    void play()
    {
        cout << "Playing Drum....\n";
    }
};

// Deriven 2 (turunan)
class Flute : public Instrument
{
public:
    void play()
    {
        cout << "Playing Flute....\n";
    }
};

int main()
{
    // abstraksi = backup masing masing dari function

    // jembatan
    Instrument *i1 = new Drum;
    Instrument *i2 = new Flute;

    Instrument *instrument[2] = {i1, i2};

    for (int i = 0; i < 2; i++)
    {
        instrument[i]->play();
    }
}