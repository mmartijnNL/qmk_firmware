#ifdef ENABLE_RGB_MATRIX_CUSTOM_SOLID_PATTERN
RGB_MATRIX_EFFECT(CUSTOM_SOLID_PATTERN)
#    ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static HSV BAND_SPIRAL_SAT_math(HSV hsv, int16_t dx, int16_t dy, uint8_t dist, uint8_t time) {
    hsv.s = scale8(hsv.s + dist - time - atan2_8(dy, dx), hsv.s);
    return hsv;
}

bool CUSTOM_SOLID_PATTERN(effect_params_t* params) {

    return effect_runner_dx_dy_dist(params, &BAND_SPIRAL_SAT_math);

    // Get the base color
    HSV hsv1 = rgb_matrix_config.hsv;
    RGB rgb1 = rgb_matrix_hsv_to_rgb(hsv1);
    // Get the highlight color
    HSV hsv2;
    hsv2.h = hsv1.h-85;
    hsv2.s = hsv1.s;
    hsv2.v = hsv1.v;
    RGB rgb2 = rgb_matrix_hsv_to_rgb(hsv2);
    rgb2.r = 0;
    rgb2.g = 200;
    rgb2.b = 255;

    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        switch (i)
        {
            case 5:     // F5
            case 6:     // F6
            case 42:    // F7
            case 43:    // F8
            case 18:    // W
            case 24:    // A
            case 25:    // S
            case 26:    // D
                rgb_matrix_set_color(i, rgb2.r, rgb2.g, rgb2.b);
                break;
            default:
                rgb_matrix_set_color(i, rgb1.r, rgb1.g, rgb1.b);
        }
    }

    return rgb_matrix_check_finished_leds(led_max);
}
#    endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
#endif // ENABLE_RGB_MATRIX_CUSTOM_SOLID_PATTERN
