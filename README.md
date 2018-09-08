# GithubGuide
Quản Lý Dự Án Trên Github
# Cần biết:
+ Clone, checkout, commit, pull, push
+ Tạo branch
+ Gửi request
# Yêu cầu bắt buộc:
+ Đã cài đặt git
+ Đã được add vào nhóm trên github
+ Clone project từ nhánh master
+ Tạo mới một issue và branch (nhánh con của master) trên github, xác nhận tên người tạo
+ Chuyển hướng tới branch đó trong Android Studio
+ Tiến hành code
+ Đẩy code mới lên nhánh đang thực thi
+ Tạo merge request tới nhánh master (do admin quản lý)
# Chi tiết:
+ Clone project từ nhánh master:
# Khi nào clone project ???
Khi kéo một dự án mới trên github về
1.) Truy cập github, mở dự án muốn phát triển (ví dụ: DyamonsWorld)
2.) Chọn nhánh master (mặc định là nhánh master, nếu ko bạn phải chọn lại)
3.) Copy đường dẫn của project, ví dụ: https://github.com/abc/abc.git
4.) Mở thư mục muốn lưu trữ dự án => chuột phải => Git bash here
5.) Clone dự án: git clone link-dự-án (ví dụ: git clone https://github.com/abc/abc.git) => Enter
6.) Đợi load xong là đã clone hoàn tất.
+ Pull project từ nhánh master
# Khi nào thì pull ???
Pull khi dự án đã tồn tại (đã được clone về từ trước)
1.) Nếu dùng git, mở thư mục chứa dự án, chạy lệnh: git pull => Enter
1.1) Nếu dùng Terminal trong Android Studio: Mở Terminal, chạy lệnh: git pull => Enter
+ Checkout (chuyển branch)
# Khi nào thì checkout ???
Khi tạo một màn hình mới, một tính năng mới, ...
1.) Truy cập github => mở project đang làm việc => chọn Issues trong menu bên trái màn hình
2.) Click nút New issue để tạo một issue mới
3.) Trong trang Info new issue, bạn nhập Title, Description (nếu issue này phức tạp, cần mô tả)
Trong mục Assignee, chọn tên bạn, là tên người tạo issue, cũng là người phụ trách hoàn thành công việc.
Các mục khác có thể bỏ qua
Click Submit issue để hoàn thành
4.) Tại màn hình Info issue được trỏ đến, click mũi tên bên cạnh nút Create merge request
5.) Tại bảng xổ xuống, tích chọn Create branch (bước này quan trọng, nếu ko làm đúng sẽ khó khăn trong việc trỏ tới branch mới)
6.) Để mặc định 2 khung nhập nhưng hãy ghi nhớ branch name. Click nút Create branch

Như vậy là đã hoàn thành việc tạo branch mới trên github, tiếp theo ta cần chuyển hướng đến branch này trong Android Studio

7.) Mở Terminal, gõ lệnh: git fetch => Enter (lệnh này để cập nhật các branch mới)
8.) Tiếp theo, gõ lệnh: git checkout branch-name => Enter (branch-name là tên branch bạn đã ghi nhớ khi tạo ở trên)
Nếu ko nhớ, bạn có thể vào lại mục Issues trên github để copy tên branch bạn đã tạo
9.) Nếu bạn đang ở một nhánh khác master, để ý rằng project đã được cập nhật lại.
Vì branch này được tạo từ nhánh master (bước 6 ở trên) nên khi checkout, project sẽ được cập nhật theo nhánh master
Điều này là rất quan trọng để admin có thể quản lý project chính là nhánh master
Tiếp tục, hãy xem tiếp phần Tạo Merge Request trước khi thực hiện bước 10 bên dưới.
10.) Finish, bây giờ bạn đã ở một nhánh khác thuộc nhánh con của master. Bạn có thể code và push code lên như bình thường.
+ Tạo Merge Request
# Khi nào thì tạo merge request ???
Tạo merge request khi bạn đã hoàn tất màn hình, hay tính năng thuộc issue mà bạn đã tạo ra.
0.1.) Admin quản lý dự án con (các branch con của nhánh master) như thế nào ???
Dựa vào các merge request được tạo từ các issue, admin có thể kiểm tra code, đưa code từ các branch con vào branch chính master.
Các lệnh clone code, pull code từ client (các trình soạn thảo và biên dịch) sẽ lấy code mới với branch đã được thêm vào.
Có thể thấy rằng nếu admin chưa check merge request để add branch mới vào master thì các lệnh clone, pull code sẽ lấy về code cũ
từ nhánh master. Do đó khi các dev sau khi push code và tạo merge request từ issue cần phải liên hệ admin để thêm code vào nhánh
master. Từ đó các dev khác có thể clone hoặc pull code mới mà dev này tạo ra để tiếp tục code.
Thông thường việc gửi merge request được thực hiện vào cuối ngày để admin tổng hợp và đưa toàn bộ code mới vào nhánh master
Điều này cũng lý giải việc bắt buộc phải pull code trước khi tiếp tục dự án vào đầu ngày hôm sau.
1.) Vào github => mở project đang làm việc, bạn sẽ thấy danh sách các issue đã push code lên mà chưa tạo merge request ở ngay trên
cùng với nút Create merge request màu xanh dương phía bên phải mỗi issue.
2.) Click nút Create merge request, một trang mới được trỏ đến
3.) Tại Title, nếu có "WIP: ", hãy xóa bỏ nó. Nếu ko sẽ gây khó khăn trong việc add code mới vào nhánh master.
Tiêu đề phía sau giữ nguyên
Trong Description, thêm mô tả cho issue của bạn nếu nó phức tạp. Nếu ko có thể bỏ qua.
Trong mục Assignee, chọn tên người qurn lý dự án. Hiện tại là mình, Nguyễn Kỳ Phương (@kyphuong93)
Các mục khác bỏ qua.
4.) Click Submit merge request để gửi request đến người quản lý dự án. Done!
+ Push code
# Khi nào thì push code ???
Khi bạn hoàn thành công việc trong branch hiện tại hay có yêu cầu push code vào cuối ngày.
1.) Tại Terminal, gõ lệnh: git add . => Enter (thêm mới tất cả các file đã thay đổi)
2.) Tiếp tục, gõ lệnh: git commit -m "Chú thích cho commit" => Enter (thêm ghi chú cho các thay đổi)
3.) Gõ lệnh: git push => Enter (đẩy code đã thay đổi lên server github)
# Lưu ý:
+ Sau khi đẩy code phải tạo merge request trên github để admin cập nhật code
+ Trong quá trình làm việc sẽ gặp lỗi conflig. Lỗi này sẽ cùng nhau giải quyết về sau.
