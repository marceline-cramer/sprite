project('tutorial', 'cpp')

src = [
  'src/core/SpriteState.cc'
]

inc = include_directories(
    ['src']
)

lib = static_library(
  'sprite',
  src,
  include_directories: inc
)

executable('sprite', 'src/main.cc', link_with: lib)
