
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        Convertir obj = new Convertir();
        float v;
        v = Float.parseFloat(JOptionPane.showInputDialog(null, "Digite velocidad: (km/h)"));
        obj.setVelocidad(v);
        JOptionPane.showMessageDialog(null, obj.getVelocidad() + "km/h =" + obj.metrosPorSegundo() + "m/s");
    }
}
