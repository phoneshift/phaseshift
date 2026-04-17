// Copyright (C) 2024 Phoneshift contact@phoneshift.ing
//
// You may use, distribute and modify this code under the
// terms of the Apache 2.0 license.
// If you don't have a copy of this license, please visit:
//     https://github.com/phoneshift/phaseshift

#include <phaseshift/audio_block/ola.h>

#include <snitch/snitch.hpp>

TEST_CASE("audio_block_ola_builder_test", "[audio_block_ola_builder_test]") {
    phaseshift::dev::check_compilation_options();

    phaseshift::dev::audio_block_ola_builder_test();
}
