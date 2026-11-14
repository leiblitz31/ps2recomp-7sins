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

// Function: sub_00326810
// Address: 0x326810 - 0x3268b0
void sub_00326810_0x326810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326810_0x326810");
#endif

    switch (ctx->pc) {
        case 0x326860u: goto label_326860;
        case 0x326870u: goto label_326870;
        default: break;
    }

    ctx->pc = 0x326810u;

    // 0x326810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326814: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x326814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x326818: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x326818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32681c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x326820: 0x247022c8  addiu       $s0, $v1, 0x22C8
    ctx->pc = 0x326820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8904));
    // 0x326824: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x326824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x326828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32682c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326830: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x326830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F22CCu));
    // 0x326834: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x326834u;
    {
        const bool branch_taken_0x326834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326834u;
        // 0x326838: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326834) {
            ctx->pc = 0x326880u;
            goto label_326880;
        }
    }
    ctx->pc = 0x32683Cu;
    // 0x32683c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x32683cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x326840: 0x8f85a640  lw          $a1, -0x59C0($gp)
    ctx->pc = 0x326840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944320)));
    // 0x326844: 0x8f87a644  lw          $a3, -0x59BC($gp)
    ctx->pc = 0x326844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944324)));
    // 0x326848: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x326848u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x32684c: 0x2508b250  addiu       $t0, $t0, -0x4DB0
    ctx->pc = 0x32684cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947408));
    // 0x326850: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x326850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x326854: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x326854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x326858: 0xc10408c  jal         func_410230
    ctx->pc = 0x326858u;
    SET_GPR_U32(ctx, 31, 0x326860u);
    ctx->pc = 0x32685Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326858u;
    // 0x32685c: 0x35290120  ori         $t1, $t1, 0x120 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)288);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x326858u, 0x326860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326860u;
label_326860:
    // 0x326860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x326860u;
    {
        const bool branch_taken_0x326860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326860u;
        // 0x326864: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326860) {
            ctx->pc = 0x326878u;
            goto label_326878;
        }
    }
    ctx->pc = 0x326868u;
    // 0x326868: 0xc0c9bc4  jal         func_326F10
    ctx->pc = 0x326868u;
    SET_GPR_U32(ctx, 31, 0x326870u);
    ctx->pc = 0x326F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F10u, 0x326868u, 0x326870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326870u;
label_326870:
    // 0x326870: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326870u;
    {
        const bool branch_taken_0x326870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326870u;
        // 0x326874: 0x264422c8  addiu       $a0, $s2, 0x22C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326870) {
            ctx->pc = 0x326884u;
            goto label_326884;
        }
    }
    ctx->pc = 0x326878u;
label_326878:
    // 0x326878: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326878u;
    {
        const bool branch_taken_0x326878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326878u;
        // 0x32687c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326878) {
            ctx->pc = 0x326894u;
            goto label_326894;
        }
    }
    ctx->pc = 0x326880u;
label_326880:
    // 0x326880: 0x264422c8  addiu       $a0, $s2, 0x22C8
    ctx->pc = 0x326880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8904));
label_326884:
    // 0x326884: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x326884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326888: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x326888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32688c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x326890: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x326890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_326894:
    // 0x326894: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x326894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326898: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x326898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32689c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32689cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3268a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3268a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3268a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3268A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3268A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268A4u;
        // 0x3268a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3268ACu;
    // 0x3268ac: 0x0  nop
    ctx->pc = 0x3268acu;
    // NOP
    ctx->pc = 0x3268b0u;
}
