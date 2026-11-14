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

// Function: sub_00106F10
// Address: 0x106f10 - 0x106f50
void sub_00106F10_0x106f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106F10_0x106f10");
#endif

    switch (ctx->pc) {
        case 0x106f10u: goto label_106f10;
        case 0x106f14u: goto label_106f14;
        case 0x106f18u: goto label_106f18;
        case 0x106f1cu: goto label_106f1c;
        case 0x106f20u: goto label_106f20;
        case 0x106f24u: goto label_106f24;
        case 0x106f28u: goto label_106f28;
        case 0x106f2cu: goto label_106f2c;
        case 0x106f30u: goto label_106f30;
        case 0x106f34u: goto label_106f34;
        case 0x106f38u: goto label_106f38;
        case 0x106f3cu: goto label_106f3c;
        case 0x106f40u: goto label_106f40;
        case 0x106f44u: goto label_106f44;
        case 0x106f48u: goto label_106f48;
        case 0x106f4cu: goto label_106f4c;
        default: break;
    }

    ctx->pc = 0x106f10u;

label_106f10:
    // 0x106f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_106f14:
    // 0x106f14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_106f18:
    // 0x106f18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_106f1c:
    // 0x106f1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x106f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_106f20:
    // 0x106f20: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x106f20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_106f24:
    // 0x106f24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_106f28:
    // 0x106f28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x106f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_106f2c:
    // 0x106f2c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x106f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_106f30:
    // 0x106f30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x106f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_106f34:
    // 0x106f34: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x106f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_106f38:
    // 0x106f38: 0x320f809  jalr        $t9
label_106f3c:
    if (ctx->pc == 0x106F3Cu) {
        ctx->pc = 0x106F40u;
        goto label_106f40;
    }
    ctx->pc = 0x106F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x106F40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F38u, 0x106F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x106F40u;
label_106f40:
    // 0x106f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_106f44:
    // 0x106f44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x106f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_106f48:
    // 0x106f48: 0x3e00008  jr          $ra
label_106f4c:
    if (ctx->pc == 0x106F4Cu) {
        ctx->pc = 0x106F50u;
        goto label_fallthrough_0x106f48;
    }
    ctx->pc = 0x106F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x106f48:
    ctx->pc = 0x106F50u;
}
