#include <iostream>
#include <string>
#include <vector>
#include <random>
using namespace std;

class vars
{
private:
    string keyWord;
    string guessWord;
    char l1, l2, l3, l4, l5;

public:
    void set(string word){
        keyWord = word;
        l1 = word[0];
        l2 = word[1];
        l3 = word[2];
        l4 = word[3];
        l5 = word[4];
    }

string kWord()
{
    random_device rd;
    uniform_int_distribution<int> dist(0, 488);
    int ind = dist(rd);
    string kWord[488] = {"about", "alert", "argue", "beach", "above", "alike", "arise", "began", "abuse", "alive", "array", "begin", "actor",
"allow", "aside", "begun", "acute", "alone", "asset", "being", "admit", "along", "audio", "below", "adopt", "alter", "audit", "bench",
"adult", "among", "avoid", "billy", "after", "anger", "award", "birth", "again", "angle", "aware", "black", "agent", "angry", "badly",
"blame", "agree", "apart", "baker", "blind", "ahead", "apple", "bases", "block", "alarm", "apply", "basic", "blood", "album", "arena",
"basis", "board", "boost", "buyer", "china", "cover", "booth", "cable", "chose", "craft", "bound", "calif", "civil", "crash", "brain",
"carry", "claim", "cream", "brand", "catch", "class", "crime", "bread", "cause", "clean", "cross", "break", "chain", "clear", "crowd",
"breed", "chair", "click", "crown", "brief", "chart", "clock", "curve", "bring", "chase", "close", "cycle", "broad", "cheap", "coach",
"daily", "broke", "check", "coast", "dance", "brown", "chest", "could", "dated", "build", "chief", "count", "dealt", "built", "child",
"court", "death", "debut", "entry", "forth", "group", "delay", "equal", "forty", "grown", "depth", "error", "forum", "guard", "doing",
"event", "found", "guess", "doubt", "every", "frame", "guest", "dozen", "exact", "frank", "guide", "draft", "exist", "fraud", "happy",
"drama", "extra", "fresh", "harry", "drawn", "faith", "front", "heart", "dream", "false", "fruit", "heavy", "dress", "fault", "fully",
"hence", "drill", "fibre", "funny", "night", "drink", "field", "giant", "horse", "drive", "fifth", "given", "hotel", "drove", "fifty",
"glass", "house", "dying", "fight", "globe", "human", "eager", "final", "going", "ideal", "early", "first", "grace", "image", "earth",
"fixed", "grade", "index", "eight", "flash", "grand", "inner", "elite", "fleet", "grant", "input", "empty", "floor", "grass", "issue",
"enemy", "fluid", "great", "irony", "enjoy", "focus", "green", "juice", "enter", "force", "gross", "joint", "judge", "metal", "media",
"newly", "known", "local", "might", "noise", "label", "logic", "minor", "north", "large", "loose", "minus", "noted", "laser", "lower",
"mixed", "novel", "later", "lucky", "model", "nurse", "laugh", "lunch", "money", "occur", "layer", "lying", "month", "ocean", "learn",
"magic", "moral", "offer", "lease", "major", "motor", "often", "least", "maker", "mount", "order", "leave", "march", "mouse", "other",
"legal", "music", "mouth", "ought", "level", "match", "movie", "paint", "light", "mayor", "needs", "paper", "limit", "meant", "never",
"party", "peace", "power", "radio", "round", "panel", "press", "raise", "route", "phase", "price", "range", "royal", "phone", "pride",
"rapid", "rural", "photo", "prime", "ratio", "scale", "piece", "print", "reach", "scene", "pilot", "prior", "ready", "scope", "pitch",
"prize", "refer", "score", "place", "proof", "right", "sense", "plain", "proud", "rival", "serve", "plane", "prove", "river", "seven",
"plant", "queen", "quick", "shall", "plate", "sixth", "stand", "shape", "point", "quiet", "roman", "share", "pound", "quite", "rough",
"sharp", "sheet", "spare", "style", "times", "shelf", "speak", "sugar", "tired", "shell", "speed", "suite", "title", "shift", "spend",
"super", "today", "shirt", "spent", "sweet", "topic", "shock", "split", "table", "total", "shoot", "spoke", "taken", "touch", "short",
"sport", "taste", "tough", "shown", "staff", "taxes", "tower", "sight", "stage", "teach", "track", "since", "stake", "teeth", "trade",
"sixty", "start", "texas", "treat", "sized", "state", "thank", "trend", "skill", "steam", "theft", "trial", "sleep", "steel", "their",
"tried", "slide", "stick", "theme", "tries", "small", "still", "there", "truck", "smart", "stock", "these", "truly", "smile", "stone",
"thick", "trust", "smith", "stood", "thing", "truth", "smoke", "store", "think", "twice", "solid", "storm", "third", "under", "solve",
"story", "those", "undue", "sorry", "strip", "three", "union", "sound", "stuck", "threw", "unity", "south", "study", "throw", "until",
"space", "stuff", "tight", "upper", "upset", "whole", "waste", "wound", "urban", "whose", "watch", "write", "usage", "woman", "water",
"wrong", "usual", "train", "wheel", "wrote", "valid", "world", "where", "yield", "value", "worry", "which", "young", "video", "worse",
"while", "youth", "virus", "worst", "white", "worth", "visit", "would", "vital", "voice"};


    return kWord[ind];

}

void check(string guessWord)
{   
    string prompt;
    
    for (int i = 0; i < 5; i++){
        bool inWord = false;
        bool isLetter = false;
        if (guessWord[i] == keyWord[i]){
            inWord = true;
            isLetter = true;
        }
        else if (guessWord[i] == l1 || guessWord[i]  == l2 || guessWord[i]  == l3 || guessWord[i]  == l4 || guessWord[i]  == l5){
            inWord = true;
        }

        if (inWord && isLetter){
            prompt = " is in the right place";
        }
        else if (inWord == true){
            prompt = " is in the word";
        }
        else {
            prompt = " is not in the word";
        }

        cout << guessWord[i] << prompt << endl;
    }
}

bool end(string guessWord, string keyWord)
{
    return guessWord == keyWord;
}

void gameOver(bool end, string kw)
{
      if (end){
        cout << "You Win!" << endl;
    }
    else {
        cout << "You Lose" << endl;
        cout << "The word was: " << kw << endl;
    }
}

};

