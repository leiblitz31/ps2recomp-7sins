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

// Function: sub_002DE2D0
// Address: 0x2de2d0 - 0x2de340
void sub_002DE2D0_0x2de2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2D0_0x2de2d0");
#endif

    switch (ctx->pc) {
        case 0x2de2ecu: goto label_2de2ec;
        default: break;
    }

    ctx->pc = 0x2de2d0u;

    // 0x2de2d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2de2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2de2d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de2d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2de2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2de2dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2de2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2de2e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2de2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2de2e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DE2E4u;
    {
        const bool branch_taken_0x2de2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2e4) {
            ctx->pc = 0x2DE314u;
            goto label_2de314;
        }
    }
    ctx->pc = 0x2DE2ECu;
label_2de2ec:
    // 0x2de2ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2de2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de2f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2de2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2de2f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de2f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2de2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2de2fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2de2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de300: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2de300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2de304: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2de304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2de308: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de30c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2de30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2de310: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2de310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2de314:
    // 0x2de314: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2de314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de318: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2DE318u;
    {
        const bool branch_taken_0x2de318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de318) {
            ctx->pc = 0x2DE2ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de2ec;
        }
    }
    ctx->pc = 0x2DE320u;
    // 0x2de320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2de320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de328: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2de328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2de32c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE334u;
    // 0x2de334: 0x0  nop
    ctx->pc = 0x2de334u;
    // NOP
    // 0x2de338: 0x0  nop
    ctx->pc = 0x2de338u;
    // NOP
    // 0x2de33c: 0x0  nop
    ctx->pc = 0x2de33cu;
    // NOP
    ctx->pc = 0x2de340u;
}
