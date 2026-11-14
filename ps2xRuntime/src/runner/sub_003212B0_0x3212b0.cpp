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

// Function: sub_003212B0
// Address: 0x3212b0 - 0x321350
void sub_003212B0_0x3212b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003212B0_0x3212b0");
#endif

    switch (ctx->pc) {
        case 0x3212e0u: goto label_3212e0;
        case 0x3212e8u: goto label_3212e8;
        case 0x321318u: goto label_321318;
        case 0x32132cu: goto label_32132c;
        default: break;
    }

    ctx->pc = 0x3212b0u;

    // 0x3212b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3212b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3212b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3212b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3212b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3212b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3212bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3212bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3212c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3212c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3212c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3212c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3212cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3212ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3212d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3212d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3212d4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3212D4u;
    {
        const bool branch_taken_0x3212d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3212D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212D4u;
        // 0x3212d8: 0x8e120014  lw          $s2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3212d4) {
            ctx->pc = 0x321310u;
            goto label_321310;
        }
    }
    ctx->pc = 0x3212DCu;
    // 0x3212dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3212dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3212e0:
    // 0x3212e0: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x3212E0u;
    SET_GPR_U32(ctx, 31, 0x3212E8u);
    ctx->pc = 0x3212E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212E0u;
    // 0x3212e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x3212E0u, 0x3212E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212E8u;
label_3212e8:
    // 0x3212e8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3212e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3212ec: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3212ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3212f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3212f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3212f4: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3212F4u;
    {
        const bool branch_taken_0x3212f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3212f4) {
            ctx->pc = 0x3212F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3212F4u;
            // 0x3212f8: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3212FCu;
            goto label_3212fc;
        }
    }
    ctx->pc = 0x3212FCu;
label_3212fc:
    // 0x3212fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3212fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x321300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x321300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x321304: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x321304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x321308: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x321308u;
    {
        const bool branch_taken_0x321308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321308u;
        // 0x32130c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321308) {
            ctx->pc = 0x3212E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3212e0;
        }
    }
    ctx->pc = 0x321310u;
label_321310:
    // 0x321310: 0xc106794  jal         func_419E50
    ctx->pc = 0x321310u;
    SET_GPR_U32(ctx, 31, 0x321318u);
    ctx->pc = 0x321314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321310u;
    // 0x321314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x321310u, 0x321318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321318u;
label_321318:
    // 0x321318: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x321318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x32131c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321320: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x321320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321324: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x321324u;
    SET_GPR_U32(ctx, 31, 0x32132Cu);
    ctx->pc = 0x321328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321324u;
    // 0x321328: 0x24a516a0  addiu       $a1, $a1, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x321324u, 0x32132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32132Cu;
label_32132c:
    // 0x32132c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32132cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321330: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x321330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321334: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x321334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x321338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x321338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32133c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32133cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321344: 0x3e00008  jr          $ra
    ctx->pc = 0x321344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321344u;
        // 0x321348: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32134Cu;
    // 0x32134c: 0x0  nop
    ctx->pc = 0x32134cu;
    // NOP
    ctx->pc = 0x321350u;
}
