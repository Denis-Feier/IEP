class Brawler {

    // Item 22: Declare data members private .
    private:
        int hp;
        int damage;
        int randomGen(int max, int min);
        Brawler(int max, int min);
    public:
        static Brawler createBrawler(int max, int min);
        int getHP() const;
        int getDamage() const;
        bool isAlive() const;
        void setHP(int val);
};
