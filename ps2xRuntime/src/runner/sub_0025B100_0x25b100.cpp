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

// Function: sub_0025B100
// Address: 0x25b100 - 0x25b140
void sub_0025B100_0x25b100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B100_0x25b100");
#endif

    switch (ctx->pc) {
        case 0x25b124u: goto label_25b124;
        default: break;
    }

    ctx->pc = 0x25b100u;

    // 0x25b100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b108: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25b108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25b10c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25b110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b114: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x25b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25b118: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x25b118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b11c: 0xc096c50  jal         func_25B140
    ctx->pc = 0x25B11Cu;
    SET_GPR_U32(ctx, 31, 0x25B124u);
    ctx->pc = 0x25B140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B140u, 0x25B11Cu, 0x25B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B124u;
label_25b124:
    // 0x25b124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b128: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b12c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B134u;
    // 0x25b134: 0x0  nop
    ctx->pc = 0x25b134u;
    // NOP
    // 0x25b138: 0x0  nop
    ctx->pc = 0x25b138u;
    // NOP
    // 0x25b13c: 0x0  nop
    ctx->pc = 0x25b13cu;
    // NOP
    ctx->pc = 0x25b140u;
}
