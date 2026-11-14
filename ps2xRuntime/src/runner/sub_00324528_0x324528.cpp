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

// Function: sub_00324528
// Address: 0x324528 - 0x3245d8
void sub_00324528_0x324528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324528_0x324528");
#endif

    switch (ctx->pc) {
        case 0x324554u: goto label_324554;
        case 0x324560u: goto label_324560;
        case 0x324568u: goto label_324568;
        case 0x32457cu: goto label_32457c;
        case 0x3245a0u: goto label_3245a0;
        case 0x3245b4u: goto label_3245b4;
        default: break;
    }

    ctx->pc = 0x324528u;

    // 0x324528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32452c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x324530: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x324530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x324534: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x324534u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324538: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x324538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x32453c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32453cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324540: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x324540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x324544: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x324544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x324548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32454c: 0xc0c8ea8  jal         func_323AA0
    ctx->pc = 0x32454Cu;
    SET_GPR_U32(ctx, 31, 0x324554u);
    ctx->pc = 0x324550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32454Cu;
    // 0x324550: 0x3c140032  lui         $s4, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)50 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AA0u, 0x32454Cu, 0x324554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324554u;
label_324554:
    // 0x324554: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324558: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x324558u;
    {
        const bool branch_taken_0x324558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324558u;
        // 0x32455c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324558) {
            ctx->pc = 0x3245A4u;
            goto label_3245a4;
        }
    }
    ctx->pc = 0x324560u;
label_324560:
    // 0x324560: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x324560u;
    SET_GPR_U32(ctx, 31, 0x324568u);
    ctx->pc = 0x324564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324560u;
    // 0x324564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x324560u, 0x324568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324568u;
label_324568:
    // 0x324568: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x324568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32456c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32456Cu;
    {
        const bool branch_taken_0x32456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32456Cu;
        // 0x324570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32456c) {
            ctx->pc = 0x32458Cu;
            goto label_32458c;
        }
    }
    ctx->pc = 0x324574u;
    // 0x324574: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x324574u;
    SET_GPR_U32(ctx, 31, 0x32457Cu);
    ctx->pc = 0x324578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324574u;
    // 0x324578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x324574u, 0x32457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32457Cu;
label_32457c:
    // 0x32457c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32457cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324580: 0x1603fff7  bne         $s0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324580u;
    {
        const bool branch_taken_0x324580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x324584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324580u;
        // 0x324584: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324580) {
            ctx->pc = 0x324560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324560;
        }
    }
    ctx->pc = 0x324588u;
    // 0x324588: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32458c:
    // 0x32458c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32458Cu;
    {
        const bool branch_taken_0x32458c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x324590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32458Cu;
        // 0x324590: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32458c) {
            ctx->pc = 0x3245A4u;
            goto label_3245a4;
        }
    }
    ctx->pc = 0x324594u;
    // 0x324594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x324594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324598: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x324598u;
    SET_GPR_U32(ctx, 31, 0x3245A0u);
    ctx->pc = 0x32459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324598u;
    // 0x32459c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x324598u, 0x3245A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3245A0u;
label_3245a0:
    // 0x3245a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3245a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3245a4:
    // 0x3245a4: 0x26854638  addiu       $a1, $s4, 0x4638
    ctx->pc = 0x3245a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
    // 0x3245a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3245a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245ac: 0xc0e70c2  jal         func_39C308
    ctx->pc = 0x3245ACu;
    SET_GPR_U32(ctx, 31, 0x3245B4u);
    ctx->pc = 0x3245B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3245ACu;
    // 0x3245b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C308u, 0x3245ACu, 0x3245B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3245B4u;
label_3245b4:
    // 0x3245b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3245b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3245b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3245b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3245bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3245bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3245c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3245c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3245c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3245c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3245c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3245c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3245cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3245ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3245d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3245D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3245D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3245D0u;
        // 0x3245d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3245D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3245D8u;
}
