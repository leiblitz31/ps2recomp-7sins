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

// Function: sub_00103980
// Address: 0x103980 - 0x1039c0
void sub_00103980_0x103980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103980_0x103980");
#endif

    switch (ctx->pc) {
        case 0x103980u: goto label_103980;
        case 0x103984u: goto label_103984;
        case 0x103988u: goto label_103988;
        case 0x10398cu: goto label_10398c;
        case 0x103990u: goto label_103990;
        case 0x103994u: goto label_103994;
        case 0x103998u: goto label_103998;
        case 0x10399cu: goto label_10399c;
        case 0x1039a0u: goto label_1039a0;
        case 0x1039a4u: goto label_1039a4;
        case 0x1039a8u: goto label_1039a8;
        case 0x1039acu: goto label_1039ac;
        case 0x1039b0u: goto label_1039b0;
        case 0x1039b4u: goto label_1039b4;
        case 0x1039b8u: goto label_1039b8;
        case 0x1039bcu: goto label_1039bc;
        default: break;
    }

    ctx->pc = 0x103980u;

label_103980:
    // 0x103980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103984:
    // 0x103984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103988:
    // 0x103988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10398c:
    // 0x10398c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103990:
    // 0x103990: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x103990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103994:
    // 0x103994: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103998:
    // 0x103998: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x103998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10399c:
    // 0x10399c: 0x320f809  jalr        $t9
label_1039a0:
    if (ctx->pc == 0x1039A0u) {
        ctx->pc = 0x1039A4u;
        goto label_1039a4;
    }
    ctx->pc = 0x10399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1039A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10399Cu, 0x1039A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1039A4u;
label_1039a4:
    // 0x1039a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1039a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1039a8:
    // 0x1039a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1039a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1039ac:
    // 0x1039ac: 0x3e00008  jr          $ra
label_1039b0:
    if (ctx->pc == 0x1039B0u) {
        ctx->pc = 0x1039B4u;
        goto label_1039b4;
    }
    ctx->pc = 0x1039ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1039ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1039B4u;
label_1039b4:
    // 0x1039b4: 0x0  nop
    ctx->pc = 0x1039b4u;
    // NOP
label_1039b8:
    // 0x1039b8: 0x0  nop
    ctx->pc = 0x1039b8u;
    // NOP
label_1039bc:
    // 0x1039bc: 0x0  nop
    ctx->pc = 0x1039bcu;
    // NOP
    ctx->pc = 0x1039c0u;
}