void six()
{
    vars game;
    string keyWord;
    string guessWord;
    bool end = false;

    keyWord = game.kWord();
    game.set(keyWord);

    for (int i = 1; i <= 5; i++){
        cout << "Guess " << i << " :" << endl;
        cin >> guessWord ;
        game.check(guessWord);
        cout << endl;
        end = game.end(guessWord, keyWord);
        if (end){
            i = 6;
        }
    }

    game.gameOver(end, keyWord);
}

void setAmt()
{
    int z;
    cout << "enter number of attempts" << endl;
    cin >> z;

    vars game;
    string keyWord;
    string guessWord;
    bool end = false;

    keyWord = game.kWord();
    game.set(keyWord);

    for (int i = 1; i <= z; i++){
        cout << "Guess " << i << " :" << endl;
        cin >> guessWord ;
        game.check(guessWord);
        cout << endl;
        end = game.end(guessWord, keyWord);
        if (end){
            i = 6;
        }
    }

    game.gameOver(end, keyWord);
}

void unLim()
{
    vars game;
    string keyWord;
    string guessWord;
    bool end = false;

    keyWord = game.kWord();
    game.set(keyWord);

    for (int i = 1; !end; i++){
        cout << "Guess " << i << " :" << endl;
        cin >> guessWord ;
        game.check(guessWord);
        cout << endl;
        end = game.end(guessWord, keyWord);
    }

    game.gameOver(end, keyWord);
}

int main()
{
    char a;
    cout << "Choose an option" << endl;
    cout << "a: 6 attemps" << endl;
    cout << "b: set number of attemps" << endl;
    cout << "c: unlimited attemps" << endl;

    cin >> a;
    
    switch (a){
        case 'a':
        six();
        break;

        case 'b':
        setAmt();
        break;

        case 'c':
        unLim();
        break;

        default:
        six();
        break;
    }

    return 0;
}



/* old version with self input
void six()
{
    vars game;
    string keyWord;
    string guessWord;
    bool end = false;

    cout << "Enter a five letter word: " << endl; //change to skip this step
    cin >> keyWord;
    game.set(keyWord);

    for (int i = 1; i <= 5; i++){
        cout << "Guess " << i << " :" << endl;
        cin >> guessWord ;
        game.check(guessWord);
        cout << endl;
        end = game.end(guessWord, keyWord);
        if (end){
            i = 6;
        }
    }

    game.gameOver(end, keyWord);
}

void setAmt()
{
    int z;
    cout << "enter number of attempts" << endl;
    cin >> z;

    vars game;
    string keyWord;
    string guessWord;
    bool end = false;
    cout << "Enter a five letter word: " << endl; //change to skip this step
    cin >> keyWord;
    game.set(keyWord);
    system("CLS");

    for (int i = 1; i <= z; i++){
        cout << "Guess " << i << " :" << endl;
        cin >> guessWord ;
        game.check(guessWord);
        cout << endl;
        end = game.end(guessWord, keyWord);
        if (end){
            i = 6;
        }
    }

    game.gameOver(end, keyWord);
}

void unLim()
{
    vars game;
    string keyWord;
    string guessWord;
    bool end = false;
    cout << "Enter a five letter word: " << endl; //change to skip this step
    cin >> keyWord;
    game.set(keyWord);
    system("CLS");

    for (int i = 1; !end; i++){
        cout << "Guess " << i << " :" << endl;
        cin >> guessWord ;
        game.check(guessWord);
        cout << endl;
        end = game.end(guessWord, keyWord);
    }

    game.gameOver(end, keyWord);
}

*/