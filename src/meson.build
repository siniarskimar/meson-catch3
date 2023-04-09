
exe_lib = static_library('experiment_lib',
  'func.cpp',
  include_directories: src_inc
)

executable('experiment',
  'main.cpp',
  include_directories: src_inc,
  link_with: exe_lib
)

