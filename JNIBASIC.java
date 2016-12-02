package com.geekscircle.jni;

public class JNIBASIC{
	
	static {
		System.loadLibrary("hello"); //
	}
	
	public static void main(String[] args){
		
		System.out.println("Basic JNI Example \n");
		helloWorld();
	}
	
	public static native void helloWorld();
}