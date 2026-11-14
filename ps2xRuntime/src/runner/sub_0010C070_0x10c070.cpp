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

// Function: sub_0010C070
// Address: 0x10c070 - 0x10c140
void sub_0010C070_0x10c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C070_0x10c070");
#endif

    switch (ctx->pc) {
        case 0x10c098u: goto label_10c098;
        case 0x10c0b0u: goto label_10c0b0;
        case 0x10c0d0u: goto label_10c0d0;
        case 0x10c0e4u: goto label_10c0e4;
        case 0x10c0f8u: goto label_10c0f8;
        case 0x10c108u: goto label_10c108;
        case 0x10c124u: goto label_10c124;
        default: break;
    }

    ctx->pc = 0x10c070u;

    // 0x10c070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10c074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10c07c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10c080: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10c080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10c084: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10c084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10c088: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x10c088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c08c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c090: 0xc043104  jal         func_10C410
    ctx->pc = 0x10C090u;
    SET_GPR_U32(ctx, 31, 0x10C098u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x10C090u, 0x10C098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C098u;
label_10c098:
    // 0x10c098: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x10c098u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10c09c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x10C09Cu;
    {
        const bool branch_taken_0x10c09c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c09c) {
            ctx->pc = 0x10C0ECu;
            goto label_10c0ec;
        }
    }
    ctx->pc = 0x10C0A4u;
    // 0x10c0a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c0a8: 0xc043000  jal         func_10C000
    ctx->pc = 0x10C0A8u;
    SET_GPR_U32(ctx, 31, 0x10C0B0u);
    ctx->pc = 0x10C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C000u, 0x10C0A8u, 0x10C0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0B0u;
label_10c0b0:
    // 0x10c0b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c0b4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x10c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x10c0b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10c0bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10c0c0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x10c0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10c0c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c0c8: 0xc0430fc  jal         func_10C3F0
    ctx->pc = 0x10C0C8u;
    SET_GPR_U32(ctx, 31, 0x10C0D0u);
    ctx->pc = 0x10C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3F0u, 0x10C0C8u, 0x10C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0D0u;
label_10c0d0:
    // 0x10c0d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c0d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10c0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0dc: 0xc043060  jal         func_10C180
    ctx->pc = 0x10C0DCu;
    SET_GPR_U32(ctx, 31, 0x10C0E4u);
    ctx->pc = 0x10C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C180u, 0x10C0DCu, 0x10C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0E4u;
label_10c0e4:
    // 0x10c0e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10C0E4u;
    {
        const bool branch_taken_0x10c0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c0e4) {
            ctx->pc = 0x10C124u;
            goto label_10c124;
        }
    }
    ctx->pc = 0x10C0ECu;
label_10c0ec:
    // 0x10c0ec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c0f0: 0xc0430fc  jal         func_10C3F0
    ctx->pc = 0x10C0F0u;
    SET_GPR_U32(ctx, 31, 0x10C0F8u);
    ctx->pc = 0x10C3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C3F0u, 0x10C0F0u, 0x10C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0F8u;
label_10c0f8:
    // 0x10c0f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c100: 0xc043104  jal         func_10C410
    ctx->pc = 0x10C100u;
    SET_GPR_U32(ctx, 31, 0x10C108u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x10C100u, 0x10C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C108u;
label_10c108:
    // 0x10c108: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10c108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c10c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x10c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c110: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c114: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c118: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x10c118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c11c: 0xc043050  jal         func_10C140
    ctx->pc = 0x10C11Cu;
    SET_GPR_U32(ctx, 31, 0x10C124u);
    ctx->pc = 0x10C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C140u, 0x10C11Cu, 0x10C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C124u;
label_10c124:
    // 0x10c124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c12c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x10c12cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x10c130: 0x3e00008  jr          $ra
    ctx->pc = 0x10C130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C138u;
    // 0x10c138: 0x0  nop
    ctx->pc = 0x10c138u;
    // NOP
    // 0x10c13c: 0x0  nop
    ctx->pc = 0x10c13cu;
    // NOP
    ctx->pc = 0x10c140u;
}
