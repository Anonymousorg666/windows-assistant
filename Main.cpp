/* Ai Artificial Intelligence Project */

#include <iostream>
#include <string>
#include <unistd.h>
#include <time.h>
#include <Windows.h>

using std::ws;
using std::cout;
using std::cin;
using std::string;
using std::endl;


#define NextLine '\n'
#define Space '\t'

namespace Google
{

    int OpenGoogle()
    {
        system("start https://www.google.com");
        return 0;
    }

}

namespace GS
{

    
int GoogleSearch()
{
    string song;
    string url;

    /* code */

    url = "https://www.google.com/search?q=";

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        cout << NextLine;
    }

    for (int i = 0; i <= 12; i++)
    {
        /* code */
        cout << Space;
    }

    cout << "What You  Searching For: " << endl;

    string phrase0 = " What You Are Searching For";
    string command0 = "espeak \"" + phrase0 + "\"";
    const char *charCommand0 = command0.c_str();
    system(charCommand0);

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        cout << NextLine;
    }

    for (int i = 0; i <= 9; i++)
    {
        /* code */
        cout << Space;
    }

    cout << "Say: ";
    string str = "...";
    int i = 0;
    for (i = 0; i <= 2; i++)
    {
        /* code */
        cout << str[i];
        sleep(1);
    }

    getline(cin >> ws, song);

    for (int i = 0; i <= song.length(); i++)
    {
        /* code */
        if (isspace(song[i]))
        {
            /* code */
            song[i] = '+';
        }
    }

    string completeUrl = url + song;
    string phrase = " Searching On Google";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    system(std::string("start " + completeUrl).c_str());

    return 0;
}

}

namespace Youtube
{

    int OpenYouTube()
    {
        system("start https://www.youtube.com/");
        return 0;
    }

}

namespace YS
{

    
int Search()
{
    string song;
    string url;

    /* code */

    url = "https://www.youtube.com/results?search_query=";

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        cout << NextLine;
    }

    for (int i = 0; i <= 12; i++)
    {
        /* code */
        cout << Space;
    }

    cout << "What You  Searching For: " << endl;

    string phrase0 = " What You Are Searching For";
    string command0 = "espeak \"" + phrase0 + "\"";
    const char *charCommand0 = command0.c_str();
    system(charCommand0);

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        cout << NextLine;
    }

    for (int i = 0; i <= 9; i++)
    {
        /* code */
        cout << Space;
    }

    cout << "Say: ";
    string str = "...";
    int i = 0;
    for (i = 0; i <= 2; i++)
    {
        /* code */
        cout << str[i];
        sleep(1);
    }

    getline(cin >> ws, song);

    for (int i = 0; i <= song.length(); i++)
    {
        /* code */
        if (isspace(song[i]))
        {
            /* code */
            song[i] = '+';
        }
    }

    string completeUrl = url + song;
    string phrase = " Searching On Youtube";
    string command = "espeak \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    system(("start " + completeUrl).c_str());

    return 0;
}

}

namespace SongPlayer
{

    
int Song()
{
    string song;
    /* code */

    do
    {
        /* code */

        for (int i = 0; i <= 5; i++)
        {
            /* code */
            cout << NextLine;
        }

        for (int i = 0; i <= 12; i++)
        {
            /* code */
            cout << Space;
        }

        cout << " Please Enter Song you wanna here: " << endl;
        string phrase = "Please Enter Song you wanna here";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        string str = "...";
        int i = 0;

        for (int i = 0; i <= 5; i++)
        {
            /* code */
            cout << NextLine;
        }

        for (int i = 0; i <= 12; i++)
        {
            /* code */
            cout << Space;
        }

        cout << "Say:";

        for (i = 0; i <= 2; i++)
        {
            /* code */
            cout << str[i];
            sleep(1);
        }

        getline(cin >> ws, song);

        /* code */
        if (song == "Jay ho" || song == "Please play jay ho" || song == "please play jay ho" || song == "jay ho")
        {
            /* code */
            string phrase = "Playing Jay Ho On youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://youtu.be/xwwAVRyNmgQ");
        }

        if (song == "Tum Pe Hum To" || song == "tumpe ham to mare ja rahe hai" || song == "Tumpe ham to mare ja rahe hai" || song == "Please play tum pe hum to song" || song == "Please play tum pe hum to song " || song == "tum pe hum to " || song == "Please play tum pe hum to mare ja rahe hai" || song == "please play tum pe hum to mare ja rahe hai" || song == "tum pe ham to mare ja rahe hai")
        {
            /* code */
            string phrase = "Playing Tum Pe Ham To Mare Jaa rahe Hai on youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com/watch?v=5NdUPDZFhyc");
        }

