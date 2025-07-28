<!DOCTYPE html>
<html>
<head>
  <title>HealthCare Hospital - Doctor Dashboard</title>
  <style>
    * {
      margin: 0;
      padding: 0;
      box-sizing: border-box;
    }
    
 
    body {
      font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
      background-color: #f8f9fc;
      color: #333;
    }
    
    .header {
      background: linear-gradient(135deg, #4f46e5 0%, #3b82f6 100%);
      color: white;
      padding: 20px 40px;
      display: flex;
      justify-content: space-between;
      align-items: center;
    }
    
    .header h1 {
      font-size: 28px;
      font-weight: 600;
    }
    
    .header .subtitle {
      font-size: 14px;
      opacity: 0.9;
      margin-top: 2px;
    }
    .logout-btn:hover {
      background: rgba(255, 255, 255, 0.3);
    }
    
    .welcome-section {
      background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
      color: white;
      text-align: center;
      padding: 40px 20px;
    }
    
    .welcome-section h2 {
      font-size: 32px;
      font-weight: 300;
      margin-bottom: 8px;
    }
    .welcome-section p {
      font-size: 16px;
      opacity: 0.9;
    }
    
    .container {
      max-width: 1200px;
      margin: 0 auto;
      padding: 40px 20px;
    }
    
    .stats-grid {
 display: grid;
      grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
      gap: 30px;
      margin-bottom: 40px;
    }
    
    .stat-card {
      background: white;
      padding: 30px;
      border-radius: 12px;
      box-shadow: 0 2px 10px rgba(0, 0, 0, 0.08);
      text-align: center;
      transition: transform 0.3s, box-shadow 0.3s;
    }
    .stat-card:hover {
      transform: translateY(-2px);
      box-shadow: 0 4px 20px rgba(0, 0, 0, 0.12);
    }
    
    .stat-number {
      font-size: 48px;
      font-weight: 300;
      color: #3b82f6;
      margin-bottom: 10px;
      display: block;
    }
    
    .stat-label {
      font-size: 16px;
      color: #6b7280;
      font-weight: 500;
    }
    .appointments-section {
      background: white;
      border-radius: 12px;
      box-shadow: 0 2px 10px rgba(0, 0, 0, 0.08);
      overflow: hidden;
    }
    
    .section-header {
      background: #f8fafc;
      padding: 25px 30px;
      border-bottom: 1px solid #e5e7eb;
    }
.section-header h3 {
      font-size: 24px;
      font-weight: 600;
      color: #1f2937;
      margin-bottom: 5px;
    }
    
    .section-header p {
      color: #6b7280;
      font-size: 14px;
    }
    
    .appointments-content {
      padding: 30px;
    }
    
    .appointment-item {
      background: #f8fafc;
  
