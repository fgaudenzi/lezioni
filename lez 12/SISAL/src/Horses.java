import java.util.ArrayList;
import java.util.Date;


public class Horses extends Event {
	private String ippodromo;
	private String competizione;
	public Horses(Date devento, ArrayList<Actor> actors,String competizione,String ippodromo) {
		super(devento, actors);
		this.competizione=competizione;
		this.ippodromo=ippodromo;
		
		
	}
	public String getIppodromo() {
		return ippodromo;
	}
	public void setIppodromo(String ippodromo) {
		this.ippodromo = ippodromo;
	}
	public String getCompetizione() {
		return competizione;
	}
	public void setCompetizione(String competizione) {
		this.competizione = competizione;
	}
	
	
	
	
}
