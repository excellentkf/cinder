.. -*- rst -*-

Attachments
===========

Lists all, lists all with details, shows details for, creates, and
deletes attachment.

.. note:: Everything except for `Complete attachment` is new as of the 3.27
          microversion. `Complete attachment` is new as of the 3.44
          microversion.


Delete attachment
~~~~~~~~~~~~~~~~~

.. rest_method::  DELETE /v3/{project_id}/attachments/{attachment_id}

Deletes an attachment.

Available starting in the 3.27 microversion.

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 200

.. rest_status_code:: error ../status.yaml

   - 400
   - 404


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - attachment_id: attachment_id_1


Show attachment details
~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/attachments/{attachment_id}

Shows details for an attachment.

Available starting in the 3.27 microversion.

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 200

.. rest_status_code:: error ../status.yaml

   - 400
   - 404


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - attachment_id: attachment_id_1


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - status: status_9
   - detached_at: detached_at
   - connection_info: connection_info
   - attached_at: attached_at
   - attach_mode: attach_mode
   - instance: instance_uuid
   - volume_id: volume_id_7
   - id: attachment_id_2

Response Example
----------------

.. literalinclude:: ./samples/attachment-show-response.json
   :language: javascript


List attachments with details
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/attachments/detail

Lists all attachments with details. Since v3.31 if non-admin
users specify invalid filters in the url, API will return bad request.

Available starting in the 3.27 microversion.

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 200

.. rest_status_code:: error ../status.yaml

   - 400

Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - all_tenants: all-tenants
   - sort: sort
   - limit: limit
   - offset: offset
   - marker: marker


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - status: status_9
   - detached_at: detached_at
   - connection_info: connection_info
   - attached_at: attached_at
   - attach_mode: attach_mode
   - instance: instance_uuid
   - volume_id: volume_id_7
   - id: attachment_id_2

Response Example
----------------

.. literalinclude:: ./samples/attachment-list-detailed-response.json
   :language: javascript

List attachments
~~~~~~~~~~~~~~~~

.. rest_method::  GET /v3/{project_id}/attachments

Lists all attachments, since v3.31 if non-admin users
specify invalid filters in the url, API will return bad request.

Available starting in the 3.27 microversion.

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 200

.. rest_status_code:: error ../status.yaml

   - 400


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - all_tenants: all-tenants
   - sort: sort
   - limit: limit
   - offset: offset
   - marker: marker


Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - status: status_9
   - instance: instance_uuid
   - volume_id: volume_id_7
   - id: attachment_id_2


Response Example
----------------

.. literalinclude:: ./samples/attachment-list-response.json
   :language: javascript


Create attachment
~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/attachments

Creates an attachment.

Available starting in the 3.27 microversion.

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 200

.. rest_status_code:: error ../status.yaml

   - 400
   - 404


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - attachment: attachment
   - instance_uuid: instance_uuid_1
   - connector: connector
   - volume_uuid: volume_id_7

Request Example
---------------

.. literalinclude:: ./samples/attachment-create-request.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - attachment: attachment
   - status: status_9
   - detached_at: detached_at
   - connection_info: connection_info
   - attached_at: attached_at
   - attach_mode: attach_mode
   - instance: instance_uuid
   - volume_id: volume_id_7
   - id: attachment_id_2

Response Example
----------------

.. literalinclude:: ./samples/attachment-create-response.json
   :language: javascript


Update an attachment
~~~~~~~~~~~~~~~~~~~~

.. rest_method::  PUT /v3/{project_id}/attachments/{attachment_id}

Update a reserved attachment record with connector information
and set up the appropriate connection_info from the driver.

Available starting in the 3.27 microversion.

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 200

.. rest_status_code:: error ../status.yaml

   - 400
   - 404

Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - attachment_id: attachment_id_1
   - attachement: attachment
   - connector: connector_1

Request Example
---------------

.. literalinclude:: ./samples/attachment-update-request.json
   :language: javascript

Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - attachment: attachment
   - status: status_9
   - detached_at: detached_at
   - connection_info: connection_info
   - attached_at: attached_at
   - attach_mode: attach_mode
   - instance: instance_uuid
   - volume_id: volume_id_7
   - id: attachment_id_2

Response Example
----------------

.. literalinclude:: ./samples/attachment-update-response.json
   :language: javascript


Complete attachment
~~~~~~~~~~~~~~~~~~~

.. rest_method::  POST /v3/{project_id}/attachments/{attachment_id}/action

Complete an attachment for a cinder volume.

Available starting in the 3.44 microversion.

Response codes
--------------

.. rest_status_code:: success ../status.yaml

   - 204

.. rest_status_code:: error ../status.yaml

   - 400
   - 404


Request
-------

.. rest_parameters:: parameters.yaml

   - project_id: project_id_path
   - attachment_id: attachment_id_1

Request Example
---------------

.. literalinclude:: ./samples/attachment-complete.json
   :language: javascript
