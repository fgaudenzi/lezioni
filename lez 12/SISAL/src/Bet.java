
public class Bet {
	private Event event;
	private double amount;
	private Actor winner;
	public Bet(Event event, double amount,Actor winner) {
		this.event = event;
		this.amount = amount;
		this.winner=winner;
	}

	public boolean isWinner(){
		if(event.getWinner().equals(this.winner)){
			return true;
		}
		
		return false;
	}
	
	public double getMoney(){
		if(isWinner()){
			return amount*winner.getRateW();
		}
		return 0;
	}
	
	
}
