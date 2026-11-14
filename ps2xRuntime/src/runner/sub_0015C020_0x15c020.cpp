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

// Function: sub_0015C020
// Address: 0x15c020 - 0x15c070
void sub_0015C020_0x15c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C020_0x15c020");
#endif

    switch (ctx->pc) {
        case 0x15c058u: goto label_15c058;
        default: break;
    }

    ctx->pc = 0x15c020u;

    // 0x15c020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15c028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15c028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15c02c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15c02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15c030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c034: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15c034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15c038: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c03c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15c040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c044: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x15c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15c048: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15c048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15c04c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c050: 0xc05701c  jal         func_15C070
    ctx->pc = 0x15C050u;
    SET_GPR_U32(ctx, 31, 0x15C058u);
    ctx->pc = 0x15C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C070u, 0x15C050u, 0x15C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C058u;
label_15c058:
    // 0x15c058: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15c05c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15c05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15c060: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15c064: 0x3e00008  jr          $ra
    ctx->pc = 0x15C064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C06Cu;
    // 0x15c06c: 0x0  nop
    ctx->pc = 0x15c06cu;
    // NOP
    ctx->pc = 0x15c070u;
}
