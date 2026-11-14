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

// Function: sub_0049A068
// Address: 0x49a068 - 0x49a148
void sub_0049A068_0x49a068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A068_0x49a068");
#endif

    switch (ctx->pc) {
        case 0x49a068u: goto label_49a068;
        case 0x49a06cu: goto label_49a06c;
        case 0x49a070u: goto label_49a070;
        case 0x49a074u: goto label_49a074;
        case 0x49a078u: goto label_49a078;
        case 0x49a07cu: goto label_49a07c;
        case 0x49a080u: goto label_49a080;
        case 0x49a084u: goto label_49a084;
        case 0x49a088u: goto label_49a088;
        case 0x49a08cu: goto label_49a08c;
        case 0x49a090u: goto label_49a090;
        case 0x49a094u: goto label_49a094;
        case 0x49a098u: goto label_49a098;
        case 0x49a09cu: goto label_49a09c;
        case 0x49a0a0u: goto label_49a0a0;
        case 0x49a0a4u: goto label_49a0a4;
        case 0x49a0a8u: goto label_49a0a8;
        case 0x49a0acu: goto label_49a0ac;
        case 0x49a0b0u: goto label_49a0b0;
        case 0x49a0b4u: goto label_49a0b4;
        case 0x49a0b8u: goto label_49a0b8;
        case 0x49a0bcu: goto label_49a0bc;
        case 0x49a0c0u: goto label_49a0c0;
        case 0x49a0c4u: goto label_49a0c4;
        case 0x49a0c8u: goto label_49a0c8;
        case 0x49a0ccu: goto label_49a0cc;
        case 0x49a0d0u: goto label_49a0d0;
        case 0x49a0d4u: goto label_49a0d4;
        case 0x49a0d8u: goto label_49a0d8;
        case 0x49a0dcu: goto label_49a0dc;
        case 0x49a0e0u: goto label_49a0e0;
        case 0x49a0e4u: goto label_49a0e4;
        case 0x49a0e8u: goto label_49a0e8;
        case 0x49a0ecu: goto label_49a0ec;
        case 0x49a0f0u: goto label_49a0f0;
        case 0x49a0f4u: goto label_49a0f4;
        case 0x49a0f8u: goto label_49a0f8;
        case 0x49a0fcu: goto label_49a0fc;
        case 0x49a100u: goto label_49a100;
        case 0x49a104u: goto label_49a104;
        case 0x49a108u: goto label_49a108;
        case 0x49a10cu: goto label_49a10c;
        case 0x49a110u: goto label_49a110;
        case 0x49a114u: goto label_49a114;
        case 0x49a118u: goto label_49a118;
        case 0x49a11cu: goto label_49a11c;
        case 0x49a120u: goto label_49a120;
        case 0x49a124u: goto label_49a124;
        case 0x49a128u: goto label_49a128;
        case 0x49a12cu: goto label_49a12c;
        case 0x49a130u: goto label_49a130;
        case 0x49a134u: goto label_49a134;
        case 0x49a138u: goto label_49a138;
        case 0x49a13cu: goto label_49a13c;
        case 0x49a140u: goto label_49a140;
        case 0x49a144u: goto label_49a144;
        default: break;
    }

    ctx->pc = 0x49a068u;

label_49a068:
    // 0x49a068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49a06c:
    // 0x49a06c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49a070:
    // 0x49a070: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49a074:
    // 0x49a074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a078:
    // 0x49a078: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49a078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49a07c:
    // 0x49a07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49a080:
    // 0x49a080: 0xc12a448  jal         func_4A9120
label_49a084:
    if (ctx->pc == 0x49A084u) {
        ctx->pc = 0x49A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A080u;
        // 0x49a084: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A088u;
        goto label_49a088;
    }
    ctx->pc = 0x49A080u;
    SET_GPR_U32(ctx, 31, 0x49A088u);
    ctx->pc = 0x49A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A080u;
    // 0x49a084: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x49A080u, 0x49A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A088u;
label_49a088:
    // 0x49a088: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x49a088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49a08c:
    // 0x49a08c: 0xc12a47e  jal         func_4A91F8
label_49a090:
    if (ctx->pc == 0x49A090u) {
        ctx->pc = 0x49A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A08Cu;
        // 0x49a090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A094u;
        goto label_49a094;
    }
    ctx->pc = 0x49A08Cu;
    SET_GPR_U32(ctx, 31, 0x49A094u);
    ctx->pc = 0x49A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A08Cu;
    // 0x49a090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49A08Cu, 0x49A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A094u;
label_49a094:
    // 0x49a094: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49a094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a098:
    // 0x49a098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a09c:
    // 0x49a09c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49a09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a0a0:
    // 0x49a0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a0a4:
    // 0x49a0a4: 0x3e00008  jr          $ra
label_49a0a8:
    if (ctx->pc == 0x49A0A8u) {
        ctx->pc = 0x49A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0A4u;
        // 0x49a0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A0ACu;
        goto label_49a0ac;
    }
    ctx->pc = 0x49A0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0A4u;
        // 0x49a0a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A0ACu;
label_49a0ac:
    // 0x49a0ac: 0x0  nop
    ctx->pc = 0x49a0acu;
    // NOP
label_49a0b0:
    // 0x49a0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49a0b4:
    // 0x49a0b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_49a0b8:
    // 0x49a0b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49a0bc:
    // 0x49a0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a0c0:
    // 0x49a0c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x49a0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49a0c4:
    // 0x49a0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49a0c8:
    // 0x49a0c8: 0xc12a424  jal         func_4A9090
