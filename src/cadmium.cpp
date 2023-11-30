#include <cadmium/cadmium.hpp>

namespace cadmium {

Cadmium::Cadmium() {
    number = 6;
}

int Cadmium::get_number() const {
  return number;
}

}