        else if (song == "Tum Pe Hum To Female" || song == "Please play tum pe hum to song female version" || song == "Please play tum pe hum to song female " || song == "tum pe hum to female " || song == "Please play tum pe hum to mare ja rahe hai female" || song == "please play tum pe hum to mare ja rahe hai female" || song == "tum pe ham to mare ja rahe hai female")
        {
            /* code */
            string phrase = "Playing Tumpe Ham To Mare Jaa rahe hai in Female on Youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com/watch?v=fSLwq49DF4Y");
        }

        else if (song == "Vandemataram" || song == "Bande Matram" || song == "Bandemataram" || song == "Please play bandemataram" || song == "Please play Bandemataram" || song == "Please play Bandemataram on youtube" || song == "please play bandemataram on youtube" || song == "play bandemataram")
        {
            /* code */
            string phrase = "Playing Bande Matram  on Youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com/watch?v=jDn2bn7_YSM");
        }

        else if (song == "tere fitoor" || song == "Tera Fitoor" || song == "Tera fitoor" || song == "Please play tera fitoor" || song == "Please play Tera Fitoor" || song == "Please play Tera fitoor" || song == "please play tera fitoor on youtube" || song == "play Tera Fitoor")
        {
            /* code */
            string phrase = "Tera Fitoor  on Youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com/watch?v=qfdShSZZxlg");
        }

        else if (song == "tu banja gali banaras ki" || song == "Tu Banja Gali Banaras Ki" || song == "Tu banja gali banaras ki" || song == "Please play tu banja gali banaras ki" || song == "Please play Tu Banja Gali Banaras Ki" || song == "Please play Tu banja gali banaras ki" || song == "please play tu banja gali banaras ki on youtube" || song == "play Tu Banja Gali Banaras Ki")
        {
            /* code */
            string phrase = " Tu Banja Gali Banaras ki on Youtube";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
            system("start https://www.youtube.com/watch?v=pgc3J2hBBEU");
        }

        else
        {

            break;
        }

    } while (true);

    return 0;
}

}

namespace instagram
{

    int OpenInsta()
    {
        system("start https://www.instagram.com");
        return 0;
    }

}

namespace whatsapp
{

    int OpenWhats()
    {
        system("start https://web.whatsapp.com/");
        return 0;
    }

}

using namespace Google;
using namespace GS;
using namespace Youtube;
using namespace YS;
using namespace SongPlayer;
using namespace std;
using namespace instagram;
using namespace whatsapp;


STARTUPINFO Start = {0};
PROCESS_INFORMATION Process = {0};

int Ai()
{

    return 0;
}

