//Online Stock Span (this solution always give TLE in CPP)
class StockSpanner {
    
    Stack<Integer> prices;
    Stack<Integer> span;
    public StockSpanner() {
        span=new Stack<>();
        prices=new Stack<>();
    }

    public int next(int price) {
         int temp=1;
        while(!prices.isEmpty() && prices.peek()<= price) {
            prices.pop();
			temp=temp+span.pop();	
        }
				
		 prices.push(price);
         span.push(temp);
        return temp;
    }
    
}
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */
