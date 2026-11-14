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

// Function: sub_00217F80
// Address: 0x217f80 - 0x218010
void sub_00217F80_0x217f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217F80_0x217f80");
#endif

    switch (ctx->pc) {
        case 0x217fbcu: goto label_217fbc;
        case 0x217ffcu: goto label_217ffc;
        default: break;
    }

    ctx->pc = 0x217f80u;

    // 0x217f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x217f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x217f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217f88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x217f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x217f8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x217f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x217f90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x217f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217f94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x217f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217f98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x217f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217f9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x217f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x217fa0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x217FA0u;
    {
        const bool branch_taken_0x217fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217fa0) {
            ctx->pc = 0x217FD4u;
            goto label_217fd4;
        }
    }
    ctx->pc = 0x217FA8u;
    // 0x217fa8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x217fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217fac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x217facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217fb0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x217fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217fb4: 0xc086098  jal         func_218260
    ctx->pc = 0x217FB4u;
    SET_GPR_U32(ctx, 31, 0x217FBCu);
    ctx->pc = 0x218260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218260u, 0x217FB4u, 0x217FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FBCu;
label_217fbc:
    // 0x217fbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x217fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217fc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x217fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x217fc4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x217fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x217fc8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x217fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x217fcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x217FCCu;
    {
        const bool branch_taken_0x217fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217fcc) {
            ctx->pc = 0x217FFCu;
            goto label_217ffc;
        }
    }
    ctx->pc = 0x217FD4u;
label_217fd4:
    // 0x217fd4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x217fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217fd8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x217fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x217fdc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x217fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217fe0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x217fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217fe4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x217fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217fe8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x217fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x217fec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x217fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217ff0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x217ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217ff4: 0xc086004  jal         func_218010
    ctx->pc = 0x217FF4u;
    SET_GPR_U32(ctx, 31, 0x217FFCu);
    ctx->pc = 0x218010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218010u, 0x217FF4u, 0x217FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217FFCu;
label_217ffc:
    // 0x217ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218000: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218004: 0x3e00008  jr          $ra
    ctx->pc = 0x218004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21800Cu;
    // 0x21800c: 0x0  nop
    ctx->pc = 0x21800cu;
    // NOP
    ctx->pc = 0x218010u;
}
