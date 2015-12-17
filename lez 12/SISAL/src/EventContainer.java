import java.util.ArrayList;


public class EventContainer implements Container {
	private ArrayList<Event> evs;
	@Override
	public Iterator getIterator() {
		// TODO Auto-generated method stub
		return new EventIterator();
	}
	public EventContainer(){
		this.evs=new ArrayList<Event>();
	}
	public void addEvent(Event e){
		evs.add(e);
	}
	
	private class EventIterator implements Iterator{
		int index;
		public EventIterator(){
			index=0;
		}
		public boolean hasNext(){
			if(index<evs.size())
				return true;
			return false;
		}
		public Object next(){
			Event e=null;
			if(hasNext()){
			e=evs.get(index);
			index++;
			}
			return e;
		}
		
	}

}