label_49a0cc:
    if (ctx->pc == 0x49A0CCu) {
        ctx->pc = 0x49A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0C8u;
        // 0x49a0cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A0D0u;
        goto label_49a0d0;
    }
    ctx->pc = 0x49A0C8u;
    SET_GPR_U32(ctx, 31, 0x49A0D0u);
    ctx->pc = 0x49A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A0C8u;
    // 0x49a0cc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x49A0C8u, 0x49A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A0D0u;
label_49a0d0:
    // 0x49a0d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_49a0d4:
    if (ctx->pc == 0x49A0D4u) {
        ctx->pc = 0x49A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0D0u;
        // 0x49a0d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A0D8u;
        goto label_49a0d8;
    }
    ctx->pc = 0x49A0D0u;
    {
        const bool branch_taken_0x49a0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0D0u;
        // 0x49a0d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a0d0) {
            ctx->pc = 0x49A0F0u;
            goto label_49a0f0;
        }
    }
    ctx->pc = 0x49A0D8u;
label_49a0d8:
    // 0x49a0d8: 0xc12a45c  jal         func_4A9170
label_49a0dc:
    if (ctx->pc == 0x49A0DCu) {
        ctx->pc = 0x49A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0D8u;
        // 0x49a0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A0E0u;
        goto label_49a0e0;
    }
    ctx->pc = 0x49A0D8u;
    SET_GPR_U32(ctx, 31, 0x49A0E0u);
    ctx->pc = 0x49A0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A0D8u;
    // 0x49a0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x49A0D8u, 0x49A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A0E0u;
label_49a0e0:
    // 0x49a0e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_49a0e4:
    if (ctx->pc == 0x49A0E4u) {
        ctx->pc = 0x49A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0E0u;
        // 0x49a0e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A0E8u;
        goto label_49a0e8;
    }
    ctx->pc = 0x49A0E0u;
    {
        const bool branch_taken_0x49a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0E0u;
        // 0x49a0e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a0e0) {
            ctx->pc = 0x49A0F4u;
            goto label_49a0f4;
        }
    }
    ctx->pc = 0x49A0E8u;
label_49a0e8:
    // 0x49a0e8: 0xc12a492  jal         func_4A9248
label_49a0ec:
    if (ctx->pc == 0x49A0ECu) {
        ctx->pc = 0x49A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A0E8u;
        // 0x49a0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A0F0u;
        goto label_49a0f0;
    }
    ctx->pc = 0x49A0E8u;
    SET_GPR_U32(ctx, 31, 0x49A0F0u);
    ctx->pc = 0x49A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A0E8u;
    // 0x49a0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x49A0E8u, 0x49A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A0F0u;
label_49a0f0:
    // 0x49a0f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49a0f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a0f4:
    // 0x49a0f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49a0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a0f8:
    // 0x49a0f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49a0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a0fc:
    // 0x49a0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a100:
    // 0x49a100: 0x3e00008  jr          $ra
label_49a104:
    if (ctx->pc == 0x49A104u) {
        ctx->pc = 0x49A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A100u;
        // 0x49a104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A108u;
        goto label_49a108;
    }
    ctx->pc = 0x49A100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A100u;
        // 0x49a104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A108u;
label_49a108:
    // 0x49a108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49a10c:
    // 0x49a10c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_49a110:
    // 0x49a110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49a114:
    // 0x49a114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49a118:
    // 0x49a118: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x49a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_49a11c:
    // 0x49a11c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49a120:
    if (ctx->pc == 0x49A120u) {
        ctx->pc = 0x49A124u;
        goto label_49a124;
    }
    ctx->pc = 0x49A11Cu;
    {
        const bool branch_taken_0x49a11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a11c) {
            ctx->pc = 0x49A12Cu;
            goto label_49a12c;
        }
    }
    ctx->pc = 0x49A124u;
label_49a124:
    // 0x49a124: 0x10000004  b           . + 4 + (0x4 << 2)
label_49a128:
    if (ctx->pc == 0x49A128u) {
        ctx->pc = 0x49A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A124u;
        // 0x49a128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A12Cu;
        goto label_49a12c;
    }
    ctx->pc = 0x49A124u;
    {
        const bool branch_taken_0x49a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A124u;
        // 0x49a128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a124) {
            ctx->pc = 0x49A138u;
            goto label_49a138;
        }
    }
    ctx->pc = 0x49A12Cu;
label_49a12c:
    // 0x49a12c: 0x40f809  jalr        $v0
label_49a130:
    if (ctx->pc == 0x49A130u) {
        ctx->pc = 0x49A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A12Cu;
        // 0x49a130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A134u;
        goto label_49a134;
    }
    ctx->pc = 0x49A12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49A134u);
        ctx->pc = 0x49A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A12Cu;
        // 0x49a130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A12Cu, 0x49A134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49A134u;
label_49a134:
    // 0x49a134: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49a134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a138:
    // 0x49a138: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49a138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a13c:
    // 0x49a13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a140:
    // 0x49a140: 0x3e00008  jr          $ra
label_49a144:
    if (ctx->pc == 0x49A144u) {
        ctx->pc = 0x49A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A140u;
        // 0x49a144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A148u;
        goto label_fallthrough_0x49a140;
    }
    ctx->pc = 0x49A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A140u;
        // 0x49a144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x49a140:
    ctx->pc = 0x49A148u;
}
