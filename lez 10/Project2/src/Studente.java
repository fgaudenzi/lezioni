
public class Studente {
		String nome;
		String cognome;
		String matricola;
		Voto[] voti;
		
		
		public void assegnaNome(String n,String c){
			nome=n;
			cognome=c;
		}
		public float calcolaMedia(){
			int somma=0;
			for(int i=0;i<voti.length;i++){
				somma+=voti[i].esame;
			}
			return (float)somma/voti.length;
			
		}
		
	
}
