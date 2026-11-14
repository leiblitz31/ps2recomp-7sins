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

// Function: sub_001E1C70
// Address: 0x1e1c70 - 0x1e1d40
void sub_001E1C70_0x1e1c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1C70_0x1e1c70");
#endif

    switch (ctx->pc) {
        case 0x1e1c98u: goto label_1e1c98;
        case 0x1e1cb0u: goto label_1e1cb0;
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1ce4u: goto label_1e1ce4;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d24u: goto label_1e1d24;
        default: break;
    }

    ctx->pc = 0x1e1c70u;

    // 0x1e1c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e1c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e1c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1c7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e1c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e1c80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1c84: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1c88: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1e1c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1c8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1c90: 0xc078608  jal         func_1E1820
    ctx->pc = 0x1E1C90u;
    SET_GPR_U32(ctx, 31, 0x1E1C98u);
    ctx->pc = 0x1E1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1820u, 0x1E1C90u, 0x1E1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1C98u;
label_1e1c98:
    // 0x1e1c98: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1e1c98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e1c9c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E1C9Cu;
    {
        const bool branch_taken_0x1e1c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c9c) {
            ctx->pc = 0x1E1CECu;
            goto label_1e1cec;
        }
    }
    ctx->pc = 0x1E1CA4u;
    // 0x1e1ca4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1ca8: 0xc078700  jal         func_1E1C00
    ctx->pc = 0x1E1CA8u;
    SET_GPR_U32(ctx, 31, 0x1E1CB0u);
    ctx->pc = 0x1E1C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1C00u, 0x1E1CA8u, 0x1E1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CB0u;
label_1e1cb0:
    // 0x1e1cb0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1cb4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1e1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e1cb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1cbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e1cc0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1e1cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1cc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1cc8: 0xc0787c0  jal         func_1E1F00
    ctx->pc = 0x1E1CC8u;
    SET_GPR_U32(ctx, 31, 0x1E1CD0u);
    ctx->pc = 0x1E1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1F00u, 0x1E1CC8u, 0x1E1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CD0u;
label_1e1cd0:
    // 0x1e1cd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1cd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e1cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1cdc: 0xc078760  jal         func_1E1D80
    ctx->pc = 0x1E1CDCu;
    SET_GPR_U32(ctx, 31, 0x1E1CE4u);
    ctx->pc = 0x1E1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1D80u, 0x1E1CDCu, 0x1E1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CE4u;
label_1e1ce4:
    // 0x1e1ce4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E1CE4u;
    {
        const bool branch_taken_0x1e1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ce4) {
            ctx->pc = 0x1E1D24u;
            goto label_1e1d24;
        }
    }
    ctx->pc = 0x1E1CECu;
label_1e1cec:
    // 0x1e1cec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1cf0: 0xc0787c0  jal         func_1E1F00
    ctx->pc = 0x1E1CF0u;
    SET_GPR_U32(ctx, 31, 0x1E1CF8u);
    ctx->pc = 0x1E1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1F00u, 0x1E1CF0u, 0x1E1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1CF8u;
label_1e1cf8:
    // 0x1e1cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1cfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1d00: 0xc078608  jal         func_1E1820
    ctx->pc = 0x1E1D00u;
    SET_GPR_U32(ctx, 31, 0x1E1D08u);
    ctx->pc = 0x1E1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1820u, 0x1E1D00u, 0x1E1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D08u;
label_1e1d08:
    // 0x1e1d08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1d0c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1e1d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1d10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1d18: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1e1d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1d1c: 0xc078750  jal         func_1E1D40
    ctx->pc = 0x1E1D1Cu;
    SET_GPR_U32(ctx, 31, 0x1E1D24u);
    ctx->pc = 0x1E1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1D40u, 0x1E1D1Cu, 0x1E1D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D24u;
label_1e1d24:
    // 0x1e1d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1d2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1D38u;
    // 0x1e1d38: 0x0  nop
    ctx->pc = 0x1e1d38u;
    // NOP
    // 0x1e1d3c: 0x0  nop
    ctx->pc = 0x1e1d3cu;
    // NOP
    ctx->pc = 0x1e1d40u;
}
