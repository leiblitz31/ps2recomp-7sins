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

// Function: sub_0042A088
// Address: 0x42a088 - 0x42a110
void sub_0042A088_0x42a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A088_0x42a088");
#endif

    switch (ctx->pc) {
        case 0x42a088u: goto label_42a088;
        case 0x42a08cu: goto label_42a08c;
        case 0x42a090u: goto label_42a090;
        case 0x42a094u: goto label_42a094;
        case 0x42a098u: goto label_42a098;
        case 0x42a09cu: goto label_42a09c;
        case 0x42a0a0u: goto label_42a0a0;
        case 0x42a0a4u: goto label_42a0a4;
        case 0x42a0a8u: goto label_42a0a8;
        case 0x42a0acu: goto label_42a0ac;
        case 0x42a0b0u: goto label_42a0b0;
        case 0x42a0b4u: goto label_42a0b4;
        case 0x42a0b8u: goto label_42a0b8;
        case 0x42a0bcu: goto label_42a0bc;
        case 0x42a0c0u: goto label_42a0c0;
        case 0x42a0c4u: goto label_42a0c4;
        case 0x42a0c8u: goto label_42a0c8;
        case 0x42a0ccu: goto label_42a0cc;
        case 0x42a0d0u: goto label_42a0d0;
        case 0x42a0d4u: goto label_42a0d4;
        case 0x42a0d8u: goto label_42a0d8;
        case 0x42a0dcu: goto label_42a0dc;
        case 0x42a0e0u: goto label_42a0e0;
        case 0x42a0e4u: goto label_42a0e4;
        case 0x42a0e8u: goto label_42a0e8;
        case 0x42a0ecu: goto label_42a0ec;
        case 0x42a0f0u: goto label_42a0f0;
        case 0x42a0f4u: goto label_42a0f4;
        case 0x42a0f8u: goto label_42a0f8;
        case 0x42a0fcu: goto label_42a0fc;
        case 0x42a100u: goto label_42a100;
        case 0x42a104u: goto label_42a104;
        case 0x42a108u: goto label_42a108;
        case 0x42a10cu: goto label_42a10c;
        default: break;
    }

    ctx->pc = 0x42a088u;

label_42a088:
    // 0x42a088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_42a08c:
    // 0x42a08c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42a08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42a090:
    // 0x42a090: 0xc10a60c  jal         func_429830
label_42a094:
    if (ctx->pc == 0x42A094u) {
        ctx->pc = 0x42A098u;
        goto label_42a098;
    }
    ctx->pc = 0x42A090u;
    SET_GPR_U32(ctx, 31, 0x42A098u);
    ctx->pc = 0x429830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429830u, 0x42A090u, 0x42A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A098u;
label_42a098:
    // 0x42a098: 0x8f82adec  lw          $v0, -0x5214($gp)
    ctx->pc = 0x42a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946284)));
label_42a09c:
    // 0x42a09c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_42a0a0:
    if (ctx->pc == 0x42A0A0u) {
        ctx->pc = 0x42A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A09Cu;
        // 0x42a0a0: 0xaf80addc  sw          $zero, -0x5224($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0A4u;
        goto label_42a0a4;
    }
    ctx->pc = 0x42A09Cu;
    {
        const bool branch_taken_0x42a09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A09Cu;
        // 0x42a0a0: 0xaf80addc  sw          $zero, -0x5224($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a09c) {
            ctx->pc = 0x42A0B4u;
            goto label_42a0b4;
        }
    }
    ctx->pc = 0x42A0A4u;
label_42a0a4:
    // 0x42a0a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x42a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_42a0a8:
    // 0x42a0a8: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x42a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_42a0ac:
    // 0x42a0ac: 0x40f809  jalr        $v0
label_42a0b0:
    if (ctx->pc == 0x42A0B0u) {
        ctx->pc = 0x42A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0ACu;
        // 0x42a0b0: 0x8f84ade8  lw          $a0, -0x5218($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0B4u;
        goto label_42a0b4;
    }
    ctx->pc = 0x42A0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x42A0B4u);
        ctx->pc = 0x42A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0ACu;
        // 0x42a0b0: 0x8f84ade8  lw          $a0, -0x5218($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A0ACu, 0x42A0B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42A0B4u;
label_42a0b4:
    // 0x42a0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42a0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42a0b8:
    // 0x42a0b8: 0xaf80ade8  sw          $zero, -0x5218($gp)
    ctx->pc = 0x42a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946280), GPR_U32(ctx, 0));
