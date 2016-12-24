#ifndef CONVERTIR_H
#define CONVERTIR_H


class Convertir
{
    public:
        Convertir();//constructor de la clase
        virtual ~Convertir();//destructor de la clase
        //se definen los metodos publicos:
        float metrosPorSegundo();//metrosPorSegundo() de tipo float

        //se definen los metodos Setters y Getters del atributo velocidad
        void setVelocidad(float n);
        float getVelocidad();
    protected:

    private:
        //se definen el atributo privado:
        float velocidad;//velocidad de tipo float
};

#endif // CONVERTIR_H
