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

// Function: sub_004195E8
// Address: 0x4195e8 - 0x419660
void sub_004195E8_0x4195e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004195E8_0x4195e8");
#endif

    switch (ctx->pc) {
        case 0x4195e8u: goto label_4195e8;
        case 0x4195ecu: goto label_4195ec;
        case 0x4195f0u: goto label_4195f0;
        case 0x4195f4u: goto label_4195f4;
        case 0x4195f8u: goto label_4195f8;
        case 0x4195fcu: goto label_4195fc;
        case 0x419600u: goto label_419600;
        case 0x419604u: goto label_419604;
        case 0x419608u: goto label_419608;
        case 0x41960cu: goto label_41960c;
        case 0x419610u: goto label_419610;
        case 0x419614u: goto label_419614;
        case 0x419618u: goto label_419618;
        case 0x41961cu: goto label_41961c;
        case 0x419620u: goto label_419620;
        case 0x419624u: goto label_419624;
        case 0x419628u: goto label_419628;
        case 0x41962cu: goto label_41962c;
        case 0x419630u: goto label_419630;
        case 0x419634u: goto label_419634;
        case 0x419638u: goto label_419638;
        case 0x41963cu: goto label_41963c;
        case 0x419640u: goto label_419640;
        case 0x419644u: goto label_419644;
        case 0x419648u: goto label_419648;
        case 0x41964cu: goto label_41964c;
        case 0x419650u: goto label_419650;
        case 0x419654u: goto label_419654;
        case 0x419658u: goto label_419658;
        case 0x41965cu: goto label_41965c;
        default: break;
    }

    ctx->pc = 0x4195e8u;

label_4195e8:
    // 0x4195e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4195e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4195ec:
    // 0x4195ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4195ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4195f0:
    // 0x4195f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4195f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4195f4:
    // 0x4195f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4195f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4195f8:
    // 0x4195f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4195f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4195fc:
    // 0x4195fc: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x4195fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_419600:
    // 0x419600: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x419600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_419604:
    // 0x419604: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x419604u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_419608:
    // 0x419608: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x419608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41960c:
    // 0x41960c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41960cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_419610:
    // 0x419610: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x419610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_419614:
    // 0x419614: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_419618:
    if (ctx->pc == 0x419618u) {
        ctx->pc = 0x419618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419614u;
        // 0x419618: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41961Cu;
        goto label_41961c;
    }
    ctx->pc = 0x419614u;
    {
        const bool branch_taken_0x419614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x419618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419614u;
        // 0x419618: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419614) {
            ctx->pc = 0x41963Cu;
            goto label_41963c;
        }
    }
    ctx->pc = 0x41961Cu;
label_41961c:
    // 0x41961c: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x41961cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_419620:
    // 0x419620: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x419620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_419624:
    // 0x419624: 0x280f809  jalr        $s4
label_419628:
    if (ctx->pc == 0x419628u) {
        ctx->pc = 0x419628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419624u;
        // 0x419628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41962Cu;
        goto label_41962c;
    }
    ctx->pc = 0x419624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x41962Cu);
        ctx->pc = 0x419628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419624u;
        // 0x419628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419624u, 0x41962Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41962Cu;
label_41962c:
    // 0x41962c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_419630:
    if (ctx->pc == 0x419630u) {
        ctx->pc = 0x419630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41962Cu;
        // 0x419630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419634u;
        goto label_419634;
    }
    ctx->pc = 0x41962Cu;
    {
        const bool branch_taken_0x41962c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41962Cu;
        // 0x419630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41962c) {
            ctx->pc = 0x41963Cu;
            goto label_41963c;
        }
    }
    ctx->pc = 0x419634u;
label_419634:
    // 0x419634: 0x1452fffa  bne         $v0, $s2, . + 4 + (-0x6 << 2)
label_419638:
    if (ctx->pc == 0x419638u) {
        ctx->pc = 0x419638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419634u;
        // 0x419638: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41963Cu;
        goto label_41963c;
    }
    ctx->pc = 0x419634u;
    {
        const bool branch_taken_0x419634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x419638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419634u;
        // 0x419638: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419634) {
            ctx->pc = 0x419620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419620;
        }
    }
    ctx->pc = 0x41963Cu;
label_41963c:
    // 0x41963c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41963cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_419640:
    // 0x419640: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x419640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_419644:
    // 0x419644: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x419644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_419648:
    // 0x419648: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x419648u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41964c:
    // 0x41964c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41964cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419650:
    // 0x419650: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x419650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419654:
    // 0x419654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419658:
    // 0x419658: 0x3e00008  jr          $ra
label_41965c:
    if (ctx->pc == 0x41965Cu) {
        ctx->pc = 0x41965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419658u;
        // 0x41965c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419660u;
        goto label_fallthrough_0x419658;
    }
    ctx->pc = 0x419658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419658u;
        // 0x41965c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x419658:
    ctx->pc = 0x419660u;
}
