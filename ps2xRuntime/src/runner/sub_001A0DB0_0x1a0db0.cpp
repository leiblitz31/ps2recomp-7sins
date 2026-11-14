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

// Function: sub_001A0DB0
// Address: 0x1a0db0 - 0x1a0e70
void sub_001A0DB0_0x1a0db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0DB0_0x1a0db0");
#endif

    switch (ctx->pc) {
        case 0x1a0dd8u: goto label_1a0dd8;
        case 0x1a0df0u: goto label_1a0df0;
        case 0x1a0e08u: goto label_1a0e08;
        case 0x1a0e1cu: goto label_1a0e1c;
        case 0x1a0e30u: goto label_1a0e30;
        case 0x1a0e40u: goto label_1a0e40;
        case 0x1a0e5cu: goto label_1a0e5c;
        default: break;
    }

    ctx->pc = 0x1a0db0u;

    // 0x1a0db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0dbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a0dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a0dc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a0dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a0dc4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1a0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1a0dc8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1a0dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0dcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0dd0: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x1A0DD0u;
    SET_GPR_U32(ctx, 31, 0x1A0DD8u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x1A0DD0u, 0x1A0DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0DD8u;
label_1a0dd8:
    // 0x1a0dd8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1a0dd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a0ddc: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A0DDCu;
    {
        const bool branch_taken_0x1a0ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ddc) {
            ctx->pc = 0x1A0E24u;
            goto label_1a0e24;
        }
    }
    ctx->pc = 0x1A0DE4u;
    // 0x1a0de4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a0de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0de8: 0xc04809c  jal         func_120270
    ctx->pc = 0x1A0DE8u;
    SET_GPR_U32(ctx, 31, 0x1A0DF0u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x1A0DE8u, 0x1A0DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0DF0u;
label_1a0df0:
    // 0x1a0df0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a0df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0df4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a0df8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1a0df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0dfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a0dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e00: 0xc04808c  jal         func_120230
    ctx->pc = 0x1A0E00u;
    SET_GPR_U32(ctx, 31, 0x1A0E08u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x1A0E00u, 0x1A0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E08u;
label_1a0e08:
    // 0x1a0e08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a0e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a0e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e14: 0xc0683ac  jal         func_1A0EB0
    ctx->pc = 0x1A0E14u;
    SET_GPR_U32(ctx, 31, 0x1A0E1Cu);
    ctx->pc = 0x1A0EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EB0u, 0x1A0E14u, 0x1A0E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E1Cu;
label_1a0e1c:
    // 0x1a0e1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1A0E1Cu;
    {
        const bool branch_taken_0x1a0e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0e1c) {
            ctx->pc = 0x1A0E5Cu;
            goto label_1a0e5c;
        }
    }
    ctx->pc = 0x1A0E24u;
label_1a0e24:
    // 0x1a0e24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a0e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e28: 0xc04808c  jal         func_120230
    ctx->pc = 0x1A0E28u;
    SET_GPR_U32(ctx, 31, 0x1A0E30u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x1A0E28u, 0x1A0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E30u;
label_1a0e30:
    // 0x1a0e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a0e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e38: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x1A0E38u;
    SET_GPR_U32(ctx, 31, 0x1A0E40u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x1A0E38u, 0x1A0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E40u;
label_1a0e40:
    // 0x1a0e40: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1a0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0e44: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1a0e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0e48: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a0e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a0e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e50: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1a0e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0e54: 0xc06839c  jal         func_1A0E70
    ctx->pc = 0x1A0E54u;
    SET_GPR_U32(ctx, 31, 0x1A0E5Cu);
    ctx->pc = 0x1A0E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E70u, 0x1A0E54u, 0x1A0E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E5Cu;
label_1a0e5c:
    // 0x1a0e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0e64: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a0e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a0e68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0E70u;
}
