#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B0CF0
// Address: 0x2b0cf0 - 0x2b0de0
void sub_002B0CF0_0x2b0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0CF0_0x2b0cf0");
#endif

    switch (ctx->pc) {
        case 0x2b0d14u: goto label_2b0d14;
        case 0x2b0d30u: goto label_2b0d30;
        case 0x2b0d64u: goto label_2b0d64;
        case 0x2b0d74u: goto label_2b0d74;
        case 0x2b0d94u: goto label_2b0d94;
        case 0x2b0dbcu: goto label_2b0dbc;
        default: break;
    }

    ctx->pc = 0x2b0cf0u;

    // 0x2b0cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b0cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b0cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b0cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b0cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0d00: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b0d04: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b0d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b0d08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d0c: 0xc0ac3dc  jal         func_2B0F70
    ctx->pc = 0x2B0D0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D14u);
    ctx->pc = 0x2B0F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0F70u, 0x2B0D0Cu, 0x2B0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D14u;
label_2b0d14:
    // 0x2b0d14: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2b0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0d18: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2b0d18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b0d1c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B0D1Cu;
    {
        const bool branch_taken_0x2b0d1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d1c) {
            ctx->pc = 0x2B0DBCu;
            goto label_2b0dbc;
        }
    }
    ctx->pc = 0x2B0D24u;
    // 0x2b0d24: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d28: 0xc0abf24  jal         func_2AFC90
    ctx->pc = 0x2B0D28u;
    SET_GPR_U32(ctx, 31, 0x2B0D30u);
    ctx->pc = 0x2AFC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFC90u, 0x2B0D28u, 0x2B0D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D30u;
label_2b0d30:
    // 0x2b0d30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0d3c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B0D3Cu;
    {
        const bool branch_taken_0x2b0d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d3c) {
            ctx->pc = 0x2B0D7Cu;
            goto label_2b0d7c;
        }
    }
    ctx->pc = 0x2B0D44u;
    // 0x2b0d44: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d50: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b0d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0d54: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2b0d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0d58: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2b0d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b0d5c: 0xc0ac378  jal         func_2B0DE0
    ctx->pc = 0x2B0D5Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D64u);
    ctx->pc = 0x2B0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0DE0u, 0x2B0D5Cu, 0x2B0D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D64u;
label_2b0d64:
    // 0x2b0d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d6c: 0xc0abee8  jal         func_2AFBA0
    ctx->pc = 0x2B0D6Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D74u);
    ctx->pc = 0x2AFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFBA0u, 0x2B0D6Cu, 0x2B0D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D74u;
label_2b0d74:
    // 0x2b0d74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0D74u;
    {
        const bool branch_taken_0x2b0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0d74) {
            ctx->pc = 0x2B0D98u;
            goto label_2b0d98;
        }
    }
    ctx->pc = 0x2B0D7Cu;
label_2b0d7c:
    // 0x2b0d7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0d80: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b0d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b0d84: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2b0d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d8c: 0xc0ac254  jal         func_2B0950
    ctx->pc = 0x2B0D8Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D94u);
    ctx->pc = 0x2B0950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0950u, 0x2B0D8Cu, 0x2B0D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D94u;
label_2b0d94:
    // 0x2b0d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0d98:
    // 0x2b0d98: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b0d9c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2b0d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b0da0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0da4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0da8: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x2b0da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b0dac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b0dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0db0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0db4: 0xc0abed4  jal         func_2AFB50
    ctx->pc = 0x2B0DB4u;
    SET_GPR_U32(ctx, 31, 0x2B0DBCu);
    ctx->pc = 0x2AFB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFB50u, 0x2B0DB4u, 0x2B0DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DBCu;
label_2b0dbc:
    // 0x2b0dbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b0dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0dc8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2b0dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b0dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0DD4u;
    // 0x2b0dd4: 0x0  nop
    ctx->pc = 0x2b0dd4u;
    // NOP
    // 0x2b0dd8: 0x0  nop
    ctx->pc = 0x2b0dd8u;
    // NOP
    // 0x2b0ddc: 0x0  nop
    ctx->pc = 0x2b0ddcu;
    // NOP
    ctx->pc = 0x2b0de0u;
}
