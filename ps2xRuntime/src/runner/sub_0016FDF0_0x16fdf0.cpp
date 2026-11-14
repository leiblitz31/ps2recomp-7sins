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

// Function: sub_0016FDF0
// Address: 0x16fdf0 - 0x16fe50
void sub_0016FDF0_0x16fdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FDF0_0x16fdf0");
#endif

    switch (ctx->pc) {
        case 0x16fdf0u: goto label_16fdf0;
        case 0x16fdf4u: goto label_16fdf4;
        case 0x16fdf8u: goto label_16fdf8;
        case 0x16fdfcu: goto label_16fdfc;
        case 0x16fe00u: goto label_16fe00;
        case 0x16fe04u: goto label_16fe04;
        case 0x16fe08u: goto label_16fe08;
        case 0x16fe0cu: goto label_16fe0c;
        case 0x16fe10u: goto label_16fe10;
        case 0x16fe14u: goto label_16fe14;
        case 0x16fe18u: goto label_16fe18;
        case 0x16fe1cu: goto label_16fe1c;
        case 0x16fe20u: goto label_16fe20;
        case 0x16fe24u: goto label_16fe24;
        case 0x16fe28u: goto label_16fe28;
        case 0x16fe2cu: goto label_16fe2c;
        case 0x16fe30u: goto label_16fe30;
        case 0x16fe34u: goto label_16fe34;
        case 0x16fe38u: goto label_16fe38;
        case 0x16fe3cu: goto label_16fe3c;
        case 0x16fe40u: goto label_16fe40;
        case 0x16fe44u: goto label_16fe44;
        case 0x16fe48u: goto label_16fe48;
        case 0x16fe4cu: goto label_16fe4c;
        default: break;
    }

    ctx->pc = 0x16fdf0u;

label_16fdf0:
    // 0x16fdf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16fdf4:
    // 0x16fdf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fdf8:
    // 0x16fdf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16fdfc:
    // 0x16fdfc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16fe00:
    // 0x16fe00: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fe04:
    // 0x16fe04: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16fe08:
    if (ctx->pc == 0x16FE08u) {
        ctx->pc = 0x16FE0Cu;
        goto label_16fe0c;
    }
    ctx->pc = 0x16FE04u;
    {
        const bool branch_taken_0x16fe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fe04) {
            ctx->pc = 0x16FE38u;
            goto label_16fe38;
        }
    }
    ctx->pc = 0x16FE0Cu;
label_16fe0c:
    // 0x16fe0c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fe10:
    // 0x16fe10: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16fe14:
    // 0x16fe14: 0xc08de14  jal         func_237850
label_16fe18:
    if (ctx->pc == 0x16FE18u) {
        ctx->pc = 0x16FE1Cu;
        goto label_16fe1c;
    }
    ctx->pc = 0x16FE14u;
    SET_GPR_U32(ctx, 31, 0x16FE1Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FE14u, 0x16FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE1Cu;
label_16fe1c:
    // 0x16fe1c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16fe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16fe20:
    // 0x16fe20: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fe24:
    // 0x16fe24: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16fe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16fe28:
    // 0x16fe28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fe28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fe2c:
    // 0x16fe2c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x16fe2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_16fe30:
    // 0x16fe30: 0x320f809  jalr        $t9
label_16fe34:
    if (ctx->pc == 0x16FE34u) {
        ctx->pc = 0x16FE38u;
        goto label_16fe38;
    }
    ctx->pc = 0x16FE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FE38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE30u, 0x16FE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FE38u;
label_16fe38:
    // 0x16fe38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fe3c:
    // 0x16fe3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fe3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fe40:
    // 0x16fe40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16fe44:
    // 0x16fe44: 0x3e00008  jr          $ra
label_16fe48:
    if (ctx->pc == 0x16FE48u) {
        ctx->pc = 0x16FE4Cu;
        goto label_16fe4c;
    }
    ctx->pc = 0x16FE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FE4Cu;
label_16fe4c:
    // 0x16fe4c: 0x0  nop
    ctx->pc = 0x16fe4cu;
    // NOP
    ctx->pc = 0x16fe50u;
}
