#include <nuttx/config.h>
#include <stdio.h>

extern int gpio_init(void);
extern int sdk_camera_example_main(int argc, FAR char *argv[]);

//const char* sdk_camera_example_main_argv[2] = {"myfirstcameraapp", "0"};
const char* sdk_camera_example_main_argv[3] = {"myfirstcameraapp", "-jpg", "1"};

int main(int argc, FAR char *argv[])
{
  gpio_init();

  sdk_camera_example_main(2, sdk_camera_example_main_argv);

  return 0;
}
