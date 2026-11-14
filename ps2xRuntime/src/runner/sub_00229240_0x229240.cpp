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

// Function: sub_00229240
// Address: 0x229240 - 0x2292b0
void sub_00229240_0x229240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229240_0x229240");
#endif

    switch (ctx->pc) {
        case 0x229264u: goto label_229264;
        case 0x22927cu: goto label_22927c;
        default: break;
    }

    ctx->pc = 0x229240u;

    // 0x229240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x229240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x229244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x229248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22924c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22924cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x229250: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x229250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x229254: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x229254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x229258: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x229258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22925c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22925Cu;
    SET_GPR_U32(ctx, 31, 0x229264u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22925Cu, 0x229264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229264u;
label_229264:
    // 0x229264: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x229264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x229268: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x229268u;
    {
        const bool branch_taken_0x229268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229268) {
            ctx->pc = 0x229298u;
            goto label_229298;
        }
    }
    ctx->pc = 0x229270u;
    // 0x229270: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x229270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229274: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x229274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x229278: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x229278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_22927c:
    // 0x22927c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22927cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x229280: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x229280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x229284: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x229284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x229288: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x229288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x22928c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x22928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x229290: 0x1c80fffa  bgtz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x229290u;
    {
        const bool branch_taken_0x229290 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x229290) {
            ctx->pc = 0x22927Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22927c;
        }
    }
    ctx->pc = 0x229298u;
label_229298:
    // 0x229298: 0x27b0002c  addiu       $s0, $sp, 0x2C
    ctx->pc = 0x229298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22929c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22929cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2292a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2292a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2292a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2292a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2292a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2292A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2292A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2292B0u;
}
