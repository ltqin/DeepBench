// Vector saves w, h, c, n, k, filter_w(s), filter_h(r), pad_w, pad_h, wstride, hstride
std::vector<std::tuple<unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int>>
    resnet50_inception4_b128 = {
        std::make_tuple(17, 17, 1024, 128, 128, 1, 1, 0, 0, 1, 1),
        std::make_tuple(17, 17, 1024, 128, 192, 1, 1, 0, 0, 1, 1),
        std::make_tuple(17, 17, 1024, 128, 256, 1, 1, 0, 0, 1, 1),
        std::make_tuple(17, 17, 1024, 128, 384, 1, 1, 0, 0, 1, 1),
        std::make_tuple(8, 8, 1536, 128, 256, 1, 1, 0, 0, 1, 1),
        std::make_tuple(8, 8, 1536, 128, 384, 1, 1, 0, 0, 1, 1),
        std::make_tuple(73, 73, 160, 128, 64, 1, 1, 0, 0, 1, 1),
        std::make_tuple(17, 17, 192, 128, 192, 1, 7, 0, 3, 1, 1),
        std::make_tuple(17, 17, 192, 128, 192, 3, 3, 0, 0, 2, 2),
        std::make_tuple(17, 17, 192, 128, 224, 1, 7, 0, 3, 1, 1),
        std::make_tuple(17, 17, 192, 128, 224, 7, 1, 3, 0, 1, 1),
        std::make_tuple(35, 35, 192, 128, 224, 3, 3, 1, 1, 1, 1),
        std::make_tuple(71, 71, 192, 128, 192, 3, 3, 0, 0, 2, 2),
        std::make_tuple(17, 17, 224, 128, 224, 1, 7, 0, 3, 1, 1),
        std::make_tuple(17, 17, 224, 128, 256, 7, 1, 3, 0, 1, 1),
        std::make_tuple(35, 35, 224, 128, 256, 3, 3, 0, 0, 2, 2),
        std::make_tuple(17, 17, 256, 128, 256, 1, 7, 0, 3, 1, 1),
        std::make_tuple(17, 17, 256, 128, 320, 7, 1, 3, 0, 1, 1),
        std::make_tuple(299, 299, 3, 128, 32, 3, 3, 0, 0, 2, 2),
        std::make_tuple(147, 147, 32, 128, 64, 3, 3, 1, 1, 1, 1),
        std::make_tuple(149, 149, 32, 128, 32, 3, 3, 0, 0, 1, 1),
        std::make_tuple(17, 17, 320, 128, 320, 3, 3, 0, 0, 2, 2),
        std::make_tuple(35, 35, 384, 128, 192, 1, 1, 0, 0, 1, 1),
        std::make_tuple(35, 35, 384, 128, 384, 3, 3, 0, 0, 2, 2),
        std::make_tuple(35, 35, 384, 128, 64, 1, 1, 0, 0, 1, 1),
        std::make_tuple(35, 35, 384, 128, 96, 1, 1, 0, 0, 1, 1),
        std::make_tuple(8, 8, 384, 128, 256, 1, 3, 0, 1, 1, 1),
        std::make_tuple(8, 8, 384, 128, 256, 3, 1, 1, 0, 1, 1),
        std::make_tuple(8, 8, 384, 128, 448, 1, 3, 0, 1, 1, 1),
        std::make_tuple(8, 8, 448, 128, 512, 3, 1, 1, 0, 1, 1),
        std::make_tuple(8, 8, 512, 128, 256, 1, 3, 0, 1, 1, 1),
        std::make_tuple(8, 8, 512, 128, 256, 3, 1, 1, 0, 1, 1),
        std::make_tuple(147, 147, 64, 128, 96, 3, 3, 0, 0, 2, 2),
        std::make_tuple(35, 35, 64, 128, 96, 3, 3, 1, 1, 1, 1),
        std::make_tuple(73, 73, 64, 128, 64, 1, 7, 0, 3, 1, 1),
        std::make_tuple(73, 73, 64, 128, 64, 7, 1, 3, 0, 1, 1),
        std::make_tuple(73, 73, 64, 128, 96, 3, 3, 0, 0, 1, 1),
        std::make_tuple(35, 35, 96, 128, 96, 3, 3, 1, 1, 1, 1),
        std::make_tuple(14, 14, 1024, 128, 2048, 1, 1, 0, 0, 2, 2),
        std::make_tuple(14, 14, 1024, 128, 256, 1, 1, 0, 0, 1, 1),
        std::make_tuple(14, 14, 1024, 128, 512, 1, 1, 0, 0, 2, 2),
        std::make_tuple(28, 28, 128, 128, 128, 3, 3, 1, 1, 1, 1),
        std::make_tuple(28, 28, 128, 128, 512, 1, 1, 0, 0, 1, 1),
        std::make_tuple(7, 7, 2048, 128, 512, 1, 1, 0, 0, 1, 1),
        std::make_tuple(14, 14, 256, 128, 1024, 1, 1, 0, 0, 1, 1),
        std::make_tuple(14, 14, 256, 128, 256, 3, 3, 1, 1, 1, 1),
        std::make_tuple(56, 56, 256, 128, 128, 1, 1, 0, 0, 2, 2),
        std::make_tuple(56, 56, 256, 128, 512, 1, 1, 0, 0, 2, 2),
        std::make_tuple(56, 56, 256, 128, 64, 1, 1, 0, 0, 1, 1),
        std::make_tuple(230, 230, 3, 128, 64, 7, 7, 0, 0, 2, 2),
        std::make_tuple(28, 28, 512, 128, 1024, 1, 1, 0, 0, 2, 2),
        std::make_tuple(28, 28, 512, 128, 128, 1, 1, 0, 0, 1, 1),
        std::make_tuple(28, 28, 512, 128, 256, 1, 1, 0, 0, 2, 2),
        std::make_tuple(7, 7, 512, 128, 2048, 1, 1, 0, 0, 1, 1),
        std::make_tuple(7, 7, 512, 128, 512, 3, 3, 1, 1, 1, 1),
        std::make_tuple(56, 56, 64, 128, 256, 1, 1, 0, 0, 1, 1),
        std::make_tuple(56, 56, 64, 128, 64, 1, 1, 0, 0, 1, 1),
        std::make_tuple(56, 56, 64, 128, 64, 3, 3, 1, 1, 1, 1)};

