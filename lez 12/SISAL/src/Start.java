import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Date;
import java.util.Random;
import java.util.UUID;


public class Start {

	public static void main(String[] args) throws IOException {
		
		ArrayList<Actor> attori=new ArrayList<Actor>();
		Actor a1=new Actor("Inter FC",2.1);
		attori.add(a1);
		a1=new Actor("AC Milan", 4.2);
		attori.add(a1);
		Calcio partita1=new Calcio(new Date(), attori,"Meazza","Rizzoli");
		
		attori=new ArrayList<Actor>();
		a1=new Actor("Juventus",2.5);
		attori.add(a1);
		a1=new Actor("Torino", 3.2);
		attori.add(a1);
		Calcio partita2=new Calcio(new Date(), attori,"Juventus Stadium","Morganti");
		
		attori=new ArrayList<Actor>();
		a1=new Actor("Varenne",1.5);
		attori.add(a1);
		a1=new Actor("Furia", 4.2);
		attori.add(a1);
		a1=new Actor("Storna",12.5);
		attori.add(a1);
		a1=new Actor("Errante", 3.2);
		attori.add(a1);
		a1=new Actor("Ronzinante",4.5);
		attori.add(a1);
		a1=new Actor("Branzino", 20.2);
		attori.add(a1);
		Horses corsa1=new Horses(new Date(), attori,"Ippodromo Capannelle Roma","Tris ");
		EventContainer ec=new EventContainer();
		ArrayList<Event> evs=new ArrayList<Event>();
		evs.add(partita1);
		ec.addEvent(partita1);
		evs.add(partita2);
		ec.addEvent(partita2);
		evs.add(corsa1);
		ec.addEvent(corsa1);
		
		
		//stampa con container
		Iterator it=ec.getIterator();
		while(it.hasNext()){
			Event e=(Event) it.next();
		}
		
		
		
		
		for (Event e:evs){
			System.out.println("EVENTO ID:"+e.getId());
			System.out.println("DATA:"+e.getDevento());
			if(e.getClass()==Calcio.class){
				System.out.println("Partita di Calcio");
				Calcio partita=(Calcio) e;
				System.out.println("Stadio:"+partita.getStadio());
				System.out.println("Arbitro:"+partita.getArbitro());
				
				
			}
			if(e.getClass()==Horses.class){
				System.out.println("Corsa di Cavalli");
				Horses corsa=(Horses) e;
				System.out.println("Ippodromo:"+corsa.getIppodromo());
				System.out.println("Competizione:"+corsa.getCompetizione());

			}
			int i=1;
			System.out.println("Scommeti su");
			for(Actor a:e.getActors()){
				System.out.println(i+"- "+a.getName()+" vincita:"+a.getRateW());
				i++;
			}
			
		}
		
		//scommessa
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));	
		System.out.println("INSERIRE ID Evento");
		//input = System.console().readLine();
		String id;
			id = br.readLine();
		
		Event e;

		int i=0;
		while((i<evs.size())&&(evs.get(i).getId().compareTo(UUID.fromString(id))!=0)){
			i++;
		}
		e=evs.get(i);
		System.out.println("INSERIRE ID su cui scommettere");
		String actorIndex=br.readLine();
	
		System.out.println("INSERIRE cifra");
		String cifra=br.readLine();
		
		
		Bet scommessa=new Bet(e,Double.parseDouble(cifra),e.getActors().get(Integer.parseInt(actorIndex)-1));
		Random rn=new Random();
		int index=rn.nextInt(e.getActors().size());
		e.setWinner(e.getActors().get(index));
		
		if(scommessa.isWinner()){
			System.out.println("HAI VINTO "+scommessa.getMoney()+"$");
		}else{
			System.out.println("NON HAI VINTO");
		}
		
		
		
		
		
		

	}

}
