#include "usb_names.h"

#define PRODUCT_NAME    {'W','i','l','d','C','a','t',' ','M','F','D'}
#define PRODUCT_NAME_LEN  11

#define MANUFACTURER_NAME    {'J','e','r','e','m','y',' ','K','e','l','l','o','g','g'}
#define MANUFACTURER_NAME_LEN  14

struct usb_string_descriptor_struct usb_string_product_name = {
  2 + PRODUCT_NAME_LEN * 2,
  3,
  PRODUCT_NAME
};

struct usb_string_descriptor_struct usb_string_manufacturer_name = {
  2 + MANUFACTURER_NAME_LEN * 2,
  3,
  MANUFACTURER_NAME
};