int TaskList()
{

    /* Messages */

    for (int i = 0; i <= 12; i++)
    {
        cout << Space;
    }
    cout << "Open Google" << Space << "     Open YouTube" << NextLine << endl;

    for (int i = 0; i <= 12; i++)
    {
        cout << Space;
    }
    cout << "Open WhatsApp" << Space << "     Open Instagram" << NextLine << endl;

    for (int i = 0; i <= 12; i++)
    {
        cout << Space;
    }
    cout << "Open Notepad" << Space << "     Open Word" << NextLine << endl;

    for (int i = 0; i <= 12; i++)
    {
        cout << Space;
    }
    cout << "Shut down" << Space << "     Restart" << NextLine << endl;

    /* Message 1*/
    string phrase6 = "I can do something to you like ";
    string command6 = "espeak \"" + phrase6 + "\"";
    const char *charCommand6 = command6.c_str();
    system(charCommand6);

    string phrase10 = "You can say Open Google and Open Youtube ";
    string command10 = "espeak \"" + phrase10 + "\"";
    const char *charCommand10 = command10.c_str();
    system(charCommand10);

    string phrase7 = "Open WhatsApp Open Instagram";
    string command7 = "espeak \"" + phrase7 + "\"";
    const char *charCommand7 = command7.c_str();
    system(charCommand7);

    /*  Message 2*/

    string phrase8 = "Open Notepad Open Word";
    string command8 = "espeak \"" + phrase8 + "\"";
    const char *charCommand8 = command8.c_str();
    system(charCommand8);

    /*  Message 3*/

    string phrase9 = "Shutdown and Restart";
    string command9 = "espeak \"" + phrase9 + "\"";
    const char *charCommand9 = command9.c_str();
    system(charCommand9);

    /*  Message 4*/

    return 0;
}




int Google_Translator()
{
    system("start https://translate.google.co.in/");
    return 0;
}

void Notepad()
{

    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &Start, &Process);
}

