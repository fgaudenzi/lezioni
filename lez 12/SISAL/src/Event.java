import java.util.ArrayList;
import java.util.Date;
import java.util.UUID;


public class Event {
	private Date devento;
	private UUID id;
	private Actor winner;
	private ArrayList<Actor> actors;

	public UUID getId() {
		return id;
	}
	public Event(Date devento, ArrayList<Actor> actors) {
		this.devento = devento;
		this.id = UUID.randomUUID();
		this.winner = null;
		this.actors = actors;
	}
	public Date getDevento() {
		return devento;
	}
	public void setDevento(Date devento) {
		this.devento = devento;
	}
	public Actor getWinner() {
		return winner;
	}
	public void setWinner(Actor winner) {
		this.winner = winner;
	}
	public ArrayList<Actor> getActors() {
		return actors;
	}
	public void setActors(ArrayList<Actor> actors) {
		this.actors = actors;
	}
	
	
	
}
