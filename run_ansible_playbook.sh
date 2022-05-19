#!/bin/bash

# not putting my ssh password in the inventory so I can still show that file.
ansible-playbook --ask-pass ansible_playbook.yaml