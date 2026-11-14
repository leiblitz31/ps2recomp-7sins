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

// Function: sub_003216A0
// Address: 0x3216a0 - 0x321740
void sub_003216A0_0x3216a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003216A0_0x3216a0");
#endif

    switch (ctx->pc) {
        case 0x3216d0u: goto label_3216d0;
        case 0x3216d8u: goto label_3216d8;
        case 0x321708u: goto label_321708;
        case 0x32171cu: goto label_32171c;
        default: break;
    }

    ctx->pc = 0x3216a0u;

    // 0x3216a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3216a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3216a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3216a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3216a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3216a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3216ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3216acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3216b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3216b4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3216b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3216b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3216b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3216bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3216bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3216c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3216c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3216c4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3216C4u;
    {
        const bool branch_taken_0x3216c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3216C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216C4u;
        // 0x3216c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3216c4) {
            ctx->pc = 0x321700u;
            goto label_321700;
        }
    }
    ctx->pc = 0x3216CCu;
    // 0x3216cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3216ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3216d0:
    // 0x3216d0: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x3216D0u;
    SET_GPR_U32(ctx, 31, 0x3216D8u);
    ctx->pc = 0x3216D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3216D0u;
    // 0x3216d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x3216D0u, 0x3216D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3216D8u;
label_3216d8:
    // 0x3216d8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3216d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3216dc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3216dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3216e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3216e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3216e4: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3216E4u;
    {
        const bool branch_taken_0x3216e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3216e4) {
            ctx->pc = 0x3216E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3216E4u;
            // 0x3216e8: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3216ECu;
            goto label_3216ec;
        }
    }
    ctx->pc = 0x3216ECu;
label_3216ec:
    // 0x3216ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3216ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3216f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3216f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3216f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3216f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3216f8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3216F8u;
    {
        const bool branch_taken_0x3216f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3216FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3216F8u;
        // 0x3216fc: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3216f8) {
            ctx->pc = 0x3216D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3216d0;
        }
    }
    ctx->pc = 0x321700u;
label_321700:
    // 0x321700: 0xc106794  jal         func_419E50
    ctx->pc = 0x321700u;
    SET_GPR_U32(ctx, 31, 0x321708u);
    ctx->pc = 0x321704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321700u;
    // 0x321704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x321700u, 0x321708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321708u;
label_321708:
    // 0x321708: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x321708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x32170c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32170cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x321710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321714: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x321714u;
    SET_GPR_U32(ctx, 31, 0x32171Cu);
    ctx->pc = 0x321718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321714u;
    // 0x321718: 0x24a516a0  addiu       $a1, $a1, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x321714u, 0x32171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32171Cu;
label_32171c:
    // 0x32171c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32171cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321720: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x321720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321724: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x321724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32172c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32172cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321734: 0x3e00008  jr          $ra
    ctx->pc = 0x321734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321734u;
        // 0x321738: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32173Cu;
    // 0x32173c: 0x0  nop
    ctx->pc = 0x32173cu;
    // NOP
    ctx->pc = 0x321740u;
}
