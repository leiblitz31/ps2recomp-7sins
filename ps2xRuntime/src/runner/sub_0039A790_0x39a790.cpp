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

// Function: sub_0039A790
// Address: 0x39a790 - 0x39a860
void sub_0039A790_0x39a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A790_0x39a790");
#endif

    switch (ctx->pc) {
        case 0x39a7d0u: goto label_39a7d0;
        case 0x39a81cu: goto label_39a81c;
        default: break;
    }

    ctx->pc = 0x39a790u;

    // 0x39a790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39a794: 0x8f83bd60  lw          $v1, -0x42A0($gp)
    ctx->pc = 0x39a794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950240)));
    // 0x39a798: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39a798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x39a79c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x39a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x39a7a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x39a7a4: 0x2442e884  addiu       $v0, $v0, -0x177C
    ctx->pc = 0x39a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961284));
    // 0x39a7a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x39a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x39a7ac: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x39a7acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39a7b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39a7b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x39a7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x39a7b8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x39a7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39a7bc: 0x1212001f  beq         $s0, $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x39A7BCu;
    {
        const bool branch_taken_0x39a7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x39A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7BCu;
        // 0x39a7c0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7bc) {
            ctx->pc = 0x39A83Cu;
            goto label_39a83c;
        }
    }
    ctx->pc = 0x39A7C4u;
    // 0x39a7c4: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x39a7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x39a7c8: 0x8e04fff8  lw          $a0, -0x8($s0)
    ctx->pc = 0x39a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x39a7cc: 0x0  nop
    ctx->pc = 0x39a7ccu;
    // NOP
label_39a7d0:
    // 0x39a7d0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x39a7d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x39a7d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39a7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x39a7d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39A7D8u;
    {
        const bool branch_taken_0x39a7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7D8u;
        // 0x39a7dc: 0x2603fff8  addiu       $v1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7d8) {
            ctx->pc = 0x39A808u;
            goto label_39a808;
        }
    }
    ctx->pc = 0x39A7E0u;
    // 0x39a7e0: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x39a7e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x39a7e4: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x39A7E4u;
    {
        const bool branch_taken_0x39a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a7e4) {
            ctx->pc = 0x39A7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A7E4u;
            // 0x39a7e8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A834u;
            goto label_39a834;
        }
    }
    ctx->pc = 0x39A7ECu;
    // 0x39a7ec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x39a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x39a7f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x39a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x39a7f4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39a7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39a7f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x39A7F8u;
    {
        const bool branch_taken_0x39a7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7F8u;
        // 0x39a7fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7f8) {
            ctx->pc = 0x39A830u;
            goto label_39a830;
        }
    }
    ctx->pc = 0x39A800u;
    // 0x39a800: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x39A800u;
    {
        const bool branch_taken_0x39a800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A800u;
        // 0x39a804: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a800) {
            ctx->pc = 0x39A844u;
            goto label_39a844;
        }
    }
    ctx->pc = 0x39A808u;
label_39a808:
    // 0x39a808: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x39a808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x39a80c: 0x2665a960  addiu       $a1, $s3, -0x56A0
    ctx->pc = 0x39a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945120));
    // 0x39a810: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x39a810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x39a814: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x39A814u;
    SET_GPR_U32(ctx, 31, 0x39A81Cu);
    ctx->pc = 0x39A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A814u;
    // 0x39a818: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x39A814u, 0x39A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A81Cu;
label_39a81c:
    // 0x39a81c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39a820: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A820u;
    {
        const bool branch_taken_0x39a820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a820) {
            ctx->pc = 0x39A824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A820u;
            // 0x39a824: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A834u;
            goto label_39a834;
        }
    }
    ctx->pc = 0x39A828u;
    // 0x39a828: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39A828u;
    {
        const bool branch_taken_0x39a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A828u;
        // 0x39a82c: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a828) {
            ctx->pc = 0x39A840u;
            goto label_39a840;
        }
    }
    ctx->pc = 0x39A830u;
label_39a830:
    // 0x39a830: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x39a830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39a834:
    // 0x39a834: 0x5612ffe6  bnel        $s0, $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x39A834u;
    {
        const bool branch_taken_0x39a834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x39a834) {
            ctx->pc = 0x39A838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A834u;
            // 0x39a838: 0x8e04fff8  lw          $a0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a7d0;
        }
    }
    ctx->pc = 0x39A83Cu;
label_39a83c:
    // 0x39a83c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39a83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a840:
    // 0x39a840: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x39a840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39a844:
    // 0x39a844: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39a844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39a848: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39a848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39a84c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x39a84cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39a850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a854: 0x3e00008  jr          $ra
    ctx->pc = 0x39A854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A854u;
        // 0x39a858: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A85Cu;
    // 0x39a85c: 0x0  nop
    ctx->pc = 0x39a85cu;
    // NOP
    ctx->pc = 0x39a860u;
}
