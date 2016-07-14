### Teensy USB Development Board
Teensy là một mạch tích hợp sử dụng vi xử lý trên nền tảng USB, thiết kế với kích thước nhỏ và có thể phát triển mở rộng thành nhiều tính năng khác nhau. Tất cả quá trình biên dịch, nạp chip và thực thi mã đều thông qua kết nối USB.

Kỹ thuật tấn công sử dụng USB HID (Human Interface Device) hay còn được gọi là kỹ thuật mô phỏng bàn phím. Đây là một sự kết hợp của phần cứng, phần mềm theo kiến trúc Arduino; nó có thể vượt qua cơ chế kiểm soát đầu vào của hệ điều hành.

Khi bạn kết nối 1 đĩa CD/DVD hoặc USB vào máy tính, nếu tính năng autorun bị vô hiệu hóa, autorun.inf không được gọi và bạn không thể tự động thực thi mã của tin tặc. Tuy nhiên, bằng cách sử dụng USB HID, bạn có thể giả lập hành vi của một bàn phím và chuột. Sau khi kết nối các thiết bị, nó sẽ được phát hiện như là một bàn phím/ chuột, và thiết bị sử dụng bộ vi xử lý cùng với bộ nhớ lưu trữ flash trên bo mạch, bạn có thể gửi rất nhanh một tập hợp các tổ hợp phím cho máy tính của nạn nhân và hoàn toàn chiếm quyền nó.

[CÀ PHÊ BẢO MẬT LẦN THỨ 14 - TeensyHID attack vector - A new/ old attack vector](http://www.btis.vn/truyen-thong/ca-phe-bao-mat-buoi-thu-14-teensyhid-attack-vector-new-old-attack-vector.html)

![Teensy HID Attack Vector](img/teensy_hid_attack_vector.jpg)
Hình: Teensy HID Attack Vector

![Teensy HID + SD Adaptor](img/teensy_sd_card_adaptor.jpg)
Hình: Teensy HID + SD Adaptor
