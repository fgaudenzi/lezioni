import java.util.ArrayList;
import java.util.Date;

public class Calcio extends Event {
	private String stadio;
	private String arbitro;

	
	public Calcio(Date devento, ArrayList<Actor> actors,String stadio,String arbitro) {
		super(devento, actors);
		this.arbitro=arbitro;
		this.stadio=stadio;
	}

	public String getStadio() {
		return stadio;
	}

	public void setStadio(String stadio) {
		this.stadio = stadio;
	}

	public String getArbitro() {
		return arbitro;
	}

	public void setArbitro(String arbitro) {
		this.arbitro = arbitro;
	}

}
