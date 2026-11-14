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

// Function: sub_00285530
// Address: 0x285530 - 0x285580
void sub_00285530_0x285530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285530_0x285530");
#endif

    switch (ctx->pc) {
        case 0x285554u: goto label_285554;
        default: break;
    }

    ctx->pc = 0x285530u;

    // 0x285530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x285530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x285534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x285538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28553c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x285540: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x285540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x285544: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x285544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285548: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x285548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28554c: 0xc0a1560  jal         func_285580
    ctx->pc = 0x28554Cu;
    SET_GPR_U32(ctx, 31, 0x285554u);
    ctx->pc = 0x285580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285580u, 0x28554Cu, 0x285554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285554u;
label_285554:
    // 0x285554: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x285554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28555c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28555cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x285560: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x285560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285568: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x285568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28556c: 0x3e00008  jr          $ra
    ctx->pc = 0x28556Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28556Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285574u;
    // 0x285574: 0x0  nop
    ctx->pc = 0x285574u;
    // NOP
    // 0x285578: 0x0  nop
    ctx->pc = 0x285578u;
    // NOP
    // 0x28557c: 0x0  nop
    ctx->pc = 0x28557cu;
    // NOP
    ctx->pc = 0x285580u;
}
