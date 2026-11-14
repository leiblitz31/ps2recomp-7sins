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

// Function: sub_001051B0
// Address: 0x1051b0 - 0x1051f0
void sub_001051B0_0x1051b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001051B0_0x1051b0");
#endif

    switch (ctx->pc) {
        case 0x1051b0u: goto label_1051b0;
        case 0x1051b4u: goto label_1051b4;
        case 0x1051b8u: goto label_1051b8;
        case 0x1051bcu: goto label_1051bc;
        case 0x1051c0u: goto label_1051c0;
        case 0x1051c4u: goto label_1051c4;
        case 0x1051c8u: goto label_1051c8;
        case 0x1051ccu: goto label_1051cc;
        case 0x1051d0u: goto label_1051d0;
        case 0x1051d4u: goto label_1051d4;
        case 0x1051d8u: goto label_1051d8;
        case 0x1051dcu: goto label_1051dc;
        case 0x1051e0u: goto label_1051e0;
        case 0x1051e4u: goto label_1051e4;
        case 0x1051e8u: goto label_1051e8;
        case 0x1051ecu: goto label_1051ec;
        default: break;
    }

    ctx->pc = 0x1051b0u;

label_1051b0:
    // 0x1051b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1051b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1051b4:
    // 0x1051b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1051b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1051b8:
    // 0x1051b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1051b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1051bc:
    // 0x1051bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1051bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1051c0:
    // 0x1051c0: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x1051c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_1051c4:
    // 0x1051c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1051c8:
    // 0x1051c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1051c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1051cc:
    // 0x1051cc: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1051ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1051d0:
    // 0x1051d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1051d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1051d4:
    // 0x1051d4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1051d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1051d8:
    // 0x1051d8: 0x320f809  jalr        $t9
label_1051dc:
    if (ctx->pc == 0x1051DCu) {
        ctx->pc = 0x1051E0u;
        goto label_1051e0;
    }
    ctx->pc = 0x1051D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1051E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1051D8u, 0x1051E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1051E0u;
label_1051e0:
    // 0x1051e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1051e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1051e4:
    // 0x1051e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1051e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1051e8:
    // 0x1051e8: 0x3e00008  jr          $ra
label_1051ec:
    if (ctx->pc == 0x1051ECu) {
        ctx->pc = 0x1051F0u;
        goto label_fallthrough_0x1051e8;
    }
    ctx->pc = 0x1051E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1051E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1051e8:
    ctx->pc = 0x1051F0u;
}
