<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
  <syndb class_id="0" tracking_level="0" version="0">
    <userIPLatency>-1</userIPLatency>
    <userIPName/>
    <cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
      <name>fn1</name>
      <ret_bitwidth>64</ret_bitwidth>
      <ports class_id="2" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="3" tracking_level="1" version="0" object_id="_1">
          <Value class_id="4" tracking_level="0" version="0">
            <Obj class_id="5" tracking_level="0" version="0">
              <type>1</type>
              <id>1</id>
              <name>p</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo class_id="6" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName>RAM</coreName>
              <coreId>353175681</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>1</if_type>
          <array_size>3</array_size>
          <bit_vecs class_id="7" tracking_level="0" version="0">
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
      </ports>
      <nodes class_id="8" tracking_level="0" version="0">
        <count>4</count>
        <item_version>0</item_version>
        <item class_id="9" tracking_level="1" version="0" object_id="_2">
          <Value>
            <Obj>
              <type>0</type>
              <id>6</id>
              <name>p_addr</name>
              <fileName>cdfg_125.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>26</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item class_id="10" tracking_level="0" version="0">
                  <first>/home/nanwu/GNN_DFG/bb/cdfg_20</first>
                  <second class_id="11" tracking_level="0" version="0">
                    <count>1</count>
                    <item_version>0</item_version>
                    <item class_id="12" tracking_level="0" version="0">
                      <first class_id="13" tracking_level="0" version="0">
                        <first>cdfg_125.c</first>
                        <second>fn1</second>
                      </first>
                      <second>26</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>19</coreId>
            </Obj>
            <bitwidth>2</bitwidth>
          </Value>
          <oprand_edges>
            <count>3</count>
            <item_version>0</item_version>
            <item>11</item>
            <item>13</item>
            <item>15</item>
          </oprand_edges>
          <opcode>getelementptr</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>1</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_3">
          <Value>
            <Obj>
              <type>0</type>
              <id>7</id>
              <name>p_load</name>
              <fileName>cdfg_125.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>26</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/nanwu/GNN_DFG/bb/cdfg_20</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>cdfg_125.c</first>
                        <second>fn1</second>
                      </first>
                      <second>26</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control>auto</control>
              <opType>ram</opType>
              <implIndex>auto</implIndex>
              <coreName>RAM</coreName>
              <coreId>82</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>16</item>
          </oprand_edges>
          <opcode>load</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>2.32</m_delay>
          <m_topoIndex>2</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_4">
          <Value>
            <Obj>
              <type>0</type>
              <id>8</id>
              <name>result</name>
              <fileName>cdfg_125.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>26</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/nanwu/GNN_DFG/bb/cdfg_20</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>cdfg_125.c</first>
                        <second>fn1</second>
                      </first>
                      <second>26</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName>result</originalName>
              <rtlName>ap_return</rtlName>
              <control>auto</control>
              <opType>add</opType>
              <implIndex>fabric</implIndex>
              <coreName>Adder</coreName>
              <coreId>1</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <oprand_edges>
            <count>2</count>
            <item_version>0</item_version>
            <item>17</item>
            <item>19</item>
          </oprand_edges>
          <opcode>add</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>3.52</m_delay>
          <m_topoIndex>3</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_5">
          <Value>
            <Obj>
              <type>0</type>
              <id>9</id>
              <name>_ln27</name>
              <fileName>cdfg_125.c</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>27</lineNumber>
              <contextFuncName>fn1</contextFuncName>
              <contextNormFuncName>fn1</contextNormFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item>
                  <first>/home/nanwu/GNN_DFG/bb/cdfg_20</first>
                  <second>
                    <count>1</count>
                    <item_version>0</item_version>
                    <item>
                      <first>
                        <first>cdfg_125.c</first>
                        <second>fn1</second>
                      </first>
                      <second>27</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>34014983</coreId>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>20</item>
          </oprand_edges>
          <opcode>ret</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>4</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
      </nodes>
      <consts class_id="15" tracking_level="0" version="0">
        <count>3</count>
        <item_version>0</item_version>
        <item class_id="16" tracking_level="1" version="0" object_id="_6">
          <Value>
            <Obj>
              <type>2</type>
              <id>12</id>
              <name>empty</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>0</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <const_type>0</const_type>
          <content>0</content>
        </item>
        <item class_id_reference="16" object_id="_7">
          <Value>
            <Obj>
              <type>2</type>
              <id>14</id>
              <name>empty</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>1381304321</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <const_type>0</const_type>
          <content>2</content>
        </item>
        <item class_id_reference="16" object_id="_8">
          <Value>
            <Obj>
              <type>2</type>
              <id>18</id>
              <name>empty</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <contextNormFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <control/>
              <opType/>
              <implIndex/>
              <coreName/>
              <coreId>1509524896</coreId>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <const_type>0</const_type>
          <content>18446744073709511965</content>
        </item>
      </consts>
      <blocks class_id="17" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="18" tracking_level="1" version="0" object_id="_9">
          <Obj>
            <type>3</type>
            <id>10</id>
            <name>fn1</name>
            <fileName/>
            <fileDirectory/>
            <lineNumber>0</lineNumber>
            <contextFuncName/>
            <contextNormFuncName/>
            <inlineStackInfo>
              <count>0</count>
              <item_version>0</item_version>
            </inlineStackInfo>
            <originalName/>
            <rtlName/>
            <control/>
            <opType/>
            <implIndex/>
            <coreName/>
            <coreId>22467904</coreId>
          </Obj>
          <node_objs>
            <count>4</count>
            <item_version>0</item_version>
            <item>6</item>
            <item>7</item>
            <item>8</item>
            <item>9</item>
          </node_objs>
        </item>
      </blocks>
      <edges class_id="19" tracking_level="0" version="0">
        <count>7</count>
        <item_version>0</item_version>
        <item class_id="20" tracking_level="1" version="0" object_id="_10">
          <id>11</id>
          <edge_type>1</edge_type>
          <source_obj>1</source_obj>
          <sink_obj>6</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_11">
          <id>13</id>
          <edge_type>1</edge_type>
          <source_obj>12</source_obj>
          <sink_obj>6</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_12">
          <id>15</id>
          <edge_type>1</edge_type>
          <source_obj>14</source_obj>
          <sink_obj>6</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_13">
          <id>16</id>
          <edge_type>1</edge_type>
          <source_obj>6</source_obj>
          <sink_obj>7</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_14">
          <id>17</id>
          <edge_type>1</edge_type>
          <source_obj>7</source_obj>
          <sink_obj>8</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_15">
          <id>19</id>
          <edge_type>1</edge_type>
          <source_obj>18</source_obj>
          <sink_obj>8</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_16">
          <id>20</id>
          <edge_type>1</edge_type>
          <source_obj>8</source_obj>
          <sink_obj>9</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
      </edges>
    </cdfg>
    <cdfg_regions class_id="21" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="22" tracking_level="1" version="0" object_id="_17">
        <mId>1</mId>
        <mTag>fn1</mTag>
        <mNormTag>fn1</mNormTag>
        <mType>0</mType>
        <sub_regions>
          <count>0</count>
          <item_version>0</item_version>
        </sub_regions>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>10</item>
        </basic_blocks>
        <mII>-1</mII>
        <mDepth>-1</mDepth>
        <mMinTripCount>-1</mMinTripCount>
        <mMaxTripCount>-1</mMaxTripCount>
        <mMinLatency>1</mMinLatency>
        <mMaxLatency>1</mMaxLatency>
        <mIsDfPipe>0</mIsDfPipe>
        <mDfPipe class_id="-1"/>
      </item>
    </cdfg_regions>
    <fsm class_id="24" tracking_level="1" version="0" object_id="_18">
      <states class_id="25" tracking_level="0" version="0">
        <count>2</count>
        <item_version>0</item_version>
        <item class_id="26" tracking_level="1" version="0" object_id="_19">
          <id>1</id>
          <operations class_id="27" tracking_level="0" version="0">
            <count>2</count>
            <item_version>0</item_version>
            <item class_id="28" tracking_level="1" version="0" object_id="_20">
              <id>6</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_21">
              <id>7</id>
              <stage>2</stage>
              <latency>2</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="26" object_id="_22">
          <id>2</id>
          <operations>
            <count>7</count>
            <item_version>0</item_version>
            <item class_id_reference="28" object_id="_23">
              <id>2</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_24">
              <id>3</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_25">
              <id>4</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_26">
              <id>5</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_27">
              <id>7</id>
              <stage>1</stage>
              <latency>2</latency>
            </item>
            <item class_id_reference="28" object_id="_28">
              <id>8</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="28" object_id="_29">
              <id>9</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
          </operations>
        </item>
      </states>
      <transitions class_id="29" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="30" tracking_level="1" version="0" object_id="_30">
          <inState>1</inState>
          <outState>2</outState>
          <condition class_id="31" tracking_level="0" version="0">
            <id>-1</id>
            <sop class_id="32" tracking_level="0" version="0">
              <count>1</count>
              <item_version>0</item_version>
              <item class_id="33" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
      </transitions>
    </fsm>
    <res class_id="34" tracking_level="1" version="0" object_id="_31">
      <dp_component_resource class_id="35" tracking_level="0" version="0">
        <count>0</count>
        <item_version>0</item_version>
      </dp_component_resource>
      <dp_expression_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="36" tracking_level="0" version="0">
          <first>ap_return ( + ) </first>
          <second class_id="37" tracking_level="0" version="0">
            <count>4</count>
            <item_version>0</item_version>
            <item class_id="38" tracking_level="0" version="0">
              <first>(0P0)</first>
              <second>64</second>
            </item>
            <item>
              <first>(1P1)</first>
              <second>17</second>
            </item>
            <item>
              <first>FF</first>
              <second>0</second>
            </item>
            <item>
              <first>LUT</first>
              <second>71</second>
            </item>
          </second>
        </item>
      </dp_expression_resource>
      <dp_fifo_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_fifo_resource>
      <dp_memory_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_memory_resource>
      <dp_multiplexer_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>ap_NS_fsm</first>
          <second>
            <count>4</count>
            <item_version>0</item_version>
            <item>
              <first>(0Size)</first>
              <second>3</second>
            </item>
            <item>
              <first>(1Bits)</first>
              <second>1</second>
            </item>
            <item>
              <first>(2Count)</first>
              <second>3</second>
            </item>
            <item>
              <first>LUT</first>
              <second>14</second>
            </item>
          </second>
        </item>
      </dp_multiplexer_resource>
      <dp_register_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>ap_CS_fsm</first>
          <second>
            <count>3</count>
            <item_version>0</item_version>
            <item>
              <first>(Bits)</first>
              <second>2</second>
            </item>
            <item>
              <first>(Consts)</first>
              <second>0</second>
            </item>
            <item>
              <first>FF</first>
              <second>2</second>
            </item>
          </second>
        </item>
      </dp_register_resource>
      <dp_dsp_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_dsp_resource>
      <dp_component_map class_id="39" tracking_level="0" version="0">
        <count>0</count>
        <item_version>0</item_version>
      </dp_component_map>
      <dp_expression_map>
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="40" tracking_level="0" version="0">
          <first>ap_return ( + ) </first>
          <second>
            <count>1</count>
            <item_version>0</item_version>
            <item>8</item>
          </second>
        </item>
      </dp_expression_map>
      <dp_fifo_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_fifo_map>
      <dp_memory_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_memory_map>
    </res>
    <node_label_latency class_id="41" tracking_level="0" version="0">
      <count>4</count>
      <item_version>0</item_version>
      <item class_id="42" tracking_level="0" version="0">
        <first>6</first>
        <second class_id="43" tracking_level="0" version="0">
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>7</first>
        <second>
          <first>0</first>
          <second>1</second>
        </second>
      </item>
      <item>
        <first>8</first>
        <second>
          <first>1</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>9</first>
        <second>
          <first>1</first>
          <second>0</second>
        </second>
      </item>
    </node_label_latency>
    <bblk_ent_exit class_id="44" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="45" tracking_level="0" version="0">
        <first>10</first>
        <second class_id="46" tracking_level="0" version="0">
          <first>0</first>
          <second>1</second>
        </second>
      </item>
    </bblk_ent_exit>
    <regions class_id="47" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </regions>
    <dp_fu_nodes class_id="48" tracking_level="0" version="0">
      <count>3</count>
      <item_version>0</item_version>
      <item class_id="49" tracking_level="0" version="0">
        <first>24</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>6</item>
        </second>
      </item>
      <item>
        <first>32</first>
        <second>
          <count>2</count>
          <item_version>0</item_version>
          <item>7</item>
          <item>7</item>
        </second>
      </item>
      <item>
        <first>38</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>8</item>
        </second>
      </item>
    </dp_fu_nodes>
    <dp_fu_nodes_expression class_id="51" tracking_level="0" version="0">
      <count>2</count>
      <item_version>0</item_version>
      <item class_id="52" tracking_level="0" version="0">
        <first>p_addr_gep_fu_24</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>6</item>
        </second>
      </item>
      <item>
        <first>result_fu_38</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>8</item>
        </second>
      </item>
    </dp_fu_nodes_expression>
    <dp_fu_nodes_module>
      <count>0</count>
      <item_version>0</item_version>
    </dp_fu_nodes_module>
    <dp_fu_nodes_io>
      <count>0</count>
      <item_version>0</item_version>
    </dp_fu_nodes_io>
    <return_ports>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>ap_return</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>9</item>
        </second>
      </item>
    </return_ports>
    <dp_mem_port_nodes class_id="53" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="54" tracking_level="0" version="0">
        <first class_id="55" tracking_level="0" version="0">
          <first>p</first>
          <second>0</second>
        </first>
        <second>
          <count>2</count>
          <item_version>0</item_version>
          <item>7</item>
          <item>7</item>
        </second>
      </item>
    </dp_mem_port_nodes>
    <dp_reg_nodes>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>44</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>6</item>
        </second>
      </item>
    </dp_reg_nodes>
    <dp_regname_nodes>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>p_addr_reg_44</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>6</item>
        </second>
      </item>
    </dp_regname_nodes>
    <dp_reg_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_reg_phi>
    <dp_regname_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_regname_phi>
    <dp_port_io_nodes class_id="56" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="57" tracking_level="0" version="0">
        <first>p(p0)</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>
            <first>load</first>
            <second>
              <count>2</count>
              <item_version>0</item_version>
              <item>7</item>
              <item>7</item>
            </second>
          </item>
        </second>
      </item>
    </dp_port_io_nodes>
    <port2core>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>1</first>
        <second>
          <first>27</first>
          <second>136</second>
        </second>
      </item>
    </port2core>
    <node2core>
      <count>2</count>
      <item_version>0</item_version>
      <item>
        <first>7</first>
        <second>
          <first>27</first>
          <second>136</second>
        </second>
      </item>
      <item>
        <first>8</first>
        <second>
          <first>8</first>
          <second>4</second>
        </second>
      </item>
    </node2core>
  </syndb>
</boost_serialization>