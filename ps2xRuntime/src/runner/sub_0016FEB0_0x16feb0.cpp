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

// Function: sub_0016FEB0
// Address: 0x16feb0 - 0x16ff10
void sub_0016FEB0_0x16feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FEB0_0x16feb0");
#endif

    switch (ctx->pc) {
        case 0x16feb0u: goto label_16feb0;
        case 0x16feb4u: goto label_16feb4;
        case 0x16feb8u: goto label_16feb8;
        case 0x16febcu: goto label_16febc;
        case 0x16fec0u: goto label_16fec0;
        case 0x16fec4u: goto label_16fec4;
        case 0x16fec8u: goto label_16fec8;
        case 0x16feccu: goto label_16fecc;
        case 0x16fed0u: goto label_16fed0;
        case 0x16fed4u: goto label_16fed4;
        case 0x16fed8u: goto label_16fed8;
        case 0x16fedcu: goto label_16fedc;
        case 0x16fee0u: goto label_16fee0;
        case 0x16fee4u: goto label_16fee4;
        case 0x16fee8u: goto label_16fee8;
        case 0x16feecu: goto label_16feec;
        case 0x16fef0u: goto label_16fef0;
        case 0x16fef4u: goto label_16fef4;
        case 0x16fef8u: goto label_16fef8;
        case 0x16fefcu: goto label_16fefc;
        case 0x16ff00u: goto label_16ff00;
        case 0x16ff04u: goto label_16ff04;
        case 0x16ff08u: goto label_16ff08;
        case 0x16ff0cu: goto label_16ff0c;
        default: break;
    }

    ctx->pc = 0x16feb0u;

label_16feb0:
    // 0x16feb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16feb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16feb4:
    // 0x16feb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16feb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16feb8:
    // 0x16feb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16febc:
    // 0x16febc: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16fec0:
    // 0x16fec0: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fec4:
    // 0x16fec4: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16fec8:
    if (ctx->pc == 0x16FEC8u) {
        ctx->pc = 0x16FECCu;
        goto label_16fecc;
    }
    ctx->pc = 0x16FEC4u;
    {
        const bool branch_taken_0x16fec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fec4) {
            ctx->pc = 0x16FEF8u;
            goto label_16fef8;
        }
    }
    ctx->pc = 0x16FECCu;
label_16fecc:
    // 0x16fecc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16feccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fed0:
    // 0x16fed0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16fed4:
    // 0x16fed4: 0xc08de14  jal         func_237850
label_16fed8:
    if (ctx->pc == 0x16FED8u) {
        ctx->pc = 0x16FEDCu;
        goto label_16fedc;
    }
    ctx->pc = 0x16FED4u;
    SET_GPR_U32(ctx, 31, 0x16FEDCu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FED4u, 0x16FEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FEDCu;
label_16fedc:
    // 0x16fedc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16fedcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16fee0:
    // 0x16fee0: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fee4:
    // 0x16fee4: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16fee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16fee8:
    // 0x16fee8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16feec:
    // 0x16feec: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_16fef0:
    // 0x16fef0: 0x320f809  jalr        $t9
label_16fef4:
    if (ctx->pc == 0x16FEF4u) {
        ctx->pc = 0x16FEF8u;
        goto label_16fef8;
    }
    ctx->pc = 0x16FEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FEF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FEF0u, 0x16FEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FEF8u;
label_16fef8:
    // 0x16fef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fefc:
    // 0x16fefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ff00:
    // 0x16ff00: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16ff04:
    // 0x16ff04: 0x3e00008  jr          $ra
label_16ff08:
    if (ctx->pc == 0x16FF08u) {
        ctx->pc = 0x16FF0Cu;
        goto label_16ff0c;
    }
    ctx->pc = 0x16FF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FF0Cu;
label_16ff0c:
    // 0x16ff0c: 0x0  nop
    ctx->pc = 0x16ff0cu;
    // NOP
    ctx->pc = 0x16ff10u;
}