std::vector<std::tuple<unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int>>
    resnet101_b128 = {
        std::make_tuple(14, 14, 1024, 128, 1024, 1, 1, 0, 0, 1, 1),
        std::make_tuple(14, 14, 1024, 128, 1024, 3, 3, 1, 1, 1, 1),
        std::make_tuple(14, 14, 1024, 128, 2048, 1, 1, 0, 0, 1, 1),
        std::make_tuple(14, 14, 1024, 128, 2048, 1, 1, 0, 0, 2, 2),
        std::make_tuple(28, 28, 1024, 128, 1024, 3, 3, 1, 1, 2, 2),
        std::make_tuple(14, 14, 2048, 128, 2048, 3, 3, 1, 1, 2, 2),
        std::make_tuple(7, 7, 2048, 128, 2048, 1, 1, 0, 0, 1, 1),
        std::make_tuple(7, 7, 2048, 128, 2048, 3, 3, 1, 1, 1, 1),
        std::make_tuple(56, 56, 256, 128, 256, 1, 1, 0, 0, 1, 1),
        std::make_tuple(56, 56, 256, 128, 256, 3, 3, 1, 1, 1, 1),
        std::make_tuple(56, 56, 256, 128, 512, 1, 1, 0, 0, 1, 1),
        std::make_tuple(56, 56, 256, 128, 512, 1, 1, 0, 0, 2, 2),
        std::make_tuple(224, 224, 3, 128, 64, 7, 7, 3, 3, 2, 2),
        std::make_tuple(28, 28, 512, 128, 1024, 1, 1, 0, 0, 1, 1),
        std::make_tuple(28, 28, 512, 128, 1024, 1, 1, 0, 0, 2, 2),
        std::make_tuple(28, 28, 512, 128, 512, 1, 1, 0, 0, 1, 1),
        std::make_tuple(28, 28, 512, 128, 512, 3, 3, 1, 1, 1, 1),
        std::make_tuple(56, 56, 512, 128, 512, 3, 3, 1, 1, 2, 2),
        std::make_tuple(56, 56, 64, 128, 256, 1, 1, 0, 0, 1, 1)};

std::vector<std::tuple<unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int, unsigned int,
                       unsigned int, unsigned int, unsigned int>>
    resnet50_b128 = {std::make_tuple(14, 14, 1024, 128, 2048, 1, 1, 0, 0, 2, 2),
                     std::make_tuple(14, 14, 1024, 128, 256, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(14, 14, 1024, 128, 512, 1, 1, 0, 0, 2, 2),
                     std::make_tuple(28, 28, 128, 128, 128, 3, 3, 1, 1, 1, 1),
                     std::make_tuple(28, 28, 128, 128, 512, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(7, 7, 2048, 128, 512, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(14, 14, 256, 128, 1024, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(14, 14, 256, 128, 256, 3, 3, 1, 1, 1, 1),
                     std::make_tuple(56, 56, 256, 128, 128, 1, 1, 0, 0, 2, 2),
                     std::make_tuple(56, 56, 256, 128, 512, 1, 1, 0, 0, 2, 2),
                     std::make_tuple(56, 56, 256, 128, 64, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(230, 230, 3, 128, 64, 7, 7, 0, 0, 2, 2),
                     std::make_tuple(28, 28, 512, 128, 1024, 1, 1, 0, 0, 2, 2),
                     std::make_tuple(28, 28, 512, 128, 128, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(28, 28, 512, 128, 256, 1, 1, 0, 0, 2, 2),
                     std::make_tuple(7, 7, 512, 128, 2048, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(7, 7, 512, 128, 512, 3, 3, 1, 1, 1, 1),
                     std::make_tuple(56, 56, 64, 128, 256, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(56, 56, 64, 128, 64, 1, 1, 0, 0, 1, 1),
                     std::make_tuple(56, 56, 64, 128, 64, 3, 3, 1, 1, 1, 1)};
