
public class FactoryCar {

	private static Car c;
	
	public static Car getCar(){
		if(c==null){
		 c=Car.buyCar("lamb","ax56fv","green",5,32);
		
		}
		return c;
	}
}
