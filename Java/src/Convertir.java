public class Convertir
{
    private float velocidad;
    
    public Convertir()
    {
        this.velocidad = 0;
    }
    
    public float metrosPorSegundo()
    {
        return (velocidad * 1000) / 3600;
    }
    
    public void setVelocidad(float n)
    {
        this.velocidad = n;
    }
    
    public float getVelocidad()
    {
        return velocidad;
    }
}