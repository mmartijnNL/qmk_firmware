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

    rgb_matrix_set_color(5, rgb2.r, rgb2.g, rgb2.b);
    rgb_matrix_set_color(50, 255, 255, 255);


    return rgb_matrix_check_finished_leds(led_max);
}
#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif // ENABLE_RGB_MATRIX_CUSTOM_SOLID_PATTERN
