
public class Studente {
		private String nome;
		private String cognome;
		private String matricola;
		private Voto[] voti;
		public static String uni="UNIMI";
		public static int numStud=0;
		
		
		public static void stampaNumeroStudenti(){
			System.out.println("Il numero di studenti è"+Studente.numStud);
			
		}
		public Studente(String nome,String cognome){
			this.nome=nome;
			this.cognome=cognome;
			Studente.numStud++;
		}
		public Studente(String nome,String cognome,String matricola){
			this.nome=nome;
			this.cognome=cognome;
			this.matricola=matricola;
		}
		
		
		
		public String getNome() {
			return nome;
		}
		public void setNome(String nome) {
			this.nome = nome;
		}
		public String getCognome() {
			return cognome;
		}
		public void setCognome(String cognome) {
			this.cognome = cognome;
		}
		public String getMatricola() {
			return matricola;
		}
		public void setMatricola(String matricola) {
			this.matricola = matricola;
		}
		public Voto[] getVoti() {
			return voti;
		}
		public void setVoti(Voto[] voti) {
			this.voti = voti;
		}
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
		
		public static float cacolaMediaStud(Studente[] studs){
			float somma=0;
			for(Studente s:studs){
				somma+=s.calcolaMedia();
			}
			
			return (float) somma/studs.length;
		}
		
	
}