void Wordpad()
{

    CreateProcess(TEXT("C:\\Windows\\wordpad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &Start, &Process);
}

int space()
{

    for (float i = 0; i <= 9; i++)
    {
        cout << Space;
    }
    return 0;
}

int Nextline()
{

    for (float i = 0; i <= 5; i++)
    {
        cout << NextLine;
    }
    return 0;
}

int Restart()
{
    system("c:\\windows\\system32\\shutdown /r");
    return 0;
}

int LogOut()
{
    system("c:\\windows\\system32\\shutdown /l");
    return 0;
}

int ShutDown()
{
    system("c:\\windows\\system32\\shutdown /s");
    return 0;
}

int main()
{

    system("cls");

    do
    {

        Nextline();
        space();
        cout << "______________________________________________________________________________" << NextLine;
        space();
        cout << "______________________________________________________________________________" << NextLine << endl;

        string phrase4 = "Hello World";
        string command4 = "espeak \"" + phrase4 + "\"";
        const char *charCommand4 = command4.c_str();
        system(charCommand4);

        for (int i = 0; i <= 13; i++)
        {
            cout << Space;
        }

        cout << " Hello! World  " << endl;
        space();

        cout << "______________________________________________________________________________" << NextLine;
        space();
        cout << "______________________________________________________________________________" << NextLine;

        Nextline();
        space();
        cout << "______________________________________________________________________________" << NextLine;
        space();
        cout << "______________________________________________________________________________" << NextLine << endl;

        string phrase5 = "I am Your Assistant";
        string command5 = "espeak \"" + phrase5 + "\"";
        const char *charCommand5 = command5.c_str();
        system(charCommand5);
        for (int i = 0; i <= 12; i++)
        {
            cout << Space;
        }

        cout << "      I am Your Assistant!" << endl;
        space();

        cout << "______________________________________________________________________________" << NextLine;
        space();
        cout << "______________________________________________________________________________" << NextLine << endl;

        TaskList();
        space();

        cout << "______________________________________________________________________________" << NextLine;
        space();
        cout << "______________________________________________________________________________" << NextLine << endl;

        do
        {

            do
            {

                for (int i = 0; i <= 12; i++)
                {
                    cout << Space;
                }
                cout << Space << "  Listening... " << endl;
                string phrase6 = " Listening ";
                string command6 = "espeak \"" + phrase6 + "\"";
                const char *charCommand6 = command6.c_str();
                system(charCommand6);

                cout << NextLine << "\n"
                     << endl;
                string Task;
                space();
                string str = "...";
                int i = 0;

                cout << "Say:";

                for (i = 0; i <= 2; i++)
                {
                    /* code */
                    cout << str[i];
                    sleep(1);
                }

                getline(cin >> ws, Task);

                if (Task == "Hello" || Task == "Hey" || Task == "Hi" || Task == "Hii" || Task == "hello" || Task == "hey" || Task == "hi" || Task == "hii")
                {

                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    string phrase15 = "Hello  Sir  How can I help you";
                    cout << "Hello , Sir ! How can I help you ? ";
                    Nextline();
                    string command15 = "espeak \"" + phrase15 + "\"";
                    const char *charCommand15 = command15.c_str();
                    system(charCommand15);
                }

                else if (Task == "How are you" || Task == "how are you" || Task == "What's up")
                {

                    cout << NextLine;
                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    cout << " Well ! I am good ....  " << NextLine;

                    cout << NextLine;
                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    cout << NextLine;
                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    cout << " Whats up ? Dear ....  " << NextLine;

                    cout << NextLine;
                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    string message;
                    string phrase16 = " Well ! I am good .....Whats up ? Dear .... ";
                    string command16 = "espeak \"" + phrase16 + "\"";
                    const char *charCommand16 = command16.c_str();
                    system(charCommand16);

                    string str = "...";
                    int i = 0;

                    cout << "\n"
                         << NextLine << endl;

                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }
                    cout << Space << " Listening... " << endl;
                    sleep(1);
                    string phrase17 = " Listening ";
                    string command17 = "espeak \"" + phrase17 + "\"";
                    const char *charCommand17 = command17.c_str();
                    system(charCommand17);

                    cout << NextLine << "\n"
                         << endl;
                    string Task;
                    space();

                    cout << "Say:";

                    for (i = 0; i <= 2; i++)
                    {
                        /* code */
                        cout << str[i];
                        sleep(1);
                    }

                    getline(cin >> ws, message);

                    string phrase18 = " OOOO.........Have a good time sir ";
                    string command18 = "espeak \"" + phrase18 + "\"";
                    const char *charCommand18 = command18.c_str();
                    system(charCommand18);

                    if (message == "I also good" || message == "good" || message == "Good" || message == "I'm fine thank you" || message == "I am fine thank you." || message == "I am fine.")
                    {
                        cout << NextLine;
                        break;
                    }
                }

                else if (Task == "What are you doing" || Task == "What's going on " || Task == "Are you doing anything" || Task == "What is happening" || Task == "What are you up to" || Task == "What do you do" | Task == "What's up" || Task == "Whats up" || Task == "what's up")
                {

                    cout << NextLine << NextLine << endl;
                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    string phrase19 = " I've been learing all sorts of new things.";
                    string command19 = "espeak \"" + phrase19 + "\"";
                    const char *charCommand19 = command19.c_str();
                    system(charCommand19);

                    cout << " I've been learing all sorts of new things. ";

                    cout << NextLine;
                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    string message;
                    cout << "Test m knowlodge any time by asking for a fact....  ";
                    Nextline();
                }

                else if (Task == "Please Search On Youtube" || Task == "Please search on youtube" || Task == "Please make a youtube search for me" || Task == "Please Make A Youtube Search For Me" || Task == "please make a youtube search for me" || Task == "Can you serch somthing for me on youtube" || Task == "Search on youtube" || Task == "I wanna search somthing on youtube" || Task == "Please search on youtube" || Task == "Search On Youtube" || Task == "search on youtube" || Task == "Search on Youtube")
                {
                    /* code */
                    Search();
                    Nextline();
                }

                else if (Task == "Please Search On Google" || Task == "Please search on google" || Task == "Please make a google search for me" || Task == "Please Make A Google Search For Me" || Task == "please make a google search for me" || Task == "Can you search somthing for me in google" || Task == "Search on google" || Task == "Google Search" || Task == "Please search on google")
                {
                    /* code */
                    GoogleSearch();
                    Nextline();
                }

                else if (Task == "Open Google" || Task == "Open google" || Task == "open google" || Task == "Please open google" || Task == "please open google" || Task == "Can you please open google for me")
                {

                    string phrase20 = " Opening Google.";
                    string command20 = "espeak \"" + phrase20 + "\"";
                    const char *charCommand20 = command20.c_str();
                    system(charCommand20);
                    OpenGoogle();

                    cout << NextLine << NextLine << endl;
                }

                else if (Task == "Open Youtube" || Task == "Open youtube" || Task == "open youtube" || Task == "Please open youtube" || Task == "please open youtube" || Task == "Please open Youtube" || Task == "Can you please open youtube for me")
                {

                    cout << NextLine << NextLine << endl;

                    string phrase21 = " Opening Youtube.";
                    string command21 = "espeak \"" + phrase21 + "\"";
                    const char *charCommand21 = command21.c_str();
                    system(charCommand21);
                    OpenYouTube();
                }

                else if (Task == "Open Instagram" || Task == "Open instagram" || Task == "open instagram" || Task == "Please Open Instagram" || Task == "Please open instagram" || Task == "please open instagram" || Task == "Please open Instagram")
                {

                    cout << NextLine << NextLine << endl;

                    string phrase22 = " Opening Instagram.";
                    string command22 = "espeak \"" + phrase22 + "\"";
                    const char *charCommand22 = command22.c_str();
                    system(charCommand22);
                    OpenInsta();
                }

                else if (Task == "Open WhatsApp" || Task == "Open whatsapp" || Task == "open whatsapp" || Task == "Please Open WhatsApp" || Task == "please open whatsapp" || Task == "WhatsApp Open" || Task == "Please open whatsapp" || Task == "Please open WhatsApp")
                {

                    cout << NextLine << NextLine << endl;

                    string phrase23 = " Opening WhatsApp.";
                    string command23 = "espeak \"" + phrase23 + "\"";
                    const char *charCommand23 = command23.c_str();
                    system(charCommand23);
                    OpenWhats();
                }

                else if (Task == "What Time is it" || Task == "What time is it" || Task == "what time is it" || Task == "What Time is it Please" || Task == "What time is it Please" || Task == "What's the time now" || Task == "what's the time now")
                {

                    cout << NextLine << NextLine << endl;

                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    time_t now = time(0);

                    char *Date_and_Time = ctime(&now);
                    // cout << "The Time Is: " << endl;

                    //  cout << Date_and_Time;

                    string Time = Date_and_Time;
                    string Date = Date_and_Time;

                    for (int i = 11; i <= 18; i++)
                    {
                        /* code The Time is: */
                        cout << Time[i];
                    }

                    cout << Space;

                    for (int i = 0; i <= 10; i++)
                    {
                        /* code The Time is: */
                        cout << Time[i];
                    }

                    for (int i = 19; i <= 23; i++)
                    {
                        /* code The Time is: */
                        cout << Date[i];
                    }

                    cout << Nextline();
                }

                else if (Task == "What Date is it" || Task == "What date is it" || Task == "what date is it" || Task == "What date is it Please" || Task == "What date is it Please" || Task == "What's the date now" || Task == "what's the date now")
                {

                    cout << NextLine << NextLine << endl;

                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    time_t now = time(0);

                    char *Date_and_Time = ctime(&now);

                    cout << Space;

                    for (int i = 0; i <= 23; i++)
                    {
                        /* code Time*/

                        if (i >= 11 && i <= 18)
                        {
                        }
                        else
                        {

                            cout << Date_and_Time[i];
                        }
                    }

                    cout << Nextline();
                }

                else if (Task == "Play a song" || Task == "Play song" || Task == "play song" || Task == "play a song" || Task == "Please Play a Song" || Task == "Please play a song" || Task == "please play a song" || Task == "play song on youtube" || Task == "Play song on youtube" || Task == "Please Play a Song on Youtube" || Task == "please play a song on youtube" || Task == "Please play a song for me")
                {
                    /* code */
                    system("start https://www.youtube.com/watch?v=jDn2bn7_YSM");
                    string phrase55 = " Playing vandemataram on youtube ";
                    string command55 = "espeak \"" + phrase55 + "\"";
                    const char *charCommand55 = command55.c_str();
                    system(charCommand55);

                    Song();

                    cout << NextLine << NextLine << endl;
                }

                else if (Task == " Open google translator" || Task == "Please open google translator" || Task == "Be my interpreter")
                {

                    string phrase27 = " Opening Your Gopogle Interpreter ";
                    string command27 = "espeak \"" + phrase27 + "\"";
                    const char *charCommand27 = command27.c_str();
                    system(charCommand27);

                    Google_Translator();
                }

                else if (Task == "Open google Hindi To English Translator" || Task == "Please open google Hindi To English translator" || Task == "Be my interpreter")
                {

                    string phrase27 = " Opening Your Gopogle Interpreter ";
                    string command27 = "espeak \"" + phrase27 + "\"";
                    const char *charCommand27 = command27.c_str();
                    system(charCommand27);

                    Google_Translator();
                }

                else if (Task == "Open Notepad" || Task == "Open notepad" || Task == "open notepad" || Task == "Please Open Notepad" || Task == "please open notepad" || Task == "Please open notepad")
                {

                    cout << NextLine << NextLine << endl;

                    string phrase24 = "Opening Notepad";
                    string command24 = "espeak \"" + phrase24 + "\"";
                    const char *charCommand24 = command24.c_str();
                    system(charCommand24);

                    Notepad();

                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    cout << Space << " Opening Notepad  ";
                    Nextline();
                }

                else if (Task == "Open Word" || Task == "Open word" || Task == "open word" || Task == "Open Wordpad" || Task == "Open wordpad" || Task == "open wordpad")
                {

                    cout << NextLine << NextLine << endl;

                    for (int i = 0; i <= 12; i++)
                    {
                        cout << Space;
                    }

                    cout << Space << " Opening Notepad  ";
                    Nextline();
                    Wordpad();
                }

                else if (Task == "Restart" || Task == "restart" || Task == "Please Restart" || Task == "please restart" || Task == "Please restart")
                {

                    cout << NextLine << NextLine << endl;

                    string phrase25 = " Restarting System.";
                    string command25 = "espeak \"" + phrase25 + "\"";
                    const char *charCommand25 = command25.c_str();
                    system(charCommand25);
                    Restart();
                }

                else if (Task == "Logout" || Task == "logout" || Task == "Please Logout" || Task == "please logout" || Task == "Please logout")
                {

                    cout << NextLine << NextLine << endl;
                    string phrase26 = " Log Out System.";
                    string command26 = "espeak \"" + phrase26 + "\"";
                    const char *charCommand26 = command26.c_str();
                    system(charCommand26);
                    LogOut();
                }

                else if (Task == "Shutdown" || Task == "shutdown" || Task == "Please Shutdown" || Task == "please shutdown" || Task == "Please shutdown")
                {

                    cout << NextLine << NextLine << endl;
                    string phrase27 = " Shutting Down ";
                    string command27 = "espeak \"" + phrase27 + "\"";
                    const char *charCommand27 = command27.c_str();
                    system(charCommand27);
                    ShutDown();
                }

                else if (Task == "Help" || Task == "help" || Task == "HELP")
                {

                    string phrase27 = " On construction ";
                    string command27 = "espeak \"" + phrase27 + "\"";
                    const char *charCommand27 = command27.c_str();
                    system(charCommand27);
                }

                else
                {

                    break;
                }

            } while (true);

        } while (true);

    } while (true);

    return 0;
}