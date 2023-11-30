# These arguments are only used to build the shared library
# not the executables that use the library.
lib_args = ['-DBUILDING_CADMIUM']

shlib = shared_library('cadmium', 'cadmium.cpp',
  install : true,
  cpp_args : lib_args,
  gnu_symbol_visibility : 'hidden',
  include_directories: include_directories('../include')
)