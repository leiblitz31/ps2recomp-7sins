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

// Function: sub_00210CB0
// Address: 0x210cb0 - 0x210d80
void sub_00210CB0_0x210cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210CB0_0x210cb0");
#endif

    switch (ctx->pc) {
        case 0x210cd8u: goto label_210cd8;
        case 0x210cf0u: goto label_210cf0;
        case 0x210d10u: goto label_210d10;
        case 0x210d24u: goto label_210d24;
        case 0x210d38u: goto label_210d38;
        case 0x210d48u: goto label_210d48;
        case 0x210d64u: goto label_210d64;
        default: break;
    }

    ctx->pc = 0x210cb0u;

    // 0x210cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x210cbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x210cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x210cc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x210cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x210cc4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x210cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x210cc8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x210cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210ccc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210cd0: 0xc060260  jal         func_180980
    ctx->pc = 0x210CD0u;
    SET_GPR_U32(ctx, 31, 0x210CD8u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x210CD0u, 0x210CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CD8u;
label_210cd8:
    // 0x210cd8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x210cd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x210cdc: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x210CDCu;
    {
        const bool branch_taken_0x210cdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cdc) {
            ctx->pc = 0x210D2Cu;
            goto label_210d2c;
        }
    }
    ctx->pc = 0x210CE4u;
    // 0x210ce4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210ce8: 0xc084310  jal         func_210C40
    ctx->pc = 0x210CE8u;
    SET_GPR_U32(ctx, 31, 0x210CF0u);
    ctx->pc = 0x210C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210C40u, 0x210CE8u, 0x210CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210CF0u;
label_210cf0:
    // 0x210cf0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x210cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210cf4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x210cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x210cf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x210cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x210cfc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x210cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x210d00: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x210d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210d04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210d08: 0xc0843c0  jal         func_210F00
    ctx->pc = 0x210D08u;
    SET_GPR_U32(ctx, 31, 0x210D10u);
    ctx->pc = 0x210F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F00u, 0x210D08u, 0x210D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D10u;
label_210d10:
    // 0x210d10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x210d18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d1c: 0xc084370  jal         func_210DC0
    ctx->pc = 0x210D1Cu;
    SET_GPR_U32(ctx, 31, 0x210D24u);
    ctx->pc = 0x210DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210DC0u, 0x210D1Cu, 0x210D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D24u;
label_210d24:
    // 0x210d24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x210D24u;
    {
        const bool branch_taken_0x210d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d24) {
            ctx->pc = 0x210D64u;
            goto label_210d64;
        }
    }
    ctx->pc = 0x210D2Cu;
label_210d2c:
    // 0x210d2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210d30: 0xc0843c0  jal         func_210F00
    ctx->pc = 0x210D30u;
    SET_GPR_U32(ctx, 31, 0x210D38u);
    ctx->pc = 0x210F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210F00u, 0x210D30u, 0x210D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D38u;
label_210d38:
    // 0x210d38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210d40: 0xc060260  jal         func_180980
    ctx->pc = 0x210D40u;
    SET_GPR_U32(ctx, 31, 0x210D48u);
    ctx->pc = 0x180980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180980u, 0x210D40u, 0x210D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D48u;
label_210d48:
    // 0x210d48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x210d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210d4c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x210d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210d50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210d54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d58: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x210d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210d5c: 0xc084360  jal         func_210D80
    ctx->pc = 0x210D5Cu;
    SET_GPR_U32(ctx, 31, 0x210D64u);
    ctx->pc = 0x210D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210D80u, 0x210D5Cu, 0x210D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D64u;
label_210d64:
    // 0x210d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x210d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x210d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210d6c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x210d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x210d70: 0x3e00008  jr          $ra
    ctx->pc = 0x210D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210D78u;
    // 0x210d78: 0x0  nop
    ctx->pc = 0x210d78u;
    // NOP
    // 0x210d7c: 0x0  nop
    ctx->pc = 0x210d7cu;
    // NOP
    ctx->pc = 0x210d80u;
}
