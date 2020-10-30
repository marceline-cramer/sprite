project('tutorial', 'cpp')

src = [
  'src/core/Module.cc',
  'src/core/State.cc',
  'src/core/Structure.cc'
]

inc = include_directories(
    ['src']
)

dependencies = [
  dependency('llvm')
]

lib = static_library(
  'sprite',
  src,
  include_directories: inc,
  dependencies: dependencies
)

executable('sprite', 'src/main.cc', link_with: lib)
