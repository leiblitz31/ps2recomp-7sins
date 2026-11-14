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

// Function: sub_00103880
// Address: 0x103880 - 0x1038c0
void sub_00103880_0x103880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103880_0x103880");
#endif

    switch (ctx->pc) {
        case 0x103880u: goto label_103880;
        case 0x103884u: goto label_103884;
        case 0x103888u: goto label_103888;
        case 0x10388cu: goto label_10388c;
        case 0x103890u: goto label_103890;
        case 0x103894u: goto label_103894;
        case 0x103898u: goto label_103898;
        case 0x10389cu: goto label_10389c;
        case 0x1038a0u: goto label_1038a0;
        case 0x1038a4u: goto label_1038a4;
        case 0x1038a8u: goto label_1038a8;
        case 0x1038acu: goto label_1038ac;
        case 0x1038b0u: goto label_1038b0;
        case 0x1038b4u: goto label_1038b4;
        case 0x1038b8u: goto label_1038b8;
        case 0x1038bcu: goto label_1038bc;
        default: break;
    }

    ctx->pc = 0x103880u;

label_103880:
    // 0x103880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103884:
    // 0x103884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103888:
    // 0x103888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10388c:
    // 0x10388c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103890:
    // 0x103890: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x103890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103894:
    // 0x103894: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103898:
    // 0x103898: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x103898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10389c:
    // 0x10389c: 0x320f809  jalr        $t9
label_1038a0:
    if (ctx->pc == 0x1038A0u) {
        ctx->pc = 0x1038A4u;
        goto label_1038a4;
    }
    ctx->pc = 0x10389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1038A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10389Cu, 0x1038A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1038A4u;
label_1038a4:
    // 0x1038a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1038a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1038a8:
    // 0x1038a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1038a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1038ac:
    // 0x1038ac: 0x3e00008  jr          $ra
label_1038b0:
    if (ctx->pc == 0x1038B0u) {
        ctx->pc = 0x1038B4u;
        goto label_1038b4;
    }
    ctx->pc = 0x1038ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1038ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1038B4u;
label_1038b4:
    // 0x1038b4: 0x0  nop
    ctx->pc = 0x1038b4u;
    // NOP
label_1038b8:
    // 0x1038b8: 0x0  nop
    ctx->pc = 0x1038b8u;
    // NOP
label_1038bc:
    // 0x1038bc: 0x0  nop
    ctx->pc = 0x1038bcu;
    // NOP
    ctx->pc = 0x1038c0u;
}
