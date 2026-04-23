#pragma once
class Rectangle{
    private:
         float length;
         float width;

    public:
        Rectangle();
         ~Rectangle();
    
        void setlength(float l);
        void setwidth(float w);

        float getlength()const;
        float getwidth()const;
        float getArea()const;
        
};