/*
 * Contributed by Stephane Eranian <eranian@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of libpfm, a performance monitoring support library for
 * applications on Linux.
 *
 * PMU: amd64_fam17h (AMD64 Fam17h))
 */

static const amd64_umask_t amd64_fam17h_l1_itlb_miss_l2_itlb_miss[]={
  { .uname  = "IF1G",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "IF2M",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "IF4K",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_retired_mmx_fp_instructions[]={
  { .uname  = "SSE_INSTR",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "MMX_INSTR",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "X87_INSTR",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_tagged_ibs_ops[]={
  { .uname  = "IBS_COUNT_ROLLOVER",
    .udesc  = "Number of times a uop could not be tagged by IBS because of a previous tagged uop that has not retired.",
    .ucode  = 0x4,
  },
  { .uname  = "IBS_TAGGED_OPS_RET",
    .udesc  = "Number of uops tagged by IBS that retired.",
    .ucode  = 0x2,
  },
  { .uname  = "IBS_TAGGED_OPS",
    .udesc  = "Number of uops tagged by IBS.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_number_of_move_elimination_and_scalar_op_optimization[]={
  { .uname  = "OPTIMIZED",
    .udesc  = "Number of scalar ops optimized.",
    .ucode  = 0x8,
  },
  { .uname  = "OPT_POTENTIAL",
    .udesc  = "Number of ops that are candidates for optimization (have z-bit either set or pass.",
    .ucode  = 0x4,
  },
  { .uname  = "SSE_MOV_OPS_ELIM",
    .udesc  = "Number of SSE move ops eliminated.",
    .ucode  = 0x2,
  },
  { .uname  = "SSE_MOV_OPS",
    .udesc  = "Number of SSE move ops.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_retired_sse_avx_operations[]={
  { .uname  = "DP_MULT_ADD_FLOPS",
    .udesc  = "Double precision multiply-add flops.",
    .ucode  = 0x80,
  },
  { .uname  = "DP_DIV_FLOPS",
    .udesc  = "Double precision divide/square root flops.",
    .ucode  = 0x40,
  },
  { .uname  = "DP_MULT_FLOPS",
    .udesc  = "Double precision multiply flops.",
    .ucode  = 0x20,
  },
  { .uname  = "DP_ADD_SUB_FLOPS",
    .udesc  = "Double precision add/subtract flops.",
    .ucode  = 0x10,
  },
  { .uname  = "SP_MULT_ADD_FLOPS",
    .udesc  = "Single precision multiply-add flops.",
    .ucode  = 0x8,
  },
  { .uname  = "SP_DIV_FLOPS",
    .udesc  = "Single precision divide/square root flops.",
    .ucode  = 0x4,
  },
  { .uname  = "SP_MULT_FLOPS",
    .udesc  = "Single precision multiply flops.",
    .ucode  = 0x2,
  },
  { .uname  = "SP_ADD_SUB_FLOPS",
    .udesc  = "Single precision add/subtract flops.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_retired_serializing_ops[]={
  { .uname  = "X87_CTRL_RET",
    .udesc  = "X87 control word mispredict traps due to mispredction in RC or PC, or changes in mask bits.",
    .ucode  = 0x8,
  },
  { .uname  = "X87_BOT_RET",
    .udesc  = "X87 bottom-executing uops retired.",
    .ucode  = 0x4,
  },
  { .uname  = "SSE_CTRL_RET",
    .udesc  = "SSE control word mispreduct traps due to mispredctions in RC, FTZ or DAZ or changes in mask bits.",
    .ucode  = 0x2,
  },
  { .uname  = "SSE_BOT_RET",
    .udesc  = "SSE bottom-executing uops retired.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_retired_x87_floating_point_operations[]={
  { .uname  = "DIV_SQR_R_OPS",
    .udesc  = "Divide and square root ops",
    .ucode  = 0x4,
  },
  { .uname  = "MUL_OPS",
    .udesc  = "Multiple ops",
    .ucode  = 0x2,
  },
  { .uname  = "ADD_SUB_OPS",
    .udesc  = "Add/subtract ops",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_fpu_pipe_assignment[]={
  { .uname  = "DUAL3",
    .udesc  = "Total number of multi-pipe uops assigned to pipe3",
    .ucode  = 0x80,
  },
  { .uname  = "DUAL2",
    .udesc  = "Total number of multi-pipe uops assigned to pipe2",
    .ucode  = 0x40,
  },
  { .uname  = "DUAL1",
    .udesc  = "Total number of multi-pipe uops assigned to pipe1",
    .ucode  = 0x20,
  },
  { .uname  = "DUAL0",
    .udesc  = "Total number of multi-pipe uops assigned to pipe0",
    .ucode  = 0x10,
  },
  { .uname  = "TOTAL3",
    .udesc  = "Total number of uops assigned to pipe3",
    .ucode  = 0x8,
  },
  { .uname  = "TOTAL2",
    .udesc  = "Total number of uops assigned to pipe2",
    .ucode  = 0x4,
  },
  { .uname  = "TOTAL1",
    .udesc  = "Total number of uops assigned to pipe1",
    .ucode  = 0x2,
  },
  { .uname  = "TOTAL0",
    .udesc  = "Total number of uops assigned to pipe0",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_instruction_cache_lines_invalidated[]={
  { .uname  = "L2_INVALIDATING_PROBE",
    .udesc  = "IC line invalidated due to L2 invalidating probe (external or LS).",
    .ucode  = 0x2,
  },
  { .uname  = "FILL_INVALIDATED",
    .udesc  = "IC line invalidated due to overwriting fill response.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_instruction_pipe_stall[]={
  { .uname  = "IC_STALL_ANY",
    .udesc  = "IC pipe was stalled during this clock cycle for any reason (nothing valud in pipe ICM1).",
    .ucode  = 0x4,
  },
  { .uname  = "IC_STALL_DQ_EMPTY",
    .udesc  = "IC pipe was stalled during this clock cycle (including IC to OC fetches) due to DQ empty.",
    .ucode  = 0x2,
  },
  { .uname  = "IC_STALL_BACK_PRESSURE",
    .udesc  = "IC pipe was stalled during this clock cycle (ncluding IC to OC fetches) due to back pressure.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_core_to_l2_cacheable_request_access_status[]={
  { .uname  = "LS_RD_BLK_C_S",
    .udesc  = "Load/Store ReadBlock C/S hit",
    .ucode  = 0x80,
  },
  { .uname  = "LS_RD_BLK_L_HIT_X",
    .udesc  = "Load/Store Readblock L hit eXclusive.",
    .ucode  = 0x40,
  },
  { .uname  = "LS_RD_BLK_L_HIT_S",
    .udesc  = "Load/Store ReadBlock L hit Shared.",
    .ucode  = 0x20,
  },
  { .uname  = "LS_RD_BLK_X",
    .udesc  = "Load/Store ReadblockX/ChangeToX hit eXclusive.",
    .ucode  = 0x10,
  },
  { .uname  = "LS_RD_BLK_C",
    .udesc  = "Load/Store ReadBlock C S L X Change To X Miss.",
    .ucode  = 0x8,
  },
  { .uname  = "IC_FILL_HIT_X",
    .udesc  = "Icache fill hit eXclusive.",
    .ucode  = 0x4,
  },
  { .uname  = "IC_FILL_HIT_S",
    .udesc  = "Icache fill hit Shared.",
    .ucode  = 0x2,
  },
  { .uname  = "IC_FILL_MISS",
    .udesc  = "Icache fill miss.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_cycles_with_fill_pending_from_l2[]={
  { .uname  = "L2_FILL_BUSY",
   .udesc  = "TBD",
    .ucode  = 0x1,
    .uflags = AMD64_FL_DFL,
  },
};

static const amd64_umask_t amd64_fam17h_l2_latency[]={
  { .uname  = "L2_CYCLES_WAITING_ON_FILLS",
    .udesc  = "TBD",
    .ucode  = 0x1,
    .uflags = AMD64_FL_DFL,
  },
};

static const amd64_umask_t amd64_fam17h_requests_to_l2_group1[]={
  { .uname  = "RD_BLK_L",
    .udesc  = "TBD",
    .ucode  = 0x80,
  },
  { .uname  = "RD_BLK_X",
    .udesc  = "TBD",
    .ucode  = 0x40,
  },
  { .uname  = "LS_RD_BLK_C_S",
    .udesc  = "TBD",
    .ucode  = 0x20,
  },
  { .uname  = "CACHEABLE_IC_READ",
    .udesc  = "TBD",
    .ucode  = 0x10,
  },
  { .uname  = "CHANGE_TO_X",
    .udesc  = "TBD",
    .ucode  = 0x8,
  },
  { .uname  = "PREFETCH_L2",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "L2_HW_PF",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "OTHER_REQUESTS",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_requests_to_l2_group2[]={
  { .uname  = "GROUP1",
    .udesc  = "TBD",
    .ucode  = 0x80,
  },
  { .uname  = "LS_RD_SIZED",
    .udesc  = "TBD",
    .ucode  = 0x40,
  },
  { .uname  = "LS_RD_SIZED_N_C",
    .udesc  = "TBD",
    .ucode  = 0x20,
  },
  { .uname  = "IC_RD_SIZED",
    .udesc  = "TBD",
    .ucode  = 0x10,
  },
  { .uname  = "IC_RD_SIZED_N_C",
    .udesc  = "TBD",
    .ucode  = 0x8,
  },
  { .uname  = "SMC_INVAL",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "BUS_LOCKS_ORIGINATOR",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "BUS_LOCKS_RESPONSES",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_ls_to_l2_wbc_requests[]={
  { .uname  = "WCB_WRITE",
    .udesc  = "TBD",
    .ucode  = 0x40,
  },
  { .uname  = "WCB_CLOSE",
    .udesc  = "TBD",
    .ucode  = 0x20,
  },
  { .uname  = "CACHE_LINE_FLUSH",
    .udesc  = "TBD",
    .ucode  = 0x10,
  },
  { .uname  = "I_LINE_FLUSH",
    .udesc  = "TBD",
    .ucode  = 0x8,
  },
  { .uname  = "ZERO_BYTE_STORE",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "LOCAL_IC_CLR",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "C_L_ZERO",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_ls_dispatch[]={
  { .uname  = "LD_ST_DISPATCH",
    .udesc  = "Load/Store uops dispatched.",
    .ucode  = 0x4,
  },
  { .uname  = "STORE_DISPATCH",
    .udesc  = "Store uops dispatched.",
    .ucode  = 0x2,
  },
  { .uname  = "LD_DISPATCH",
    .udesc  = "Load uops dispatched.",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_ineffective_software_prefetch[]={
  { .uname  = "MAB_MCH_CNT",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "DATA_PIPE_SW_PF_DC_HIT",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_l1_dtlb_miss[]={
  { .uname  = "TLB_RELOAD_1G_L2_MISS",
    .udesc  = "TBD",
    .ucode  = 0x80,
  },
  { .uname  = "TLB_RELOAD_2M_L2_MISS",
    .udesc  = "TBD",
    .ucode  = 0x40,
  },
  { .uname  = "TLB_RELOAD_COALESCED_PAGE_MISS",
    .udesc  = "TBD",
    .ucode  = 0x20,
  },
  { .uname  = "TLB_RELOAD_4K_L2_MISS",
    .udesc  = "TBD",
    .ucode  = 0x10,
  },
  { .uname  = "TLB_RELOAD_1G_L2_HIT",
    .udesc  = "TBD",
    .ucode  = 0x8,
  },
  { .uname  = "TLB_RELOAD_2M_L2_HIT",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "TLB_RELOAD_COALESCED_PAGE_HIT",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "TLB_RELOAD_4K_L2_HIT",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_locks[]={
  { .uname  = "SPEC_LOCK_MAP_COMMIT",
    .udesc  = "TBD",
    .ucode  = 0x8,
  },
  { .uname  = "SPEC_LOCK",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "NON_SPEC_LOCK",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "BUS_LOCK",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_mab_allocation_by_pipe[]={
  { .uname  = "TLB_PIPE_EARLY",
    .udesc  = "TBD",
    .ucode  = 0x10,
  },
  { .uname  = "HW_PF",
    .udesc  = "hw_pf",
    .ucode  = 0x8,
  },
  { .uname  = "TLB_PIPE_LATE",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "ST_PIPE",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "DATA_PIPE",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_prefetch_instructions_dispatched[]={
  { .uname  = "PREFETCH_NTA",
    .udesc  = "Non-temporal prefetches.",
    .ucode  = 0x4,
  },
  { .uname  = "STORE_PREFETCH_W",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "LOAD_PREFETCH_W",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_tablewalker_allocation[]={
  { .uname  = "ALLOC_ISIDE1",
    .udesc  = "TBD",
    .ucode  = 0x8,
  },
  { .uname  = "ALLOC_ISIDE0",
    .udesc  = "TBD",
    .ucode  = 0x4,
  },
  { .uname  = "ALLOC_DSIDE1",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "ALLOC_DSIDE0",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_oc_mode_switch[]={
  { .uname  = "OC_IC_MODE_SWITCH",
    .udesc  = "TBD",
    .ucode  = 0x2,
  },
  { .uname  = "IC_OC_MODE_SWITCH",
    .udesc  = "TBD",
    .ucode  = 0x1,
  },
};

static const amd64_umask_t amd64_fam17h_dynamic_tokens_dispatch_stall_cycles_0[]={
  { .uname  = "RETIRE_TOKEN_STALL",
    .udesc  = "Retire tokens unavailable",
    .ucode  = 0x40,
  },
  { .uname  = "AGSQ_TOKEN_STALL",
    .udesc  = "AGSQ tokens unavailable",
    .ucode  = 0x20,
  },
  { .uname  = "ALU_TOKEN_STALL",
    .udesc  = "ALU tokens unavailable",
    .ucode  = 0x10,
  },
  { .uname  = "ALSQ3_0_TOKEN_STALL",
    .udesc  = "TBD",
    .ucode  = 0x8,
  },
  { .uname  = "ALSQ3_TOKEN_STALL",
    .udesc  = "ALSQ3 tokens unavailable",
    .ucode  = 0x4,
  },
  { .uname  = "ALSQ2_TOKEN_STALL",
    .udesc  = "ALSQ2 tokens unavailable",
    .ucode  = 0x2,
  },
  { .uname  = "ALSQ1_TOKEN_STALL",
    .udesc  = "ALSQ1 tokens unavailable",
    .ucode  = 0x1,
  },
};

static const amd64_entry_t amd64_fam17h_pe[]={
  { .name   = "L1_ITLB_MISS_L2_ITLB_HIT",
    .desc   = "The number of instruction fetches that miss in the L1 ITLB but hit in the L2 ITLB.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x84,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "L1_ITLB_MISS_L2_ITLB_MISS",
    .desc   = "The number of instruction fetches that miss in both the L1 and L2 TLBs.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x85,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_l1_itlb_miss_l2_itlb_miss),
    .umasks = amd64_fam17h_l1_itlb_miss_l2_itlb_miss,
  },
  { .name   = "PIPELINE_RESTART_DUE_TO_INSTRUCTION_STREAM_PROBE",
    .desc   = "The number of pipeline restarts caused by invalidating probes that hit on the instruction stream currently being executed. This would happen if the active instruction stream was being modified by another processor in an MP system - typically a highly unlikely event.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x86,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "ITLB_RELOADS",
    .desc   = "The number of ITLB reload requests.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x99,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "DIV_CYCLES_BUSY_COUNT",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xd3,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "DIV_OP_COUNT",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xd4,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_BRANCH_INSTRUCTIONS",
    .desc   = "The number of branch instructions retired. This includes all types of architectural control flow changes, including exceptions and interrupts.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc2,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_FAR_CONTROL_TRANSFERS",
    .desc   = "The number of far control transfers retired including far call/jump/return, IRET, SYSCALL and SYSRET, plus exceptions and interrupts. Far control transfers are not subject to branch prediction.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc6,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_INDIRECT_BRANCH_INSTRUCTIONS_MISPREDICTED",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xca,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_BRANCH_INSTRUCTIONS_MISPREDICTED",
    .desc   = "The number of branch instructions retired, of any type, that were not correctly predicted. This includes those for which prediction is not attempted (far control transfers, exceptions and interrupts).",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc3,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_BRANCH_RESYNCS",
    .desc   = "The number of resync branches. These reflect pipeline restarts due to certain microcode assists and events such as writes to the active instruction stream, among other things. Each occurrence reflects a restart penalty similar to a branch mispredict. This is relatively rare.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc7,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_TAKEN_BRANCH_INSTRUCTIONS",
    .desc   = "The number of taken branches that were retired. This includes all types of architectural control flow changes, including exceptions and interrupts.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc4,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_TAKEN_BRANCH_INSTRUCTIONS_MISPREDICTED",
    .desc   = "The number of retired taken branch instructions that were mispredicted.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc5,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_CONDITIONAL_BRANCH_INSTRUCTIONS",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xd1,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_CONDITIONAL_BRANCH_INSTRUCTIONS_MISPREDICTED",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xd2,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_UOPS",
    .desc   = "The number of uops retired. This includes all processor activity (instructions, exceptions, interrupts, microcode assists, etc.). The number of events logged per cycle can vary from 0 to 4.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc1,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_FUSED_BRANCH_INSTRUCTIONS",
    .desc   = "The number of fused retired branch instructions retired per cycle. The number of events logged per cycle can vary from 0 to 3.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x1d0,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_INSTRUCTIONS",
    .desc   = "Instructions Retired.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc0,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_MMX_FP_INSTRUCTIONS",
    .desc   = "The number of MMX, SSE or x87 instructions retired. The UnitMask allows the selection of the individual classes of instructions as given in the table. Each increment represents one complete instruction. Since this event includes non-numeric instructions it is not suitable for measuring MFLOPS.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xcb,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_retired_mmx_fp_instructions),
    .umasks = amd64_fam17h_retired_mmx_fp_instructions,
  },
  { .name   = "RETIRED_NEAR_RETURNS",
    .desc   = "The number of near return instructions (RET or RETI) retired.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc8,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "RETIRED_NEAR_RETURNS_MISPREDICTED",
    .desc   = "The number of near returns retired that were not correctly predicted by the return address predictor. Each such mispredict incurs the same penalty as a mispredicted conditional branch instruction.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xc9,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "TAGGED_IBS_OPS",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x1cf,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_tagged_ibs_ops),
    .umasks = amd64_fam17h_tagged_ibs_ops,
  },
  { .name   = "NUMBER_OF_MOVE_ELIMINATION_AND_SCALAR_OP_OPTIMIZATION",
    .desc   = "This is a dispatch based speculative event. It is useful for measuring the effectiveness of the Move elimination and Scalar code optimization schemes.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x4,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_number_of_move_elimination_and_scalar_op_optimization),
    .umasks = amd64_fam17h_number_of_move_elimination_and_scalar_op_optimization,
  },
  { .name   = "RETIRED_SSE_AVX_OPERATIONS",
    .desc   = "This is a retire-based event. The number of retired SSE/AVX FLOPS. The number of events logged per cycle can vary from 0 to 64. This event can count above 15.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x3,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_retired_sse_avx_operations),
    .umasks = amd64_fam17h_retired_sse_avx_operations,
  },
  { .name   = "RETIRED_SERIALIZING_OPS",
    .desc   = "The number of serializing Ops retired.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x5,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_retired_serializing_ops),
    .umasks = amd64_fam17h_retired_serializing_ops,
  },
  { .name   = "RETIRED_X87_FLOATING_POINT_OPERATIONS",
    .desc   = "The number of x87 floating-point Ops that have retired. The number of events logged per cycle can vary from 0 to 8.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x2,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_retired_x87_floating_point_operations),
    .umasks = amd64_fam17h_retired_x87_floating_point_operations,
  },
  { .name   = "FP_SCHEDULER_EMPTY",
    .desc   = "This is a speculative event. The number of cycles in which the FPU scheduler is empty. Note that some Ops like FP loads bypass the scheduler. Invert this to count cycles in which at least one FPU operation is present in the FPU.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x1,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "FPU_PIPE_ASSIGNMENT",
    .desc   = "The number of operations (uOps) and dual-pipe uOps dispatched to each of the 4 FPU execution pipelines. This event reflects how busy the FPU pipelines are and may be used for workload characterization. This includes all operations performed by x87, MMX, and SSE instructions, including moves. Each increment represents a one-cycle dispatch event. This event is a speculative event. (See Core::X86::Pmc::Core::ExRetMmxFpInstr). Since this event includes non-numeric operations it is not suitable for measuring MFLOPS.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x0,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_fpu_pipe_assignment),
    .umasks = amd64_fam17h_fpu_pipe_assignment,
  },
  { .name   = "INSTRUCTION_CACHE_REFILLS_FROM_L2",
    .desc   = "The number of 64-byte instruction cachelines that was fulfilled by the L2 cache.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x82,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "INSTRUCTION_CACHE_REFILLS_FROM_SYSTEM",
    .desc   = "The number of 64-byte instruction cachelines fulfilled from system memory or another cache.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x83,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "INSTRUCTION_CACHE_LINES_INVALIDATED",
    .desc   = "The number of instruction cachelines invalidated. A non-SMC event is CMC (cross modifying code), either from the other thread of the core or another core.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x8c,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_instruction_cache_lines_invalidated),
    .umasks = amd64_fam17h_instruction_cache_lines_invalidated,
  },
  { .name   = "INSTRUCTION_PIPE_STALL",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x87,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_instruction_pipe_stall),
    .umasks = amd64_fam17h_instruction_pipe_stall,
  },
  { .name   = "32_BYTE_INSTRUCTION_CACHE_FETCH",
    .desc   = "The number of 32B fetch windows transferred from IC pipe to DE instruction decoder (includes non-cacheable and cacheable fill responses).",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x80,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "32_BYTE_INSTRUCTION_CACHE_MISSES",
    .desc   = "The number of 32B fetch windows tried to read the L1 IC and missed in the full tag.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x81,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "CORE_TO_L2_CACHEABLE_REQUEST_ACCESS_STATUS",
    .desc   = "This event does not count accesses to the L2 cache by the L2 prefetcher, but it does count accesses by the L1 prefetcher.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x64,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_core_to_l2_cacheable_request_access_status),
    .umasks = amd64_fam17h_core_to_l2_cacheable_request_access_status,
  },
  { .name   = "CYCLES_WITH_FILL_PENDING_FROM_L2",
    .desc   = "Total cycles spent with one or more fill requests in flight from L2.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x6d,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_cycles_with_fill_pending_from_l2),
    .umasks = amd64_fam17h_cycles_with_fill_pending_from_l2,
  },
  { .name   = "L2_LATENCY",
    .desc   = "Total cycles spent waiting for L2 fills to complete from L3 or memory, divided by four. This may be used to calculate average latency by multiplying this count by four and then dividing by the total number of L2 fills (umask L2RequestG1). Event counts are for both threads. To calculate average latency, the number of fills from both threads must be used.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x62,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_l2_latency),
    .umasks = amd64_fam17h_l2_latency,
  },
  { .name   = "REQUESTS_TO_L2_GROUP1",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x60,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_requests_to_l2_group1),
    .umasks = amd64_fam17h_requests_to_l2_group1,
  },
  { .name   = "REQUESTS_TO_L2_GROUP2",
    .desc   = "Multi-events in that LS and IF requests can be received simultaneous.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x61,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_requests_to_l2_group2),
    .umasks = amd64_fam17h_requests_to_l2_group2,
  },
  { .name   = "LS_TO_L2_WBC_REQUESTS",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x63,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_ls_to_l2_wbc_requests),
    .umasks = amd64_fam17h_ls_to_l2_wbc_requests,
  },
  { .name   = "DATA_CACHE_ACCESSES",
    .desc   = "The number of accesses to the data cache for load and store references. This may include certain microcode scratchpad accesses, although these are generally rare. Each increment represents an eight-byte access, although the instruction may only be accessing a portion of that. This event is a speculative event.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x40,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "LS_DISPATCH",
    .desc   = "Counts the number of operations dispatched to the LS unit. Unit Masks ADDed.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x29,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_ls_dispatch),
    .umasks = amd64_fam17h_ls_dispatch,
  },
  { .name   = "INEFFECTIVE_SOFTWARE_PREFETCH",
    .desc   = "The number of software prefetches that did not fetch data outside of the processor core.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x52,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_ineffective_software_prefetch),
    .umasks = amd64_fam17h_ineffective_software_prefetch,
  },
  { .name   = "L1_DTLB_MISS",
    .desc   = "L1 Data TLB misses.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x45,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_l1_dtlb_miss),
    .umasks = amd64_fam17h_l1_dtlb_miss,
  },
  { .name   = "LOCKS",
    .desc   = "Lock operations. Unit masks ORed",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x25,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_locks),
    .umasks = amd64_fam17h_locks,
  },
  { .name   = "MAB_ALLOCATION_BY_PIPE",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x41,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_mab_allocation_by_pipe),
    .umasks = amd64_fam17h_mab_allocation_by_pipe,
  },
  { .name   = "MISALIGNED_LOADS",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x47,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "CYCLES_NOT_IN_HALT",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x76,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "PREFETCH_INSTRUCTIONS_DISPATCHED",
    .desc   = "Software Prefetch Instructions Dispatched.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x4b,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_prefetch_instructions_dispatched),
    .umasks = amd64_fam17h_prefetch_instructions_dispatched,
  },
  { .name   = "STORE_TO_LOAD_FORWARD",
    .desc   = "Number of STore Lad Forward hits.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x35,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "TABLEWALKER_ALLOCATION",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x46,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_tablewalker_allocation),
    .umasks = amd64_fam17h_tablewalker_allocation,
  },
  { .name   = "L1_BTB_CORRECTION",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x8a,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "L2_BTB_CORRECTION",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x8b,
    .flags   = 0,
    .ngrp    = 0,
  },
  { .name   = "OC_MODE_SWITCH",
    .desc   = "TBD",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0x28a,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_oc_mode_switch),
    .umasks = amd64_fam17h_oc_mode_switch,
  },
  { .name   = "DYNAMIC_TOKENS_DISPATCH_STALLS_CYCLES_0",
    .desc   = "Cycles where a dispatch group is valid but does not get dispatched due to a token stall.",
    .modmsk  = AMD64_FAM17H_ATTRS,
    .code    = 0xaf,
    .flags   = 0,
    .ngrp    = 1,
    .numasks = LIBPFM_ARRAY_SIZE(amd64_fam17h_dynamic_tokens_dispatch_stall_cycles_0),
    .umasks = amd64_fam17h_dynamic_tokens_dispatch_stall_cycles_0,
  },
};
