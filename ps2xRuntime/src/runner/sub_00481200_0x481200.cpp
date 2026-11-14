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

// Function: sub_00481200
// Address: 0x481200 - 0x481240
void sub_00481200_0x481200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481200_0x481200");
#endif

    switch (ctx->pc) {
        case 0x481228u: goto label_481228;
        default: break;
    }

    ctx->pc = 0x481200u;

    // 0x481200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x481200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x481204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481208: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x481208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48120c: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x48120cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x481210: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x481210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481214: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x481214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x481218: 0x24a51240  addiu       $a1, $a1, 0x1240
    ctx->pc = 0x481218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
    // 0x48121c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x48121cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481220: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x481220u;
    SET_GPR_U32(ctx, 31, 0x481228u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x481220u, 0x481228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481228u;
label_481228:
    // 0x481228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x481228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48122c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48122cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x481230: 0x3e00008  jr          $ra
    ctx->pc = 0x481230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x481230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481238u;
    // 0x481238: 0x0  nop
    ctx->pc = 0x481238u;
    // NOP
    // 0x48123c: 0x0  nop
    ctx->pc = 0x48123cu;
    // NOP
    ctx->pc = 0x481240u;
}
