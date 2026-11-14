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

// Function: sub_00111380
// Address: 0x111380 - 0x111410
void sub_00111380_0x111380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111380_0x111380");
#endif

    switch (ctx->pc) {
        case 0x1113bcu: goto label_1113bc;
        case 0x1113fcu: goto label_1113fc;
        default: break;
    }

    ctx->pc = 0x111380u;

    // 0x111380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111388: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x111388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x11138c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x11138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x111390: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x111390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111394: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x111394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x111398: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x111398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11139c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x11139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1113a0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1113A0u;
    {
        const bool branch_taken_0x1113a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1113a0) {
            ctx->pc = 0x1113D4u;
            goto label_1113d4;
        }
    }
    ctx->pc = 0x1113A8u;
    // 0x1113a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1113a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1113ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1113acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1113b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1113b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1113b4: 0xc0445a8  jal         func_1116A0
    ctx->pc = 0x1113B4u;
    SET_GPR_U32(ctx, 31, 0x1113BCu);
    ctx->pc = 0x1116A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116A0u, 0x1113B4u, 0x1113BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113BCu;
label_1113bc:
    // 0x1113bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1113bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1113c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1113c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1113c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1113c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1113c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1113c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1113cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1113CCu;
    {
        const bool branch_taken_0x1113cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113cc) {
            ctx->pc = 0x1113FCu;
            goto label_1113fc;
        }
    }
    ctx->pc = 0x1113D4u;
label_1113d4:
    // 0x1113d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1113d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1113d8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1113d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1113dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1113dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1113e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1113e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1113e4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1113e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1113e8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1113e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1113ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1113ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1113f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1113f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1113f4: 0xc044504  jal         func_111410
    ctx->pc = 0x1113F4u;
    SET_GPR_U32(ctx, 31, 0x1113FCu);
    ctx->pc = 0x111410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111410u, 0x1113F4u, 0x1113FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113FCu;
label_1113fc:
    // 0x1113fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1113fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111400: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x111400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x111404: 0x3e00008  jr          $ra
    ctx->pc = 0x111404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11140Cu;
    // 0x11140c: 0x0  nop
    ctx->pc = 0x11140cu;
    // NOP
    ctx->pc = 0x111410u;
}
