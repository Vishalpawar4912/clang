#  MySQL schema 
> Designed to support the key features of your housing society management application, such as user management, maintenance requests, meeting schedules, guest management, parcel management, and utility maintenance schedules.

### **1. `users` Table**
This table stores information about all users, including residents, admins, and watchmen.

```sql
CREATE TABLE users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    username VARCHAR(50) NOT NULL UNIQUE,
    email VARCHAR(100) NOT NULL UNIQUE,
    password VARCHAR(255) NOT NULL,
    role ENUM('resident', 'admin', 'watchman') NOT NULL,
    phone_number VARCHAR(15),
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
);
```

### **2. `maintenance_requests` Table**
This table manages maintenance requests submitted by residents.

```sql
CREATE TABLE maintenance_requests (
    id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT NOT NULL,
    description TEXT NOT NULL,
    status ENUM('pending', 'in_progress', 'completed') DEFAULT 'pending',
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE
);
```

### **3. `meetings` Table**
This table records scheduled meetings, including details like agenda and participants.

```sql
CREATE TABLE meetings (
    id INT AUTO_INCREMENT PRIMARY KEY,
    title VARCHAR(100) NOT NULL,
    agenda TEXT,
    meeting_date DATETIME NOT NULL,
    created_by INT NOT NULL,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    FOREIGN KEY (created_by) REFERENCES users(id) ON DELETE CASCADE
);
```

### **4. `meeting_participants` Table**
This table links users to meetings, indicating who is participating in each meeting.

```sql
CREATE TABLE meeting_participants (
    meeting_id INT NOT NULL,
    user_id INT NOT NULL,
    PRIMARY KEY (meeting_id, user_id),
    FOREIGN KEY (meeting_id) REFERENCES meetings(id) ON DELETE CASCADE,
    FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE
);
```

### **5. `guests` Table**
This table manages guest registrations by residents and their check-in/out status.

```sql
CREATE TABLE guests (
    id INT AUTO_INCREMENT PRIMARY KEY,
    resident_id INT NOT NULL,
    guest_name VARCHAR(100) NOT NULL,
    guest_contact VARCHAR(15),
    purpose TEXT,
    expected_arrival DATETIME,
    status ENUM('registered', 'arrived', 'left') DEFAULT 'registered',
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    FOREIGN KEY (resident_id) REFERENCES users(id) ON DELETE CASCADE
);
```

### **6. `parcels` Table**
This table tracks parcels delivered to the society and their pickup status.

```sql
CREATE TABLE parcels (
    id INT AUTO_INCREMENT PRIMARY KEY,
    resident_id INT NOT NULL,
    carrier VARCHAR(50) NOT NULL,
    parcel_details TEXT,
    arrival_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    status ENUM('awaiting_pickup', 'picked_up') DEFAULT 'awaiting_pickup',
    picked_up_time TIMESTAMP,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    FOREIGN KEY (resident_id) REFERENCES users(id) ON DELETE CASCADE
);
```

### **7. `maintenance_schedule` Table**
This table manages the schedules for utility maintenance, such as lifts, solar panels, water tanks, etc.

```sql
CREATE TABLE maintenance_schedule (
    id INT AUTO_INCREMENT PRIMARY KEY,
    task_name VARCHAR(100) NOT NULL,
    description TEXT,
    scheduled_date DATE NOT NULL,
    responsible_person INT,
    status ENUM('scheduled', 'completed') DEFAULT 'scheduled',
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    FOREIGN KEY (responsible_person) REFERENCES users(id)
);
```

### **8. `payments` Table**
This table records payments made by residents for maintenance and other fees.

```sql
CREATE TABLE payments (
    id INT AUTO_INCREMENT PRIMARY KEY,
    user_id INT NOT NULL,
    amount DECIMAL(10, 2) NOT NULL,
    payment_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    payment_method ENUM('credit_card', 'debit_card', 'net_banking', 'UPI') NOT NULL,
    status ENUM('pending', 'completed', 'failed') DEFAULT 'pending',
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    FOREIGN KEY (user_id) REFERENCES users(id) ON DELETE CASCADE
);
```

### **Schema Overview:**

- The `users` table holds all the users of the system, categorized by role (resident, admin, watchman).
- The `maintenance_requests` table tracks maintenance issues reported by residents.
- The `meetings` and `meeting_participants` tables manage meetings and attendance.
- The `guests` table tracks guest registrations and status.
- The `parcels` table monitors parcel deliveries and their pickup status.
- The `maintenance_schedule` table handles scheduled utility maintenance tasks.
- The `payments` table records financial transactions related to maintenance and other fees.

### **Next Steps:**
- **Database Setup:** You can create these tables in your MySQL database using a SQL client or command line.
- **Backend Integration:** Start integrating these tables into your Go backend, using an ORM like GORM to manage database operations.
- **API Development:** Implement CRUD operations for each of these tables through your backend API.
