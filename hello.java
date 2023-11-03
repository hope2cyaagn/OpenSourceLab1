
// 类定义和main函数测试&#xff0c;这里main方法暂时取消注释
public class Calculator {

	public int add(int x, int y) { //加法
		return x + y;
	}

	public int sub(int x, int y) { //减法
		return x - y;
	}

	public int mul(int x, int y) { //乘法
		return x * y;
	}

	public int div(int x, int y) { //除法
		return x / y;
	}

	public int div2(int x, int y) { //除法 做了异常判断
		try {
			int z = x / y;
			z ++;
		} catch (Exception e) {
			e.printStackTrace();
		}
		return x / y;
	}

	public void unCompleted(int x, int y) { //未完成的模块:例如平方、开方等等
		//TODO
	}

	public void sayHello() {
		return "hello B1";
	}

	public void sayHello1() {
		return "hello world";
	}

	//    public static void main(String[] args) { // 传统代码测试
	//        int a = 8;
	//        int b = 2;
	//        Calculator calculator = new Calculator();
	//        if (calculator.add(a, b) == 10) {
	//              System.out.println("Test passed!");
	//               } else {
	//              System.out.println("Test failed!");
	//        }
	//        if (calculator.sub(a, b) == 6) {
	//              System.out.println("Test passed!");
	//               } else {
	//              System.out.println("Test failed!");
	//        }
	//        if (calculator.mul(a, b) == 16) {
	//              System.out.println("Test passed!");
	//               } else {
	//              System.out.println("Test failed!");
	//        }
	//        if (calculator.div(a, b) == 4) {
	//              System.out.println("Test passed!");
	//               } else {
	//              System.out.println("Test failed!");
	//        }
	//        System.out.println(calculator.div2(a,0));
	//    }
}