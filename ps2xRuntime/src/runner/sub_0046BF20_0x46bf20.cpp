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

// Function: sub_0046BF20
// Address: 0x46bf20 - 0x46bf60
void sub_0046BF20_0x46bf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BF20_0x46bf20");
#endif

    switch (ctx->pc) {
        case 0x46bf20u: goto label_46bf20;
        case 0x46bf24u: goto label_46bf24;
        case 0x46bf28u: goto label_46bf28;
        case 0x46bf2cu: goto label_46bf2c;
        case 0x46bf30u: goto label_46bf30;
        case 0x46bf34u: goto label_46bf34;
        case 0x46bf38u: goto label_46bf38;
        case 0x46bf3cu: goto label_46bf3c;
        case 0x46bf40u: goto label_46bf40;
        case 0x46bf44u: goto label_46bf44;
        case 0x46bf48u: goto label_46bf48;
        case 0x46bf4cu: goto label_46bf4c;
        case 0x46bf50u: goto label_46bf50;
        case 0x46bf54u: goto label_46bf54;
        case 0x46bf58u: goto label_46bf58;
        case 0x46bf5cu: goto label_46bf5c;
        default: break;
    }

    ctx->pc = 0x46bf20u;

label_46bf20:
    // 0x46bf20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46bf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_46bf24:
    // 0x46bf24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46bf28:
    // 0x46bf28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_46bf2c:
    // 0x46bf2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_46bf30:
    // 0x46bf30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46bf34:
    // 0x46bf34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x46bf34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_46bf38:
    // 0x46bf38: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x46bf38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_46bf3c:
    // 0x46bf3c: 0x320f809  jalr        $t9
label_46bf40:
    if (ctx->pc == 0x46BF40u) {
        ctx->pc = 0x46BF44u;
        goto label_46bf44;
    }
    ctx->pc = 0x46BF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x46BF44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BF3Cu, 0x46BF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46BF44u;
label_46bf44:
    // 0x46bf44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bf44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46bf48:
    // 0x46bf48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46bf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_46bf4c:
    // 0x46bf4c: 0x3e00008  jr          $ra
label_46bf50:
    if (ctx->pc == 0x46BF50u) {
        ctx->pc = 0x46BF54u;
        goto label_46bf54;
    }
    ctx->pc = 0x46BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BF54u;
label_46bf54:
    // 0x46bf54: 0x0  nop
    ctx->pc = 0x46bf54u;
    // NOP
label_46bf58:
    // 0x46bf58: 0x0  nop
    ctx->pc = 0x46bf58u;
    // NOP
label_46bf5c:
    // 0x46bf5c: 0x0  nop
    ctx->pc = 0x46bf5cu;
    // NOP
    ctx->pc = 0x46bf60u;
}
