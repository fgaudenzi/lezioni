
public class Car {
	private static final int YOUNG_SPEED=75,YOUNG_AGE=21,MAX_CAR=4;
	private static int numCar=0;
	private String model,label,color;
	private int fuel=0;
	private int speed=0,passengers=0,maxPassengers;
	private boolean power=false;
	private boolean young=false;
	
	public static Car buyCar(String model, String label, String color,int maxP,int age){
		if(Car.numCar<Car.MAX_CAR){
		Car c=new Car(model,label,color,maxP,age);
		numCar++;
		return c;
		}
		return null;
	}
	
	
	private Car(String model, String label, String color,int maxP) {
	
		this.model = model;
		this.label = label;
		this.color = color;
		this.maxPassengers=maxP;
	}
	
	private Car(String model, String label, String color,int maxP,int age) {
		
		this.model = model;
		this.label = label;
		this.color = color;
		this.maxPassengers=maxP;
		if(age<=YOUNG_AGE){
			this.young=true;
		}
	}
	
	private boolean youngController(){
		if(young){
		if(this.speed>YOUNG_SPEED){
			this.speed=YOUNG_SPEED;
			return false;
		}
		}
		return true;
	}
	public boolean switchOn(){
		power=true;
		return power;
		
	}
	
	public boolean switchOn(int age){
		if(age<=YOUNG_AGE){
			this.young=true;
		}else{
			young=false;
		}
		power=true;
		return power;
		
	}
	
	public boolean switchOff(){
		this.power=false;
		return power;
	}
	
	public int increaseSpeed(int delta){
		speed+=delta;
		youngController();
		return speed;
	}
	
	public int decreaseSpeed(int delta){
		this.speed-=delta;
		return speed;
	}
	
	public boolean addPassenger(int p){
		int passengers;
		passengers=this.passengers+p;
		if(passengers>maxPassengers){
			return false;
		}else{
			this.passengers=passengers;
			return true;
		}
		
	}
	public boolean removePassenger(int p){
		int passengers;
		passengers=this.passengers-p;
		if(passengers<0){
			this.passengers=0;
		}else{
			this.passengers=passengers;
			
		}
		return true;
	}
	public int getSpeed(){
		return speed;
	}
	public String toString(){
		return "\n model:"+this.model+"\n label:"+this.label;
	}
	
}
