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

// Function: sub_001B1FE0
// Address: 0x1b1fe0 - 0x1b20b0
void sub_001B1FE0_0x1b1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1FE0_0x1b1fe0");
#endif

    switch (ctx->pc) {
        case 0x1b2008u: goto label_1b2008;
        case 0x1b2020u: goto label_1b2020;
        case 0x1b2040u: goto label_1b2040;
        case 0x1b2054u: goto label_1b2054;
        case 0x1b2068u: goto label_1b2068;
        case 0x1b2078u: goto label_1b2078;
        case 0x1b2094u: goto label_1b2094;
        default: break;
    }

    ctx->pc = 0x1b1fe0u;

    // 0x1b1fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b1fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b1fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1fec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b1fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b1ff0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b1ff4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b1ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b1ff8: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1b1ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1ffc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2000: 0xc06c8a8  jal         func_1B22A0
    ctx->pc = 0x1B2000u;
    SET_GPR_U32(ctx, 31, 0x1B2008u);
    ctx->pc = 0x1B22A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B22A0u, 0x1B2000u, 0x1B2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2008u;
label_1b2008:
    // 0x1b2008: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x1b2008u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b200c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B200Cu;
    {
        const bool branch_taken_0x1b200c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b200c) {
            ctx->pc = 0x1B205Cu;
            goto label_1b205c;
        }
    }
    ctx->pc = 0x1B2014u;
    // 0x1b2014: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b2014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2018: 0xc06c54c  jal         func_1B1530
    ctx->pc = 0x1B2018u;
    SET_GPR_U32(ctx, 31, 0x1B2020u);
    ctx->pc = 0x1B1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1530u, 0x1B2018u, 0x1B2020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2020u;
label_1b2020:
    // 0x1b2020: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b2020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2024: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b2024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b2028: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b2028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b202c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b202cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b2030: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1b2030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2034: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b2034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2038: 0xc06c8a0  jal         func_1B2280
    ctx->pc = 0x1B2038u;
    SET_GPR_U32(ctx, 31, 0x1B2040u);
    ctx->pc = 0x1B2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2280u, 0x1B2038u, 0x1B2040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2040u;
label_1b2040:
    // 0x1b2040: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b2040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2044: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2048: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b2048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b204c: 0xc06c83c  jal         func_1B20F0
    ctx->pc = 0x1B204Cu;
    SET_GPR_U32(ctx, 31, 0x1B2054u);
    ctx->pc = 0x1B20F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20F0u, 0x1B204Cu, 0x1B2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2054u;
label_1b2054:
    // 0x1b2054: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B2054u;
    {
        const bool branch_taken_0x1b2054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2054) {
            ctx->pc = 0x1B2094u;
            goto label_1b2094;
        }
    }
    ctx->pc = 0x1B205Cu;
label_1b205c:
    // 0x1b205c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b205cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2060: 0xc06c8a0  jal         func_1B2280
    ctx->pc = 0x1B2060u;
    SET_GPR_U32(ctx, 31, 0x1B2068u);
    ctx->pc = 0x1B2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2280u, 0x1B2060u, 0x1B2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2068u;
label_1b2068:
    // 0x1b2068: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b206c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2070: 0xc06c8a8  jal         func_1B22A0
    ctx->pc = 0x1B2070u;
    SET_GPR_U32(ctx, 31, 0x1B2078u);
    ctx->pc = 0x1B22A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B22A0u, 0x1B2070u, 0x1B2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2078u;
label_1b2078:
    // 0x1b2078: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b207c: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x1b207cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2080: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b2080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2088: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x1b2088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b208c: 0xc06c82c  jal         func_1B20B0
    ctx->pc = 0x1B208Cu;
    SET_GPR_U32(ctx, 31, 0x1B2094u);
    ctx->pc = 0x1B20B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B20B0u, 0x1B208Cu, 0x1B2094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2094u;
label_1b2094:
    // 0x1b2094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b2098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b209c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b209cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b20a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B20A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B20A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B20A8u;
    // 0x1b20a8: 0x0  nop
    ctx->pc = 0x1b20a8u;
    // NOP
    // 0x1b20ac: 0x0  nop
    ctx->pc = 0x1b20acu;
    // NOP
    ctx->pc = 0x1b20b0u;
}
