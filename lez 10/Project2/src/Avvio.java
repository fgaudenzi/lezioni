import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Random;

public class Avvio {

	public static void main(String[] args) throws Exception{
		//Random rg;
		String[] materia;
		String input; 	
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));	
		System.out.println("INSERIRE IL NUMERO DI ESAMI");
		//input = System.console().readLine();
		input=br.readLine();
		materia=new String[Integer.parseInt(input)];
		for(int i=0;i<materia.length;i++){
			System.out.println("INSERIRE Nome Materia");
			//input = System.console().readLine();
			input=br.readLine();
			boolean found=false;
			for(int j=0;j<i;j++){
				if(materia[j].equalsIgnoreCase(input)){
					found=true;
					break;
				}
			}
			if(found){
				System.out.println("ESAME GIA' INSERITO");
				i--;
			}else{

				materia[i]=input;
			}
		}
		System.out.println("ESAMI DISPONIBILI");
		for(int i=0;i<materia.length;i++){
			System.out.println(materia[i]);
		}
		System.out.println("INSERIRE IL NUMERO DI STUDENTI");
		//input = System.console().readLine();
		input=br.readLine();
		int nstudenti;
		nstudenti=Integer.parseInt(input);
		Studente[] students=new Studente[nstudenti];
		for(int i=0;i<students.length;i++){
			students[i]=new Studente();
			System.out.println("INSERIRE IL NOME E COGNOME");
			input =br.readLine();
			String[] result=input.split(" ");
			String nome=result[0];
			String cognome = result[1];
			students[i].assegnaNome(nome, cognome);
			students[i].voti=new Voto[materia.length];
			for(int k=0;k<materia.length;k++){
				students[i].voti[k]=new Voto();
				students[i].voti[k].materia=materia[k];
			}
		}

		//chiamamo random uno studente per una materia random
		Random rn=new Random();
		int count=0;
		int tot=(students.length*materia.length);
		while(count<tot){
			int toInterview=rn.nextInt(students.length);
			int subject=rn.nextInt(materia.length);
			if(students[toInterview].voti[subject].esame==-1){

				System.out.println("OGGI INTERROGHIAMO...");
				int sus=rn.nextInt(5);
				for(int k=0;k<sus;k++){
					Thread.sleep(100);
					System.out.println("...");
				}
				System.out.println(students[toInterview].nome+" "+students[toInterview].cognome+ " in cosa vorresti essere interrogato?");
				input=br.readLine();
				if(input.equalsIgnoreCase(materia[subject])){
					System.out.println("ti è andata bene oggi");
				}else{
					System.out.println("peccato è uscita:"+materia[subject]);
				}
				count++;
			}else{
				System.out.println(students[toInterview].cognome+" hai già dato, resta a posto");
			}
		}

		ArrayList<Studente> bestStudente=new ArrayList<Studente>();
		float max=students[0].calcolaMedia();
		for(int i=1;i<students.length;i++){
			if(max<students[i].calcolaMedia()){
				max=students[i].calcolaMedia();
			}
		}

		for(int i=1;i<students.length;i++){
			if(max==students[i].calcolaMedia()){
				bestStudente.add(students[i]);
			}
		}
		System.out.println("I migliori studenti sono:");
		for(int i=0;i<bestStudente.size();i++){
			Studente s=bestStudente.get(i);
			
			System.out.println(s.nome+" "+s.cognome);
		}
	





}


}
