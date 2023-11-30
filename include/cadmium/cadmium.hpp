#pragma once
#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_CADMIUM
    #define CADMIUM_PUBLIC __declspec(dllexport)
  #else
    #define CADMIUM_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_CADMIUM
      #define CADMIUM_PUBLIC __attribute__ ((visibility ("default")))
  #else
      #define CADMIUM_PUBLIC
  #endif
#endif

namespace cadmium {

class CADMIUM_PUBLIC Cadmium {

public:
  Cadmium();
  int get_number() const;

private:

  int number;

};

}

