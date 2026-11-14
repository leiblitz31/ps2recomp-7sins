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

// Function: sub_002BF3B0
// Address: 0x2bf3b0 - 0x2bf3f0
void sub_002BF3B0_0x2bf3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF3B0_0x2bf3b0");
#endif

    switch (ctx->pc) {
        case 0x2bf3b0u: goto label_2bf3b0;
        case 0x2bf3b4u: goto label_2bf3b4;
        case 0x2bf3b8u: goto label_2bf3b8;
        case 0x2bf3bcu: goto label_2bf3bc;
        case 0x2bf3c0u: goto label_2bf3c0;
        case 0x2bf3c4u: goto label_2bf3c4;
        case 0x2bf3c8u: goto label_2bf3c8;
        case 0x2bf3ccu: goto label_2bf3cc;
        case 0x2bf3d0u: goto label_2bf3d0;
        case 0x2bf3d4u: goto label_2bf3d4;
        case 0x2bf3d8u: goto label_2bf3d8;
        case 0x2bf3dcu: goto label_2bf3dc;
        case 0x2bf3e0u: goto label_2bf3e0;
        case 0x2bf3e4u: goto label_2bf3e4;
        case 0x2bf3e8u: goto label_2bf3e8;
        case 0x2bf3ecu: goto label_2bf3ec;
        default: break;
    }

    ctx->pc = 0x2bf3b0u;

label_2bf3b0:
    // 0x2bf3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bf3b4:
    // 0x2bf3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bf3b8:
    // 0x2bf3b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2bf3bc:
    // 0x2bf3bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf3c0:
    // 0x2bf3c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bf3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bf3c4:
    // 0x2bf3c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf3c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf3c8:
    // 0x2bf3c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2bf3c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2bf3cc:
    // 0x2bf3cc: 0x320f809  jalr        $t9
label_2bf3d0:
    if (ctx->pc == 0x2BF3D0u) {
        ctx->pc = 0x2BF3D4u;
        goto label_2bf3d4;
    }
    ctx->pc = 0x2BF3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF3D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3CCu, 0x2BF3D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BF3D4u;
label_2bf3d4:
    // 0x2bf3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf3d8:
    // 0x2bf3d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2bf3dc:
    // 0x2bf3dc: 0x3e00008  jr          $ra
label_2bf3e0:
    if (ctx->pc == 0x2BF3E0u) {
        ctx->pc = 0x2BF3E4u;
        goto label_2bf3e4;
    }
    ctx->pc = 0x2BF3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF3E4u;
label_2bf3e4:
    // 0x2bf3e4: 0x0  nop
    ctx->pc = 0x2bf3e4u;
    // NOP
label_2bf3e8:
    // 0x2bf3e8: 0x0  nop
    ctx->pc = 0x2bf3e8u;
    // NOP
label_2bf3ec:
    // 0x2bf3ec: 0x0  nop
    ctx->pc = 0x2bf3ecu;
    // NOP
    ctx->pc = 0x2bf3f0u;
}
