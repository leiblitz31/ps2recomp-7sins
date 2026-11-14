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

// Function: sub_00479830
// Address: 0x479830 - 0x479930
void sub_00479830_0x479830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479830_0x479830");
#endif

    switch (ctx->pc) {
        case 0x479878u: goto label_479878;
        case 0x47989cu: goto label_47989c;
        case 0x4798f0u: goto label_4798f0;
        case 0x479914u: goto label_479914;
        default: break;
    }

    ctx->pc = 0x479830u;

    // 0x479830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x479830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x479834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x479834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x479838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x479838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47983c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x47983cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x479840: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x479840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x479844: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x479844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x479848: 0xffa70050  sd          $a3, 0x50($sp)
    ctx->pc = 0x479848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 7));
    // 0x47984c: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x47984cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x479850: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x479850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479854: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x479854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x479858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x479858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47985c: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x47985cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
    // 0x479860: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x479860u;
    {
        const bool branch_taken_0x479860 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x479860) {
            ctx->pc = 0x479870u;
            goto label_479870;
        }
    }
    ctx->pc = 0x479868u;
    // 0x479868: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x479868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x47986c: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x47986cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_479870:
    // 0x479870: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x479870u;
    {
        const bool branch_taken_0x479870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479870) {
            ctx->pc = 0x4798C0u;
            goto label_4798c0;
        }
    }
    ctx->pc = 0x479878u;
label_479878:
    // 0x479878: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x479878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47987c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x47987cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x479880: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x479880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479884: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x479884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479888: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x479888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x47988c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479890: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x479890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479894: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x479894u;
    SET_GPR_U32(ctx, 31, 0x47989Cu);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x479894u, 0x47989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47989Cu;
label_47989c:
    // 0x47989c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x47989cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x4798a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4798a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4798a4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x4798a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4798a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4798a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4798ac: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x4798acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
    // 0x4798b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4798B0u;
    {
        const bool branch_taken_0x4798b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4798b0) {
            ctx->pc = 0x4798C0u;
            goto label_4798c0;
        }
    }
    ctx->pc = 0x4798B8u;
    // 0x4798b8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4798b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4798bc: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x4798bcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_4798c0:
    // 0x4798c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4798c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4798c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4798c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4798c8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x4798c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4798cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x4798CCu;
    {
        const bool branch_taken_0x4798cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4798cc) {
            ctx->pc = 0x4798F8u;
            goto label_4798f8;
        }
    }
    ctx->pc = 0x4798D4u;
    // 0x4798d4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x4798d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4798d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4798d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4798dc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4798dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4798e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4798e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4798e4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4798e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4798e8: 0xc11e3bc  jal         func_478EF0
    ctx->pc = 0x4798E8u;
    SET_GPR_U32(ctx, 31, 0x4798F0u);
    ctx->pc = 0x478EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478EF0u, 0x4798E8u, 0x4798F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4798F0u;
label_4798f0:
    // 0x4798f0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4798F0u;
    {
        const bool branch_taken_0x4798f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4798f0) {
            ctx->pc = 0x479878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479878;
        }
    }
    ctx->pc = 0x4798F8u;
label_4798f8:
    // 0x4798f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4798f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4798fc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x4798fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x479900: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x479900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x479904: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x479904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x479908: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x479908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x47990c: 0xc11dd5c  jal         func_477570
    ctx->pc = 0x47990Cu;
    SET_GPR_U32(ctx, 31, 0x479914u);
    ctx->pc = 0x477570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477570u, 0x47990Cu, 0x479914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479914u;
label_479914:
    // 0x479914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x479914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x479918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x479918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47991c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x47991cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x479920: 0x3e00008  jr          $ra
    ctx->pc = 0x479920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x479928u;
    // 0x479928: 0x0  nop
    ctx->pc = 0x479928u;
    // NOP
    // 0x47992c: 0x0  nop
    ctx->pc = 0x47992cu;
    // NOP
    ctx->pc = 0x479930u;
}