label_42a0bc:
    // 0x42a0bc: 0xaf80adec  sw          $zero, -0x5214($gp)
    ctx->pc = 0x42a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946284), GPR_U32(ctx, 0));
label_42a0c0:
    // 0x42a0c0: 0xaf80ade0  sw          $zero, -0x5220($gp)
    ctx->pc = 0x42a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946272), GPR_U32(ctx, 0));
label_42a0c4:
    // 0x42a0c4: 0xa380ade4  sb          $zero, -0x521C($gp)
    ctx->pc = 0x42a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946276), (uint8_t)GPR_U32(ctx, 0));
label_42a0c8:
    // 0x42a0c8: 0x3e00008  jr          $ra
label_42a0cc:
    if (ctx->pc == 0x42A0CCu) {
        ctx->pc = 0x42A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0C8u;
        // 0x42a0cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0D0u;
        goto label_42a0d0;
    }
    ctx->pc = 0x42A0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0C8u;
        // 0x42a0cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A0D0u;
label_42a0d0:
    // 0x42a0d0: 0x9783ade6  lhu         $v1, -0x521A($gp)
    ctx->pc = 0x42a0d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294946278)));
label_42a0d4:
    // 0x42a0d4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x42a0d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_42a0d8:
    // 0x42a0d8: 0x8f82addc  lw          $v0, -0x5224($gp)
    ctx->pc = 0x42a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946268)));
label_42a0dc:
    // 0x42a0dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42a0e0:
    if (ctx->pc == 0x42A0E0u) {
        ctx->pc = 0x42A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0DCu;
        // 0x42a0e0: 0x65280a  movz        $a1, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0E4u;
        goto label_42a0e4;
    }
    ctx->pc = 0x42A0DCu;
    {
        const bool branch_taken_0x42a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0DCu;
        // 0x42a0e0: 0x65280a  movz        $a1, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a0dc) {
            ctx->pc = 0x42A0ECu;
            goto label_42a0ec;
        }
    }
    ctx->pc = 0x42A0E4u;
label_42a0e4:
    // 0x42a0e4: 0x3e00008  jr          $ra
label_42a0e8:
    if (ctx->pc == 0x42A0E8u) {
        ctx->pc = 0x42A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0E4u;
        // 0x42a0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0ECu;
        goto label_42a0ec;
    }
    ctx->pc = 0x42A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0E4u;
        // 0x42a0e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42A0ECu;
label_42a0ec:
    // 0x42a0ec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_42a0f0:
    if (ctx->pc == 0x42A0F0u) {
        ctx->pc = 0x42A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0ECu;
        // 0x42a0f0: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A0F4u;
        goto label_42a0f4;
    }
    ctx->pc = 0x42A0ECu;
    {
        const bool branch_taken_0x42a0ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A0ECu;
        // 0x42a0f0: 0x30c2007f  andi        $v0, $a2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a0ec) {
            ctx->pc = 0x42A100u;
            goto label_42a100;
        }
    }
    ctx->pc = 0x42A0F4u;
label_42a0f4:
    // 0x42a0f4: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_42a0f8:
    if (ctx->pc == 0x42A0F8u) {
        ctx->pc = 0x42A0FCu;
        goto label_42a0fc;
    }
    ctx->pc = 0x42A0F4u;
    {
        const bool branch_taken_0x42a0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a0f4) {
            ctx->pc = 0x42A0E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42a0e4;
        }
    }
    ctx->pc = 0x42A0FCu;
label_42a0fc:
    // 0x42a0fc: 0xaf86ade8  sw          $a2, -0x5218($gp)
    ctx->pc = 0x42a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946280), GPR_U32(ctx, 6));
label_42a100:
    // 0x42a100: 0xaf84adec  sw          $a0, -0x5214($gp)
    ctx->pc = 0x42a100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946284), GPR_U32(ctx, 4));
label_42a104:
    // 0x42a104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42a104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a108:
    // 0x42a108: 0x3e00008  jr          $ra
label_42a10c:
    if (ctx->pc == 0x42A10Cu) {
        ctx->pc = 0x42A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A108u;
        // 0x42a10c: 0xa785ade6  sh          $a1, -0x521A($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294946278), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A110u;
        goto label_fallthrough_0x42a108;
    }
    ctx->pc = 0x42A108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A108u;
        // 0x42a10c: 0xa785ade6  sh          $a1, -0x521A($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294946278), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x42a108:
    ctx->pc = 0x42A110u;
}
