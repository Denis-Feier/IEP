class Brawler {
    private:
        int hp;
        bool alive;
        int damage;
        int randomGen(int max, int min);
        Brawler(int max, int min);
    public:
        static Brawler* createBrawler(int max, int min);
        int getHP();
        int getDamage();
        bool isAlive();
};
