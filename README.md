# Render-Dots



The following example demonstrates drawing the co-ordinate axes, lines, and shading a circle onto a sheet:
    
    main() {
        char sheet[y_lim][x_lim];

        int Cx = -7, Cy = 7, r = 6;  // Central Abscissa = -7, Central Ordinate = 7, Radius = 6
        int m = 1, C = 9;  // Slope = 45 deg., Y Intercept = 9

        clean(sheet)
          drawAxes(sheet);
          shadeCircle(sheet, Cx, Cy, r);
          drawLine(sheet, m, C);
        show(sheet);
    }
