#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "exploit.h"
@interface ViewController : UIViewController <CBCentralManagerDelegate>
@property SandboxExploit* sbexploit;
@property (weak, nonatomic) IBOutlet UITextField *numofports;
@property BOOL bluetoothEnabled;
@property CBCentralManager* bluetoothManager;
@end
