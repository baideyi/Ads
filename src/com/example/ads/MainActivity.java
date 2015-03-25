package com.example.ads;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;
import android.view.Menu;
import android.view.MenuItem;

import com.ndk.test.*;

public class MainActivity extends Activity {

	static {
		System.loadLibrary("TestNdk");
	}
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		
		String str = JniClient.AddStr("dfslj", "dfklsjdµÄ");
		
		Log.e("err", str);
		System.out.println(str);
		
		setContentView(R.layout.activity_main);
	}
	
	
}
