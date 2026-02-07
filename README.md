# Giới thiệu
TMB12A03 là loại còi báo chủ động, tích hợp sẵn mạch dao động bên trong. Chỉ cần cấp nguồn điện DC là còi sẽ phát ra âm thanh.

*   **Thông số kỹ thuật:**
    *   Điện áp hoạt động: 3V - 12V DC (Tối ưu ở 3.3V hoặc 5V).
    *   Dòng tiêu thụ định mức: $\le$ 30mA.
    *   Tần số âm thanh: 2300Hz $\pm$ 300Hz.
    *   Cường độ âm thanh (SPL): $\ge$ 85dB (ở khoảng cách 10cm).
    *   Nhiệt độ hoạt động: -20°C đến +70°C.
   
# Sơ đồ kết nối:
| Chân TMB12A03 | Chân ESP32 | Chức năng |
| :--- | :--- | :--- |
| Chân dương (+) | GPIO 18 | Tín hiệu điều khiển |
| Chân âm (-) | GND | Nối đất |
