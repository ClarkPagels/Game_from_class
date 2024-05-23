#ifndef COMBAT_H
#define COMBAT_H


class combat
{
    public:
        combat();
        virtual ~combat();
        void calculator();
        int resultShower();

        void print() const;
    protected:

    private:
        int enemy = 0;
        int character = 0;
        friend  character_creation::getAge();
        friend  character_creation::getHeight();
        int rand;
        int nRand;
};

#endif // COMBAT_H
