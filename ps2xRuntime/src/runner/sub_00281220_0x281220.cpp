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

// Function: sub_00281220
// Address: 0x281220 - 0x281260
void sub_00281220_0x281220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281220_0x281220");
#endif

    switch (ctx->pc) {
        case 0x281244u: goto label_281244;
        default: break;
    }

    ctx->pc = 0x281220u;

    // 0x281220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281228: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28122c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28122cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x281230: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281234: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x281234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281238: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x281238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28123c: 0xc0a0498  jal         func_281260
    ctx->pc = 0x28123Cu;
    SET_GPR_U32(ctx, 31, 0x281244u);
    ctx->pc = 0x281260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281260u, 0x28123Cu, 0x281244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281244u;
label_281244:
    // 0x281244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281248: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x281248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28124c: 0x3e00008  jr          $ra
    ctx->pc = 0x28124Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28124Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281254u;
    // 0x281254: 0x0  nop
    ctx->pc = 0x281254u;
    // NOP
    // 0x281258: 0x0  nop
    ctx->pc = 0x281258u;
    // NOP
    // 0x28125c: 0x0  nop
    ctx->pc = 0x28125cu;
    // NOP
    ctx->pc = 0x281260u;
}
