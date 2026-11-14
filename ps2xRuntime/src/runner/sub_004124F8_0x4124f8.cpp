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

// Function: sub_004124F8
// Address: 0x4124f8 - 0x4125a8
void sub_004124F8_0x4124f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004124F8_0x4124f8");
#endif

    switch (ctx->pc) {
        case 0x4124f8u: goto label_4124f8;
        case 0x4124fcu: goto label_4124fc;
        case 0x412500u: goto label_412500;
        case 0x412504u: goto label_412504;
        case 0x412508u: goto label_412508;
        case 0x41250cu: goto label_41250c;
        case 0x412510u: goto label_412510;
        case 0x412514u: goto label_412514;
        case 0x412518u: goto label_412518;
        case 0x41251cu: goto label_41251c;
        case 0x412520u: goto label_412520;
        case 0x412524u: goto label_412524;
        case 0x412528u: goto label_412528;
        case 0x41252cu: goto label_41252c;
        case 0x412530u: goto label_412530;
        case 0x412534u: goto label_412534;
        case 0x412538u: goto label_412538;
        case 0x41253cu: goto label_41253c;
        case 0x412540u: goto label_412540;
        case 0x412544u: goto label_412544;
        case 0x412548u: goto label_412548;
        case 0x41254cu: goto label_41254c;
        case 0x412550u: goto label_412550;
        case 0x412554u: goto label_412554;
        case 0x412558u: goto label_412558;
        case 0x41255cu: goto label_41255c;
        case 0x412560u: goto label_412560;
        case 0x412564u: goto label_412564;
        case 0x412568u: goto label_412568;
        case 0x41256cu: goto label_41256c;
        case 0x412570u: goto label_412570;
        case 0x412574u: goto label_412574;
        case 0x412578u: goto label_412578;
        case 0x41257cu: goto label_41257c;
        case 0x412580u: goto label_412580;
        case 0x412584u: goto label_412584;
        case 0x412588u: goto label_412588;
        case 0x41258cu: goto label_41258c;
        case 0x412590u: goto label_412590;
        case 0x412594u: goto label_412594;
        case 0x412598u: goto label_412598;
        case 0x41259cu: goto label_41259c;
        case 0x4125a0u: goto label_4125a0;
        case 0x4125a4u: goto label_4125a4;
        default: break;
    }

    ctx->pc = 0x4124f8u;

label_4124f8:
    // 0x4124f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4124f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4124fc:
    // 0x4124fc: 0x8f83bdd8  lw          $v1, -0x4228($gp)
    ctx->pc = 0x4124fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950360)));
label_412500:
    // 0x412500: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x412500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_412504:
    // 0x412504: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x412504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_412508:
    // 0x412508: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x412508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41250c:
    // 0x41250c: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x41250cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_412510:
    // 0x412510: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x412510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_412514:
    // 0x412514: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x412514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_412518:
    // 0x412518: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x412518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41251c:
    // 0x41251c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41251cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_412520:
    // 0x412520: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x412520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_412524:
    // 0x412524: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x412524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_412528:
    // 0x412528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41252c:
    // 0x41252c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41252cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_412530:
    // 0x412530: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x412530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_412534:
    // 0x412534: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x412534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
label_412538:
    // 0x412538: 0x8e820118  lw          $v0, 0x118($s4)
    ctx->pc = 0x412538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_41253c:
    // 0x41253c: 0x40f809  jalr        $v0
label_412540:
    if (ctx->pc == 0x412540u) {
        ctx->pc = 0x412540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41253Cu;
        // 0x412540: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412544u;
        goto label_412544;
    }
    ctx->pc = 0x41253Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412544u);
        ctx->pc = 0x412540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41253Cu;
        // 0x412540: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41253Cu, 0x412544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412544u;
label_412544:
    // 0x412544: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x412544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412548:
    // 0x412548: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x412548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41254c:
    // 0x41254c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x41254cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_412550:
    // 0x412550: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x412550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412554:
    // 0x412554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x412554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412558:
    // 0x412558: 0xc10476c  jal         func_411DB0
label_41255c:
    if (ctx->pc == 0x41255Cu) {
        ctx->pc = 0x41255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412558u;
        // 0x41255c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412560u;
        goto label_412560;
    }
    ctx->pc = 0x412558u;
    SET_GPR_U32(ctx, 31, 0x412560u);
    ctx->pc = 0x41255Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412558u;
    // 0x41255c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411DB0u, 0x412558u, 0x412560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412560u;
label_412560:
    // 0x412560: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_412564:
    if (ctx->pc == 0x412564u) {
        ctx->pc = 0x412564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412560u;
        // 0x412564: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412568u;
        goto label_412568;
    }
    ctx->pc = 0x412560u;
    {
        const bool branch_taken_0x412560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412560u;
        // 0x412564: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412560) {
            ctx->pc = 0x412588u;
            goto label_412588;
        }
    }
    ctx->pc = 0x412568u;
label_412568:
    // 0x412568: 0x8f83bdd8  lw          $v1, -0x4228($gp)
    ctx->pc = 0x412568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950360)));
label_41256c:
    // 0x41256c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41256cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412570:
    // 0x412570: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x412570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_412574:
    // 0x412574: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x412574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412578:
    // 0x412578: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x412578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_41257c:
    // 0x41257c: 0x40f809  jalr        $v0
label_412580:
    if (ctx->pc == 0x412580u) {
        ctx->pc = 0x412580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41257Cu;
        // 0x412580: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412584u;
        goto label_412584;
    }
    ctx->pc = 0x41257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412584u);
        ctx->pc = 0x412580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41257Cu;
        // 0x412580: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41257Cu, 0x412584u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412584u;
label_412584:
    // 0x412584: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x412584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_412588:
    // 0x412588: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x412588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41258c:
    // 0x41258c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41258cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_412590:
    // 0x412590: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x412590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412594:
    // 0x412594: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x412594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412598:
    // 0x412598: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x412598u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41259c:
    // 0x41259c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41259cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4125a0:
    // 0x4125a0: 0x3e00008  jr          $ra
label_4125a4:
    if (ctx->pc == 0x4125A4u) {
        ctx->pc = 0x4125A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125A0u;
        // 0x4125a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4125A8u;
        goto label_fallthrough_0x4125a0;
    }
    ctx->pc = 0x4125A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4125A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4125A0u;
        // 0x4125a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4125A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4125a0:
    ctx->pc = 0x4125A8u;
}
