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

// Function: sub_004702F0
// Address: 0x4702f0 - 0x470330
void sub_004702F0_0x4702f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004702F0_0x4702f0");
#endif

    switch (ctx->pc) {
        case 0x470314u: goto label_470314;
        default: break;
    }

    ctx->pc = 0x4702f0u;

    // 0x4702f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4702f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4702f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4702f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4702f8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4702f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x4702fc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x4702fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x470300: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x470300u;
    {
        const bool branch_taken_0x470300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x470300) {
            ctx->pc = 0x470318u;
            goto label_470318;
        }
    }
    ctx->pc = 0x470308u;
    // 0x470308: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47030c: 0xc11c05c  jal         func_470170
    ctx->pc = 0x47030Cu;
    SET_GPR_U32(ctx, 31, 0x470314u);
    ctx->pc = 0x470170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470170u, 0x47030Cu, 0x470314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470314u;
label_470314:
    // 0x470314: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x470314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_470318:
    // 0x470318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x470318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47031c: 0xaf83c044  sw          $v1, -0x3FBC($gp)
    ctx->pc = 0x47031cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950980), GPR_U32(ctx, 3));
    // 0x470320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x470320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x470324: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x470324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x470328: 0x3e00008  jr          $ra
    ctx->pc = 0x470328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x470330u;
}
