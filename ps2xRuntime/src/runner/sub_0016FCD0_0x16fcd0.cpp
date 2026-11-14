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

// Function: sub_0016FCD0
// Address: 0x16fcd0 - 0x16fd30
void sub_0016FCD0_0x16fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FCD0_0x16fcd0");
#endif

    switch (ctx->pc) {
        case 0x16fcd0u: goto label_16fcd0;
        case 0x16fcd4u: goto label_16fcd4;
        case 0x16fcd8u: goto label_16fcd8;
        case 0x16fcdcu: goto label_16fcdc;
        case 0x16fce0u: goto label_16fce0;
        case 0x16fce4u: goto label_16fce4;
        case 0x16fce8u: goto label_16fce8;
        case 0x16fcecu: goto label_16fcec;
        case 0x16fcf0u: goto label_16fcf0;
        case 0x16fcf4u: goto label_16fcf4;
        case 0x16fcf8u: goto label_16fcf8;
        case 0x16fcfcu: goto label_16fcfc;
        case 0x16fd00u: goto label_16fd00;
        case 0x16fd04u: goto label_16fd04;
        case 0x16fd08u: goto label_16fd08;
        case 0x16fd0cu: goto label_16fd0c;
        case 0x16fd10u: goto label_16fd10;
        case 0x16fd14u: goto label_16fd14;
        case 0x16fd18u: goto label_16fd18;
        case 0x16fd1cu: goto label_16fd1c;
        case 0x16fd20u: goto label_16fd20;
        case 0x16fd24u: goto label_16fd24;
        case 0x16fd28u: goto label_16fd28;
        case 0x16fd2cu: goto label_16fd2c;
        default: break;
    }

    ctx->pc = 0x16fcd0u;

label_16fcd0:
    // 0x16fcd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16fcd4:
    // 0x16fcd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fcd8:
    // 0x16fcd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16fcdc:
    // 0x16fcdc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16fce0:
    // 0x16fce0: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fce4:
    // 0x16fce4: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16fce8:
    if (ctx->pc == 0x16FCE8u) {
        ctx->pc = 0x16FCECu;
        goto label_16fcec;
    }
    ctx->pc = 0x16FCE4u;
    {
        const bool branch_taken_0x16fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fce4) {
            ctx->pc = 0x16FD18u;
            goto label_16fd18;
        }
    }
    ctx->pc = 0x16FCECu;
label_16fcec:
    // 0x16fcec: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fcf0:
    // 0x16fcf0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16fcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16fcf4:
    // 0x16fcf4: 0xc08de14  jal         func_237850
label_16fcf8:
    if (ctx->pc == 0x16FCF8u) {
        ctx->pc = 0x16FCFCu;
        goto label_16fcfc;
    }
    ctx->pc = 0x16FCF4u;
    SET_GPR_U32(ctx, 31, 0x16FCFCu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FCF4u, 0x16FCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FCFCu;
label_16fcfc:
    // 0x16fcfc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16fcfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16fd00:
    // 0x16fd00: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fd04:
    // 0x16fd04: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16fd08:
    // 0x16fd08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fd08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fd0c:
    // 0x16fd0c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x16fd0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_16fd10:
    // 0x16fd10: 0x320f809  jalr        $t9
label_16fd14:
    if (ctx->pc == 0x16FD14u) {
        ctx->pc = 0x16FD18u;
        goto label_16fd18;
    }
    ctx->pc = 0x16FD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FD18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD10u, 0x16FD18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FD18u;
label_16fd18:
    // 0x16fd18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fd1c:
    // 0x16fd1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fd20:
    // 0x16fd20: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16fd24:
    // 0x16fd24: 0x3e00008  jr          $ra
label_16fd28:
    if (ctx->pc == 0x16FD28u) {
        ctx->pc = 0x16FD2Cu;
        goto label_16fd2c;
    }
    ctx->pc = 0x16FD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD2Cu;
label_16fd2c:
    // 0x16fd2c: 0x0  nop
    ctx->pc = 0x16fd2cu;
    // NOP
    ctx->pc = 0x16fd30u;
}
