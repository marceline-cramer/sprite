/**
 * @file SpriteState.cc
 * @author Marceline Cramer (cramermarceline@gmail.com)
 * @brief Contains the global state for a Sprite instance.
 * @date 2020-10-29
 *
 * @copyright Copyright (c) 2020 Marceline Cramer
 *
 * This file is part of Sprite.
 *
 * Sprite is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Sprite is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Sprite.  If not, see <https: //www.gnu.org/licenses/>.
 *
 */

#include "core/SpriteState.h"

#include <iostream>

namespace sprite {

SpriteState::SpriteState() {
    std::cout << "Hello Sprite!" << std::endl;
}

}  // namespace sprite
