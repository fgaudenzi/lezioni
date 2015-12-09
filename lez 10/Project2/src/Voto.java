
public class Voto {

		int esame=-1;
		String materia;
		
		public boolean assegnaVoto(int v){
			if((v>17)||(v<31)){
				esame=v;
				return true;
			}
			return false;
		}
}
