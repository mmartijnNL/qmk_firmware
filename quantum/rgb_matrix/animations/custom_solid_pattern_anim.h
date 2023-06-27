#ifdef ENABLE_RGB_MATRIX_CUSTOM_SOLID_PATTERN
RGB_MATRIX_EFFECT(CUSTOM_SOLID_PATTERN)
#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool CUSTOM_SOLID_PATTERN(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    RGB rgb1 = rgb_matrix_hsv_to_rgb(rgb_matrix_config.hsv);
    RGB rgb2;
    rgb2.r = 0;
    rgb2.g = 200;
    rgb2.b = 255;

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        rgb_matrix_set_color(i, rgb1.r, rgb1.g, rgb1.b);
    }

    // F5 - F6
    rgb_matrix_set_color(5, rgb2.r, rgb2.g, rgb2.b);
    rgb_matrix_set_color(6, rgb2.r, rgb2.g, rgb2.b);

    // F7 - F8
    rgb_matrix_set_color(42, rgb2.r, rgb2.g, rgb2.b);
    rgb_matrix_set_color(43, rgb2.r, rgb2.g, rgb2.b);

    // W
    rgb_matrix_set_color(18, rgb2.r, rgb2.g, rgb2.b);
    // A S D ?
    rgb_matrix_set_color(24, rgb2.r, rgb2.g, rgb2.b);
    rgb_matrix_set_color(25, rgb2.r, rgb2.g, rgb2.b);
    rgb_matrix_set_color(26, rgb2.r, rgb2.g, rgb2.b);


    // < - ?
    rgb_matrix_set_color(77, 255, 0, 0);
    rgb_matrix_set_color(78, 255, 0, 0);
    rgb_matrix_set_color(79, 255, 0, 0);
    // right windows
    rgb_matrix_set_color(86, 255, 0, 0);

    // 6 - 2 ?
    // rgb_matrix_set_color(10, rgb2.r, rgb2.g, rgb2.b);
    // rgb_matrix_set_color(11, rgb2.r, rgb2.g, rgb2.b);
    // rgb_matrix_set_color(12, rgb2.r, rgb2.g, rgb2.b);
    // rgb_matrix_set_color(13, rgb2.r, rgb2.g, rgb2.b);
    // rgb_matrix_set_color(14, rgb2.r, rgb2.g, rgb2.b);

    // M2 or down ?
    // rgb_matrix_set_color(15, 255, 255, 255);


    // R or right space?
    // rgb_matrix_set_color(20, 255, 0, 0);

    // left shift or '"
    // rgb_matrix_set_color(30, 0, 255, 0);

    // FN or O ?
    //rgb_matrix_set_color(40, 0, 0, 255);

    // I
    // rgb_matrix_set_color(60, 0, 255, 255);

    // right shift
    // rgb_matrix_set_color(80, 255, 255, 255);

    // L
    // rgb_matrix_set_color(70, 255, 0, 255);

    return rgb_matrix_check_finished_leds(led_max);
}
#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif // ENABLE_RGB_MATRIX_CUSTOM_SOLID_PATTERN
