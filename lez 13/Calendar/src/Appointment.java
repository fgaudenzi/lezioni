import java.util.GregorianCalendar;
import java.util.List;


public class Appointment {
	Location location;
	String title;
	List<Contact> contacts;
	GregorianCalendar time;
	public Appointment(Location location, String title, GregorianCalendar time) {
		super();
		this.location = location;
		this.title = title;
		this.time = time;
	}
	
	
	
}
