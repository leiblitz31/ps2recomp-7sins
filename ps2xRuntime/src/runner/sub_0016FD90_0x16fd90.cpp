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

// Function: sub_0016FD90
// Address: 0x16fd90 - 0x16fdf0
void sub_0016FD90_0x16fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FD90_0x16fd90");
#endif

    switch (ctx->pc) {
        case 0x16fd90u: goto label_16fd90;
        case 0x16fd94u: goto label_16fd94;
        case 0x16fd98u: goto label_16fd98;
        case 0x16fd9cu: goto label_16fd9c;
        case 0x16fda0u: goto label_16fda0;
        case 0x16fda4u: goto label_16fda4;
        case 0x16fda8u: goto label_16fda8;
        case 0x16fdacu: goto label_16fdac;
        case 0x16fdb0u: goto label_16fdb0;
        case 0x16fdb4u: goto label_16fdb4;
        case 0x16fdb8u: goto label_16fdb8;
        case 0x16fdbcu: goto label_16fdbc;
        case 0x16fdc0u: goto label_16fdc0;
        case 0x16fdc4u: goto label_16fdc4;
        case 0x16fdc8u: goto label_16fdc8;
        case 0x16fdccu: goto label_16fdcc;
        case 0x16fdd0u: goto label_16fdd0;
        case 0x16fdd4u: goto label_16fdd4;
        case 0x16fdd8u: goto label_16fdd8;
        case 0x16fddcu: goto label_16fddc;
        case 0x16fde0u: goto label_16fde0;
        case 0x16fde4u: goto label_16fde4;
        case 0x16fde8u: goto label_16fde8;
        case 0x16fdecu: goto label_16fdec;
        default: break;
    }

    ctx->pc = 0x16fd90u;

label_16fd90:
    // 0x16fd90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16fd94:
    // 0x16fd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fd98:
    // 0x16fd98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16fd9c:
    // 0x16fd9c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16fd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16fda0:
    // 0x16fda0: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fda4:
    // 0x16fda4: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16fda8:
    if (ctx->pc == 0x16FDA8u) {
        ctx->pc = 0x16FDACu;
        goto label_16fdac;
    }
    ctx->pc = 0x16FDA4u;
    {
        const bool branch_taken_0x16fda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fda4) {
            ctx->pc = 0x16FDD8u;
            goto label_16fdd8;
        }
    }
    ctx->pc = 0x16FDACu;
label_16fdac:
    // 0x16fdac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16fdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fdb0:
    // 0x16fdb0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16fdb4:
    // 0x16fdb4: 0xc08de14  jal         func_237850
label_16fdb8:
    if (ctx->pc == 0x16FDB8u) {
        ctx->pc = 0x16FDBCu;
        goto label_16fdbc;
    }
    ctx->pc = 0x16FDB4u;
    SET_GPR_U32(ctx, 31, 0x16FDBCu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FDB4u, 0x16FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FDBCu;
label_16fdbc:
    // 0x16fdbc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16fdc0:
    // 0x16fdc0: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fdc4:
    // 0x16fdc4: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16fdc8:
    // 0x16fdc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fdc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fdcc:
    // 0x16fdcc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x16fdccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_16fdd0:
    // 0x16fdd0: 0x320f809  jalr        $t9
label_16fdd4:
    if (ctx->pc == 0x16FDD4u) {
        ctx->pc = 0x16FDD8u;
        goto label_16fdd8;
    }
    ctx->pc = 0x16FDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FDD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FDD0u, 0x16FDD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FDD8u;
label_16fdd8:
    // 0x16fdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fddc:
    // 0x16fddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fde0:
    // 0x16fde0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16fde4:
    // 0x16fde4: 0x3e00008  jr          $ra
label_16fde8:
    if (ctx->pc == 0x16FDE8u) {
        ctx->pc = 0x16FDECu;
        goto label_16fdec;
    }
    ctx->pc = 0x16FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FDECu;
label_16fdec:
    // 0x16fdec: 0x0  nop
    ctx->pc = 0x16fdecu;
    // NOP
    ctx->pc = 0x16fdf0u;
}
