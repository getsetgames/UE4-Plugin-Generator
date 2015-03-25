#!/usr/bin/ruby

require 'FileUtils'

SOURCE_DIR="TemplatePlugin/**"
TEXT_FORMATS = [".cpp", ".h", ".pch", ".uplugin", ".cs"]

def path_replace(path, new_name)
  return path.gsub("TemplatePlugin", new_name)
end

def contents_replace(contents, new_name)
  return contents.gsub("TemplatePlugin", new_name)
end

def get_all_files()
  return Dir.glob(File.join(SOURCE_DIR, "*"))
end

def create_project_files()
  get_all_files().each { | file |
    if File.file?(file) then
      new_path = path_replace(file, ARGV[0])
      puts "#{file} -> #{new_path}"

      FileUtils.mkdir_p File.dirname(new_path)
      contents = File.open(file).read

      if TEXT_FORMATS.include? File.extname(file) then
        contents = contents_replace(contents, ARGV[0])
      end

      File.open(new_path, 'w') { |new_file|
        new_file.write(contents)
      }
    end
  }
end

if ARGV.length == 0 then
    puts "Usage: ./generate.rb <New Plugin Name>"
    exit 0
end

puts "Creating plugin with name: #{ARGV[0]}"
create_project_files()
