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

// Function: sub_00141CD0
// Address: 0x141cd0 - 0x141d40
void sub_00141CD0_0x141cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141CD0_0x141cd0");
#endif

    switch (ctx->pc) {
        case 0x141cd0u: goto label_141cd0;
        case 0x141cd4u: goto label_141cd4;
        case 0x141cd8u: goto label_141cd8;
        case 0x141cdcu: goto label_141cdc;
        case 0x141ce0u: goto label_141ce0;
        case 0x141ce4u: goto label_141ce4;
        case 0x141ce8u: goto label_141ce8;
        case 0x141cecu: goto label_141cec;
        case 0x141cf0u: goto label_141cf0;
        case 0x141cf4u: goto label_141cf4;
        case 0x141cf8u: goto label_141cf8;
        case 0x141cfcu: goto label_141cfc;
        case 0x141d00u: goto label_141d00;
        case 0x141d04u: goto label_141d04;
        case 0x141d08u: goto label_141d08;
        case 0x141d0cu: goto label_141d0c;
        case 0x141d10u: goto label_141d10;
        case 0x141d14u: goto label_141d14;
        case 0x141d18u: goto label_141d18;
        case 0x141d1cu: goto label_141d1c;
        case 0x141d20u: goto label_141d20;
        case 0x141d24u: goto label_141d24;
        case 0x141d28u: goto label_141d28;
        case 0x141d2cu: goto label_141d2c;
        case 0x141d30u: goto label_141d30;
        case 0x141d34u: goto label_141d34;
        case 0x141d38u: goto label_141d38;
        case 0x141d3cu: goto label_141d3c;
        default: break;
    }

    ctx->pc = 0x141cd0u;

label_141cd0:
    // 0x141cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x141cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_141cd4:
    // 0x141cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_141cd8:
    // 0x141cd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x141cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_141cdc:
    // 0x141cdc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x141cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_141ce0:
    // 0x141ce0: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141ce4:
    // 0x141ce4: 0x10020011  beq         $zero, $v0, . + 4 + (0x11 << 2)
label_141ce8:
    if (ctx->pc == 0x141CE8u) {
        ctx->pc = 0x141CECu;
        goto label_141cec;
    }
    ctx->pc = 0x141CE4u;
    {
        const bool branch_taken_0x141ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141ce4) {
            ctx->pc = 0x141D2Cu;
            goto label_141d2c;
        }
    }
    ctx->pc = 0x141CECu;
label_141cec:
    // 0x141cec: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141cf0:
    // 0x141cf0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x141cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141cf4:
    // 0x141cf4: 0x1002000d  beq         $zero, $v0, . + 4 + (0xD << 2)
label_141cf8:
    if (ctx->pc == 0x141CF8u) {
        ctx->pc = 0x141CFCu;
        goto label_141cfc;
    }
    ctx->pc = 0x141CF4u;
    {
        const bool branch_taken_0x141cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x141cf4) {
            ctx->pc = 0x141D2Cu;
            goto label_141d2c;
        }
    }
    ctx->pc = 0x141CFCu;
label_141cfc:
    // 0x141cfc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x141cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_141d00:
    // 0x141d00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x141d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_141d04:
    // 0x141d04: 0xc08de14  jal         func_237850
label_141d08:
    if (ctx->pc == 0x141D08u) {
        ctx->pc = 0x141D0Cu;
        goto label_141d0c;
    }
    ctx->pc = 0x141D04u;
    SET_GPR_U32(ctx, 31, 0x141D0Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x141D04u, 0x141D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141D0Cu;
label_141d0c:
    // 0x141d0c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x141d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_141d10:
    // 0x141d10: 0x8f82ba84  lw          $v0, -0x457C($gp)
    ctx->pc = 0x141d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949508)));
label_141d14:
    // 0x141d14: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x141d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_141d18:
    // 0x141d18: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x141d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_141d1c:
    // 0x141d1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x141d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_141d20:
    // 0x141d20: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x141d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_141d24:
    // 0x141d24: 0x320f809  jalr        $t9
label_141d28:
    if (ctx->pc == 0x141D28u) {
        ctx->pc = 0x141D2Cu;
        goto label_141d2c;
    }
    ctx->pc = 0x141D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x141D2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141D24u, 0x141D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x141D2Cu;
label_141d2c:
    // 0x141d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_141d30:
    // 0x141d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_141d34:
    // 0x141d34: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x141d34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_141d38:
    // 0x141d38: 0x3e00008  jr          $ra
label_141d3c:
    if (ctx->pc == 0x141D3Cu) {
        ctx->pc = 0x141D40u;
        goto label_fallthrough_0x141d38;
    }
    ctx->pc = 0x141D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x141d38:
    ctx->pc = 0x141D40u;
}
