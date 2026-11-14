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

// Function: sub_0010CF70
// Address: 0x10cf70 - 0x10cfb0
void sub_0010CF70_0x10cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF70_0x10cf70");
#endif

    switch (ctx->pc) {
        case 0x10cf70u: goto label_10cf70;
        case 0x10cf74u: goto label_10cf74;
        case 0x10cf78u: goto label_10cf78;
        case 0x10cf7cu: goto label_10cf7c;
        case 0x10cf80u: goto label_10cf80;
        case 0x10cf84u: goto label_10cf84;
        case 0x10cf88u: goto label_10cf88;
        case 0x10cf8cu: goto label_10cf8c;
        case 0x10cf90u: goto label_10cf90;
        case 0x10cf94u: goto label_10cf94;
        case 0x10cf98u: goto label_10cf98;
        case 0x10cf9cu: goto label_10cf9c;
        case 0x10cfa0u: goto label_10cfa0;
        case 0x10cfa4u: goto label_10cfa4;
        case 0x10cfa8u: goto label_10cfa8;
        case 0x10cfacu: goto label_10cfac;
        default: break;
    }

    ctx->pc = 0x10cf70u;

label_10cf70:
    // 0x10cf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10cf74:
    // 0x10cf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10cf78:
    // 0x10cf78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10cf7c:
    // 0x10cf7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_10cf80:
    // 0x10cf80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x10cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_10cf84:
    // 0x10cf84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_10cf88:
    // 0x10cf88: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10cf8c:
    // 0x10cf8c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x10cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10cf90:
    // 0x10cf90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10cf90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10cf94:
    // 0x10cf94: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x10cf94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_10cf98:
    // 0x10cf98: 0x320f809  jalr        $t9
label_10cf9c:
    if (ctx->pc == 0x10CF9Cu) {
        ctx->pc = 0x10CFA0u;
        goto label_10cfa0;
    }
    ctx->pc = 0x10CF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CFA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF98u, 0x10CFA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CFA0u;
label_10cfa0:
    // 0x10cfa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10cfa4:
    // 0x10cfa4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10cfa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_10cfa8:
    // 0x10cfa8: 0x3e00008  jr          $ra
label_10cfac:
    if (ctx->pc == 0x10CFACu) {
        ctx->pc = 0x10CFB0u;
        goto label_fallthrough_0x10cfa8;
    }
    ctx->pc = 0x10CFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10cfa8:
    ctx->pc = 0x10CFB0u;
}
