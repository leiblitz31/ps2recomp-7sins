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

// Function: sub_00152B00
// Address: 0x152b00 - 0x152b40
void sub_00152B00_0x152b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152B00_0x152b00");
#endif

    switch (ctx->pc) {
        case 0x152b18u: goto label_152b18;
        case 0x152b28u: goto label_152b28;
        default: break;
    }

    ctx->pc = 0x152b00u;

    // 0x152b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x152b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152b08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x152b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x152b0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x152b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152b10: 0xc054208  jal         func_150820
    ctx->pc = 0x152B10u;
    SET_GPR_U32(ctx, 31, 0x152B18u);
    ctx->pc = 0x150820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150820u, 0x152B10u, 0x152B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B18u;
label_152b18:
    // 0x152b18: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x152b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x152b1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x152b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152b20: 0xc054200  jal         func_150800
    ctx->pc = 0x152B20u;
    SET_GPR_U32(ctx, 31, 0x152B28u);
    ctx->pc = 0x150800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150800u, 0x152B20u, 0x152B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B28u;
label_152b28:
    // 0x152b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152b2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x152b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152b30: 0x3e00008  jr          $ra
    ctx->pc = 0x152B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152B38u;
    // 0x152b38: 0x0  nop
    ctx->pc = 0x152b38u;
    // NOP
    // 0x152b3c: 0x0  nop
    ctx->pc = 0x152b3cu;
    // NOP
    ctx->pc = 0x152b40u;
}
