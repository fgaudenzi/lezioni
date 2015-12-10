import java.util.Random;


public class Avvio {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		/*Car car,bigCar;
		car=new Car("Lamborghini ADV","AV877VG","verde",2);
		//car=new Car("Lamborghini ADV","AG877VG","verde",2);
		bigCar=new Car("DUCATO","BC655TR","blu",9);
		bigCar.switchOn();*/
		Car bigCar=Car.buyCar("DUCATO","BC655TR","blu",9,28);
		if(bigCar==null){
			System.out.println("LIMITE RAGGIUNTO");
		}
		Car smallCar=Car.buyCar("PANDA", "FIRE666", "green", 4, 65);
		if(smallCar==null){
			System.out.println("LIMITE RAGGIUNTO");
		}
		Car prettyCar=Car.buyCar("SMARTfor2","HKitty","pink",2,18);
		if(prettyCar==null){
			System.out.println("LIMITE RAGGIUNTO");
		}
		Car speedyCar=Car.buyCar("Ferrari Dino", "MAR-F1", "RED", 2, 45);
		if(speedyCar==null){
			System.out.println("LIMITE RAGGIUNTO");
		}
		Car exceedCar=Car.buyCar("Ferrari Dino", "MAR-F1", "RED", 2, 45);
		if(exceedCar==null){
			System.out.println("LIMITE RAGGIUNTO - ultima car non inserita");
		}
		int destination=1000;
		Car car[]=new Car[4];
		car[0]=bigCar;
		car[1]=smallCar;
		car[2]=prettyCar;
		car[3]=speedyCar;	
		int distance[]=new int[4];
		for(int i=0;i<distance.length;i++){
			distance[i]=0;
		}
		Random rn=new Random();
		//boolean distReach=false;
		int ore=0;
		for(Car c:car){
			c.increaseSpeed(rn.nextInt(5));
		}
		while(distanceMax(distance)<destination){
			if(rn.nextBoolean()){
			car[rn.nextInt(4)].increaseSpeed(rn.nextInt(20));
			
			}
			ore++;
			for(int i=0;i<distance.length;i++){
				distance[i]+=car[i].getSpeed();
				System.out.println(car[i]+ " sta viaggiando a "+car[i].getSpeed()+"km/h ed ha percorso "+distance[i]+"km" );
			}
			System.out.println("cars have run for "+ore+" hours since now");	
		}
		int i=0;
		int max=distanceMax(distance);
		while(distance[i]>destination){
			i++;
		}
		System.out.println("RACE ENDS AFTER "+ore+" hours");
		System.out.println("THE WINNER IS "+car[i]);
		
		
	}

	private static int distanceMax(int[] distance) {
		int max=distance[0];
		for(int i=1;i<distance.length;i++){
			if(max<distance[i])
				max=distance[i];
		}
		return max;
	}

}
