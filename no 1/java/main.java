class Main{
	
public static void main(String[] args){
	Product pro;
	Memory me;
	Hardware ha;

	pro = new Product();
	pro.setPrice("500k");
	pro.setId_Product("A001");
	
	System.out.print("Harga        : ");
	System.out.println(pro.getPrice());
	System.out.print("Produk       : ");
	System.out.println(pro.getId_Product());

	me = new Memory();
	me.setFrequency("915");
	me.setMemorySize("4 GB");
	me.setSupportsCuda("yes");

	System.out.print("Frekuensi    : ");
	System.out.println(me.getFrequency());
	System.out.print("Besar Memori: ");
	System.out.println(me.getMemorySize());
	System.out.print("Support Cuda : ");
	System.out.println(me.getSupportsCuda());

	ha = new Hardware();
	ha.setBrand("Lenovo");
	ha.setModel("S111");

	System.out.print("Brand        : ");
	System.out.println(ha.getBrand());
	System.out.print("Model        : ");
	System.out.println(ha.getModel());

}
}
