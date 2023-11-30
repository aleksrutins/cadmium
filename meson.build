project('cadmium', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

subdir('src')

subdir('test')

# Make this library usable as a Meson subproject.
cadmium_dep = declare_dependency(
  include_directories: include_directories('include'),
  link_with : shlib)

# Make this library usable from the system's
# package manager.
install_subdir('include/cadmium', install_dir: 'include')

pkg_mod = import('pkgconfig')
pkg_mod.generate(
  name : 'cadmium',
  filebase : 'cadmium',
  description : 'Meson sample project.',
  subdirs : 'cadmium',
  libraries : shlib,
  version : '0.1',
)
