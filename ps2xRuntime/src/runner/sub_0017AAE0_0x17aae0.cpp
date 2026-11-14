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

// Function: sub_0017AAE0
// Address: 0x17aae0 - 0x17ab20
void sub_0017AAE0_0x17aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AAE0_0x17aae0");
#endif

    switch (ctx->pc) {
        case 0x17ab04u: goto label_17ab04;
        default: break;
    }

    ctx->pc = 0x17aae0u;

    // 0x17aae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17aae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17aae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17aaec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17aaf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aaf4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aaf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17aaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aafc: 0xc05eac8  jal         func_17AB20
    ctx->pc = 0x17AAFCu;
    SET_GPR_U32(ctx, 31, 0x17AB04u);
    ctx->pc = 0x17AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB20u, 0x17AAFCu, 0x17AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB04u;
label_17ab04:
    // 0x17ab04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ab04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ab0c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB14u;
    // 0x17ab14: 0x0  nop
    ctx->pc = 0x17ab14u;
    // NOP
    // 0x17ab18: 0x0  nop
    ctx->pc = 0x17ab18u;
    // NOP
    // 0x17ab1c: 0x0  nop
    ctx->pc = 0x17ab1cu;
    // NOP
    ctx->pc = 0x17ab20u;
}
