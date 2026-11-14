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

// Function: sub_00100430
// Address: 0x100430 - 0x100460
void sub_00100430_0x100430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100430_0x100430");
#endif

    switch (ctx->pc) {
        case 0x10044cu: goto label_10044c;
        default: break;
    }

    ctx->pc = 0x100430u;

    // 0x100430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10043c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100440: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x100444: 0xc0857fc  jal         func_215FF0
    ctx->pc = 0x100444u;
    SET_GPR_U32(ctx, 31, 0x10044Cu);
    ctx->pc = 0x215FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215FF0u, 0x100444u, 0x10044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10044Cu;
label_10044c:
    // 0x10044c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100450: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x100450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x100454: 0x3e00008  jr          $ra
    ctx->pc = 0x100454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10045Cu;
    // 0x10045c: 0x0  nop
    ctx->pc = 0x10045cu;
    // NOP
    ctx->pc = 0x100460u;
}
