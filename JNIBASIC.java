package com.geekscircle.jni;

public class JNIBASIC{
	
	static {
		System.loadLibrary("hello"); //
	}
	
	public static void main(String[] args){
		
		System.out.println("Basic JNI Example with arguments\n");
		helloWorld(25, 30);
	}
	
	public static native void helloWorld(int a, int b);
}