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

// Function: sub_003A5628
// Address: 0x3a5628 - 0x3a5748
void sub_003A5628_0x3a5628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5628_0x3a5628");
#endif

    switch (ctx->pc) {
        case 0x3a5664u: goto label_3a5664;
        case 0x3a5690u: goto label_3a5690;
        case 0x3a56f4u: goto label_3a56f4;
        default: break;
    }

    ctx->pc = 0x3a5628u;

    // 0x3a5628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a5628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a562c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a562cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a5630: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a5634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a5634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5638: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a5638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3a563c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a563cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5644: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A5644u;
    {
        const bool branch_taken_0x3a5644 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5644u;
        // 0x3a5648: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5644) {
            ctx->pc = 0x3A5680u;
            goto label_3a5680;
        }
    }
    ctx->pc = 0x3A564Cu;
    // 0x3a564c: 0x1a200030  blez        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3A564Cu;
    {
        const bool branch_taken_0x3a564c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3A5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A564Cu;
        // 0x3a5650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a564c) {
            ctx->pc = 0x3A5710u;
            goto label_3a5710;
        }
    }
    ctx->pc = 0x3A5654u;
    // 0x3a5654: 0x5a40002f  blezl       $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x3A5654u;
    {
        const bool branch_taken_0x3a5654 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3a5654) {
            ctx->pc = 0x3A5658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5654u;
            // 0x3a5658: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5714u;
            goto label_3a5714;
        }
    }
    ctx->pc = 0x3A565Cu;
    // 0x3a565c: 0xc112582  jal         func_449608
    ctx->pc = 0x3A565Cu;
    SET_GPR_U32(ctx, 31, 0x3A5664u);
    ctx->pc = 0x3A5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A565Cu;
    // 0x3a5660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A565Cu, 0x3A5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5664u;
label_3a5664:
    // 0x3a5664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5668: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A5668u;
    {
        const bool branch_taken_0x3a5668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5668) {
            ctx->pc = 0x3A566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5668u;
            // 0x3a566c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5688u;
            goto label_3a5688;
        }
    }
    ctx->pc = 0x3A5670u;
    // 0x3a5670: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3a5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x3a5674: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3a5674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3a5678: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A5678u;
    {
        const bool branch_taken_0x3a5678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5678u;
        // 0x3a567c: 0x2511818  mult        $v1, $s2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5678) {
            ctx->pc = 0x3A56FCu;
            goto label_3a56fc;
        }
    }
    ctx->pc = 0x3A5680u;
label_3a5680:
    // 0x3a5680: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A5680u;
    {
        const bool branch_taken_0x3a5680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5680u;
        // 0x3a5684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5680) {
            ctx->pc = 0x3A5710u;
            goto label_3a5710;
        }
    }
    ctx->pc = 0x3A5688u;
label_3a5688:
    // 0x3a5688: 0xc112584  jal         func_449610
    ctx->pc = 0x3A5688u;
    SET_GPR_U32(ctx, 31, 0x3A5690u);
    ctx->pc = 0x3A568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5688u;
    // 0x3a568c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449610u, 0x3A5688u, 0x3A5690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5690u;
label_3a5690:
    // 0x3a5690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5694: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A5694u;
    {
        const bool branch_taken_0x3a5694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5694u;
        // 0x3a5698: 0x24030114  addiu       $v1, $zero, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5694) {
            ctx->pc = 0x3A56E0u;
            goto label_3a56e0;
        }
    }
    ctx->pc = 0x3A569Cu;
    // 0x3a569c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3a569cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3a56a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3a56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3a56a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x3a56a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x3a56a8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3a56a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3a56ac: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x3a56acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x3a56b0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3a56b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3a56b4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3a56b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3a56b8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3a56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x3a56bc: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x3a56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x3a56c0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x3a56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x3a56c4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x3a56c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x3a56c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a56cc: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x3a56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x3a56d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a56d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a56d4: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x3a56d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x3a56d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A56D8u;
    {
        const bool branch_taken_0x3a56d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56D8u;
        // 0x3a56dc: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56d8) {
            ctx->pc = 0x3A56E4u;
            goto label_3a56e4;
        }
    }
    ctx->pc = 0x3A56E0u;
label_3a56e0:
    // 0x3a56e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a56e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a56e4:
    // 0x3a56e4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A56E4u;
    {
        const bool branch_taken_0x3a56e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A56E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56E4u;
        // 0x3a56e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56e4) {
            ctx->pc = 0x3A5710u;
            goto label_3a5710;
        }
    }
    ctx->pc = 0x3A56ECu;
    // 0x3a56ec: 0xc112582  jal         func_449608
    ctx->pc = 0x3A56ECu;
    SET_GPR_U32(ctx, 31, 0x3A56F4u);
    ctx->pc = 0x3A56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A56ECu;
    // 0x3a56f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A56ECu, 0x3A56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A56F4u;
label_3a56f4:
    // 0x3a56f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a56f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56f8: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x3a56f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3a56fc:
    // 0x3a56fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3a56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a5700: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x3a5700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x3a5704: 0xac910038  sw          $s1, 0x38($a0)
    ctx->pc = 0x3a5704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 17));
    // 0x3a5708: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a5708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a570c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x3a570cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_3a5710:
    // 0x3a5710: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a5710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a5714:
    // 0x3a5714: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a5714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5718: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a5718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a571c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a571cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5720: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5720u;
        // 0x3a5724: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5728u;
    // 0x3a5728: 0x30a50009  andi        $a1, $a1, 0x9
    ctx->pc = 0x3a5728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)9);
    // 0x3a572c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A572Cu;
    {
        const bool branch_taken_0x3a572c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A572Cu;
        // 0x3a5730: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a572c) {
            ctx->pc = 0x3A573Cu;
            goto label_3a573c;
        }
    }
    ctx->pc = 0x3A5734u;
    // 0x3a5734: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5734u;
        // 0x3a5738: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A573Cu;
label_3a573c:
    // 0x3a573c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A573Cu;
        // 0x3a5740: 0x8c4201f8  lw          $v0, 0x1F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A573Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5744u;
    // 0x3a5744: 0x0  nop
    ctx->pc = 0x3a5744u;
    // NOP
    ctx->pc = 0x3a5748u;
}
