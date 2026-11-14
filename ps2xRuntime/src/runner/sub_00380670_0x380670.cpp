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

// Function: sub_00380670
// Address: 0x380670 - 0x380748
void sub_00380670_0x380670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380670_0x380670");
#endif

    switch (ctx->pc) {
        case 0x3806b8u: goto label_3806b8;
        case 0x3806ecu: goto label_3806ec;
        case 0x38071cu: goto label_38071c;
        default: break;
    }

    ctx->pc = 0x380670u;

    // 0x380670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x380670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x380674: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x380674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x380678: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x380678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x38067c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380680: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x380680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x380684: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x380684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380688: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x380688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x38068c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x38068cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x380694: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x380694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x380698: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x380698u;
    {
        const bool branch_taken_0x380698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380698u;
        // 0x38069c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380698) {
            ctx->pc = 0x3806BCu;
            goto label_3806bc;
        }
    }
    ctx->pc = 0x3806A0u;
    // 0x3806a0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3806a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3806a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3806A4u;
    {
        const bool branch_taken_0x3806a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3806A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3806A4u;
        // 0x3806a8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3806a4) {
            ctx->pc = 0x3806C0u;
            goto label_3806c0;
        }
    }
    ctx->pc = 0x3806ACu;
    // 0x3806ac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3806acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x3806b0: 0xc0e0034  jal         func_3800D0
    ctx->pc = 0x3806B0u;
    SET_GPR_U32(ctx, 31, 0x3806B8u);
    ctx->pc = 0x3806B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806B0u;
    // 0x3806b4: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3800D0u, 0x3806B0u, 0x3806B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806B8u;
label_3806b8:
    // 0x3806b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3806b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3806bc:
    // 0x3806bc: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x3806bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_3806c0:
    // 0x3806c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3806C0u;
    {
        const bool branch_taken_0x3806c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3806C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3806C0u;
        // 0x3806c4: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3806c0) {
            ctx->pc = 0x3806F4u;
            goto label_3806f4;
        }
    }
    ctx->pc = 0x3806C8u;
    // 0x3806c8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3806c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3806cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3806CCu;
    {
        const bool branch_taken_0x3806cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3806D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3806CCu;
        // 0x3806d0: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3806cc) {
            ctx->pc = 0x3806F4u;
            goto label_3806f4;
        }
    }
    ctx->pc = 0x3806D4u;
    // 0x3806d4: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x3806d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x3806d8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3806d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x3806dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3806dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3806e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3806e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3806e4: 0xc0e00f4  jal         func_3803D0
    ctx->pc = 0x3806E4u;
    SET_GPR_U32(ctx, 31, 0x3806ECu);
    ctx->pc = 0x3806E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3806E4u;
    // 0x3806e8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3803D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3803D0u, 0x3806E4u, 0x3806ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3806ECu;
label_3806ec:
    // 0x3806ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3806ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3806f0: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x3806f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_3806f4:
    // 0x3806f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3806F4u;
    {
        const bool branch_taken_0x3806f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3806f4) {
            ctx->pc = 0x38071Cu;
            goto label_38071c;
        }
    }
    ctx->pc = 0x3806FCu;
    // 0x3806fc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3806fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x380700: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x380700u;
    {
        const bool branch_taken_0x380700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380700u;
        // 0x380704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380700) {
            ctx->pc = 0x38071Cu;
            goto label_38071c;
        }
    }
    ctx->pc = 0x380708u;
    // 0x380708: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x380708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x38070c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x38070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x380710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x380710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380714: 0xc0e01f4  jal         func_3807D0
    ctx->pc = 0x380714u;
    SET_GPR_U32(ctx, 31, 0x38071Cu);
    ctx->pc = 0x380718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380714u;
    // 0x380718: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807D0u, 0x380714u, 0x38071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38071Cu;
label_38071c:
    // 0x38071c: 0x16700003  bne         $s3, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38071Cu;
    {
        const bool branch_taken_0x38071c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x380720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38071Cu;
        // 0x380720: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38071c) {
            ctx->pc = 0x38072Cu;
            goto label_38072c;
        }
    }
    ctx->pc = 0x380724u;
    // 0x380724: 0x2531826  xor         $v1, $s2, $s3
    ctx->pc = 0x380724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 19));
    // 0x380728: 0x243100a  movz        $v0, $s2, $v1
    ctx->pc = 0x380728u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_38072c:
    // 0x38072c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38072cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x380730: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x380730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380734: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x380734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380738: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x380738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38073c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38073cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380740: 0x3e00008  jr          $ra
    ctx->pc = 0x380740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380740u;
        // 0x380744: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380748u;
}
