
//classMyFrame

//Acest import vă oferă acces la pachetul AWT (Abstract Window Toolkit), 
//care conține clase pentru crearea și gestionarea elementelor interfeței grafice.
import java.awt.*;

//Acest import vă permite să utilizați clasele din pachetul java.text, care oferă funcționalități pentru
//formatarea și parsarea textului în diverse formate, inclusiv formatarea datelor și timpului.
import java.text.*;

//Acest import vă permite să utilizați clasele din pachetul java.util, care conține diverse clase utilitare, cum ar fi 
//cele pentru gestionarea datelor și timpului, pentru crearea și manipularea colecțiilor de obiecte etc.
import java.util.*;

// Acest import vă oferă acces la pachetul javax.swing, care este folosit pentru crearea interfețelor grafice
//cu ajutorul componentelor Swing. Componentele Swing oferă o abordare mai modernă și flexibilă pentru crearea 
//interfețelor grafice comparativ cu cele din AWT.
import javax.swing.*;

public class MyFrame extends JFrame {

	Calendar calendar;

	SimpleDateFormat timeFormat = new SimpleDateFormat("HH:mm:ss a");
	SimpleDateFormat dayFormat = new SimpleDateFormat("MMMM");
	SimpleDateFormat dateFormat = new SimpleDateFormat("EEEE, d MMM yyyy");

	JLabel timeLabel = new JLabel();
	JLabel dayLabel = new JLabel();
	JLabel dateLabel = new JLabel();

	MyFrame() {
		
		
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);// X-ul de inchidere
		this.setTitle("My Clock Program"); // Titlul
		this.setLayout(new FlowLayout()); // this se refera la instanța curenta a clasei JFrame.
	                                     //setLayout(new FlowLayout()) setează managerul de aranjare al ferestrei curente la un nou obiect FlowLayout.
		this.setSize(350, 250); // Dimensiunea ceasului
		this.setResizable(false); // Blochează redimensionarea ferestrei.
		this.setVisible(true); // vizibilitate
		this.setAlwaysOnTop(true); // Ceasul v-a sta tot timpul deasupra
		
		// Setarea aspectului etichetei pentru timp
		timeLabel.setFont(new Font("Verdana", Font.PLAIN, 50));
		timeLabel.setForeground(new Color(255, 255, 255));
		timeLabel.setBackground(new Color(76, 0, 153));
		timeLabel.setOpaque(true);

		// Setarea aspectului etichetelor pentru zi și dată
		dayLabel.setFont(new Font("Ink Free", Font.PLAIN, 35));
		dateLabel.setFont(new Font("Ink Free", Font.PLAIN, 25));
		
		// Adăugarea etichetelor la fereastră
		this.add(timeLabel);
		this.add(dayLabel);
		this.add(dateLabel);
		this.setVisible(true);

		// Inițializarea ceasului
		setTime();
	}

	public void setTime() {

		String time;
		String day;
		String date;

		while (true) {
			time = timeFormat.format(Calendar.getInstance().getTime());
			timeLabel.setText(time);

			day = dayFormat.format(Calendar.getInstance().getTime());
			dayLabel.setText(day);

			date = dateFormat.format(Calendar.getInstance().getTime());
			dateLabel.setText(date);

			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				
				e.printStackTrace();
			}
		}
	}
}
