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

// Function: sub_003898A0
// Address: 0x3898a0 - 0x389918
void sub_003898A0_0x3898a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003898A0_0x3898a0");
#endif

    switch (ctx->pc) {
        case 0x3898a0u: goto label_3898a0;
        case 0x3898a4u: goto label_3898a4;
        case 0x3898a8u: goto label_3898a8;
        case 0x3898acu: goto label_3898ac;
        case 0x3898b0u: goto label_3898b0;
        case 0x3898b4u: goto label_3898b4;
        case 0x3898b8u: goto label_3898b8;
        case 0x3898bcu: goto label_3898bc;
        case 0x3898c0u: goto label_3898c0;
        case 0x3898c4u: goto label_3898c4;
        case 0x3898c8u: goto label_3898c8;
        case 0x3898ccu: goto label_3898cc;
        case 0x3898d0u: goto label_3898d0;
        case 0x3898d4u: goto label_3898d4;
        case 0x3898d8u: goto label_3898d8;
        case 0x3898dcu: goto label_3898dc;
        case 0x3898e0u: goto label_3898e0;
        case 0x3898e4u: goto label_3898e4;
        case 0x3898e8u: goto label_3898e8;
        case 0x3898ecu: goto label_3898ec;
        case 0x3898f0u: goto label_3898f0;
        case 0x3898f4u: goto label_3898f4;
        case 0x3898f8u: goto label_3898f8;
        case 0x3898fcu: goto label_3898fc;
        case 0x389900u: goto label_389900;
        case 0x389904u: goto label_389904;
        case 0x389908u: goto label_389908;
        case 0x38990cu: goto label_38990c;
        case 0x389910u: goto label_389910;
        case 0x389914u: goto label_389914;
        default: break;
    }

    ctx->pc = 0x3898a0u;

label_3898a0:
    // 0x3898a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3898a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3898a4:
    // 0x3898a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3898a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3898a8:
    // 0x3898a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3898a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3898ac:
    // 0x3898ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3898acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3898b0:
    // 0x3898b0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3898b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3898b4:
    // 0x3898b4: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x3898b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3898b8:
    // 0x3898b8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3898b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3898bc:
    // 0x3898bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3898bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3898c0:
    // 0x3898c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3898c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3898c4:
    // 0x3898c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3898c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3898c8:
    // 0x3898c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3898c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3898cc:
    // 0x3898cc: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_3898d0:
    if (ctx->pc == 0x3898D0u) {
        ctx->pc = 0x3898D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898CCu;
        // 0x3898d0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3898D4u;
        goto label_3898d4;
    }
    ctx->pc = 0x3898CCu;
    {
        const bool branch_taken_0x3898cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3898D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898CCu;
        // 0x3898d0: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898cc) {
            ctx->pc = 0x3898F4u;
            goto label_3898f4;
        }
    }
    ctx->pc = 0x3898D4u;
label_3898d4:
    // 0x3898d4: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x3898d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_3898d8:
    // 0x3898d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3898d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3898dc:
    // 0x3898dc: 0x280f809  jalr        $s4
label_3898e0:
    if (ctx->pc == 0x3898E0u) {
        ctx->pc = 0x3898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898DCu;
        // 0x3898e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3898E4u;
        goto label_3898e4;
    }
    ctx->pc = 0x3898DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3898E4u);
        ctx->pc = 0x3898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898DCu;
        // 0x3898e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3898DCu, 0x3898E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3898E4u;
label_3898e4:
    // 0x3898e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3898e8:
    if (ctx->pc == 0x3898E8u) {
        ctx->pc = 0x3898E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898E4u;
        // 0x3898e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3898ECu;
        goto label_3898ec;
    }
    ctx->pc = 0x3898E4u;
    {
        const bool branch_taken_0x3898e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3898E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898E4u;
        // 0x3898e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898e4) {
            ctx->pc = 0x3898F4u;
            goto label_3898f4;
        }
    }
    ctx->pc = 0x3898ECu;
label_3898ec:
    // 0x3898ec: 0x1452fffa  bne         $v0, $s2, . + 4 + (-0x6 << 2)
label_3898f0:
    if (ctx->pc == 0x3898F0u) {
        ctx->pc = 0x3898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898ECu;
        // 0x3898f0: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3898F4u;
        goto label_3898f4;
    }
    ctx->pc = 0x3898ECu;
    {
        const bool branch_taken_0x3898ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3898F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898ECu;
        // 0x3898f0: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898ec) {
            ctx->pc = 0x3898D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3898d8;
        }
    }
    ctx->pc = 0x3898F4u;
label_3898f4:
    // 0x3898f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3898f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3898f8:
    // 0x3898f8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3898f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3898fc:
    // 0x3898fc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3898fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_389900:
    // 0x389900: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x389900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389904:
    // 0x389904: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x389904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389908:
    // 0x389908: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x389908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38990c:
    // 0x38990c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38990cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389910:
    // 0x389910: 0x3e00008  jr          $ra
label_389914:
    if (ctx->pc == 0x389914u) {
        ctx->pc = 0x389914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389910u;
        // 0x389914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389918u;
        goto label_fallthrough_0x389910;
    }
    ctx->pc = 0x389910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389910u;
        // 0x389914: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389910:
    ctx->pc = 0x389918u;
}
