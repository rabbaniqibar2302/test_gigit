// Virtual Function it has 2 version
// 1. Pure Virtual Function
// - Declare using virtual type name() = 0
// - Harus di implementasikan ke kelas turunan
// - Menjadikannya Kelas Abstrak (tidak bisa di instansiasikan)

// 2. Regular Virtual Function
// - Declare using virtual type name(){}
// - Bisa dijadikan kelas turunan (yang diturunkan)

#include <iostream>
using namespace std;

class Percussion
{
public:
    virtual void make_dum()
    {
        cout << "Dum Dum Dum";
    }
    void hello()
    {
        cout << "Halo Saya Kelas Abstrak\n";
        cout << "Dan saya menggunakan Regular Virtual Function\n";
    }
};

class Instrument
{
public:
    virtual void make_sound() = 0;
    // tidak akan berguna ketika membuat method di dalam kelas abstrak
    void hello()
    {
        cout << "Halo Saya Kelas Abstrak\n";
        cout << "Dan saya menggunakan Pure Virtual Function\n";
    }
};
class Accordion : public Instrument
{
public:
    void make_sound()
    {
        cout << "Accordion Is Playing....\n";
    }
};

class Piano : public Instrument
{
public:
    void make_sound()
    {
        cout << "Piano Is Playing....\n";
    }
};

class Drum : public Percussion
{
public:
    void make_dum()
    {
        cout << "trtrtrtrtrtrt\n";
    }
};

int main()
{
    Instrument *i1 = new Accordion();
    Instrument *i2 = new Piano();
    Instrument *i3;
    i3->hello();
    Instrument *instrument[2] = {i1, i2};
    for (int i = 0; i < 2; i++)
    {
        instrument[i]->make_sound();
    }
    cout << endl;

    // noh liat gabisa kan?
    // Instrument Obj;
    // Obj.hello();

    Percussion *p1 = new Drum();
    p1->hello();
    p1->make_dum();
}