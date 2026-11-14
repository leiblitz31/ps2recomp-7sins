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

// Function: sub_0016FE50
// Address: 0x16fe50 - 0x16feb0
void sub_0016FE50_0x16fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FE50_0x16fe50");
#endif

    switch (ctx->pc) {
        case 0x16fe50u: goto label_16fe50;
        case 0x16fe54u: goto label_16fe54;
        case 0x16fe58u: goto label_16fe58;
        case 0x16fe5cu: goto label_16fe5c;
        case 0x16fe60u: goto label_16fe60;
        case 0x16fe64u: goto label_16fe64;
        case 0x16fe68u: goto label_16fe68;
        case 0x16fe6cu: goto label_16fe6c;
        case 0x16fe70u: goto label_16fe70;
        case 0x16fe74u: goto label_16fe74;
        case 0x16fe78u: goto label_16fe78;
        case 0x16fe7cu: goto label_16fe7c;
        case 0x16fe80u: goto label_16fe80;
        case 0x16fe84u: goto label_16fe84;
        case 0x16fe88u: goto label_16fe88;
        case 0x16fe8cu: goto label_16fe8c;
        case 0x16fe90u: goto label_16fe90;
        case 0x16fe94u: goto label_16fe94;
        case 0x16fe98u: goto label_16fe98;
        case 0x16fe9cu: goto label_16fe9c;
        case 0x16fea0u: goto label_16fea0;
        case 0x16fea4u: goto label_16fea4;
        case 0x16fea8u: goto label_16fea8;
        case 0x16feacu: goto label_16feac;
        default: break;
    }

    ctx->pc = 0x16fe50u;

label_16fe50:
    // 0x16fe50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16fe54:
    // 0x16fe54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fe58:
    // 0x16fe58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16fe5c:
    // 0x16fe5c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16fe60:
    // 0x16fe60: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fe64:
    // 0x16fe64: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16fe68:
    if (ctx->pc == 0x16FE68u) {
        ctx->pc = 0x16FE6Cu;
        goto label_16fe6c;
    }
    ctx->pc = 0x16FE64u;
    {
        const bool branch_taken_0x16fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fe64) {
            ctx->pc = 0x16FE98u;
            goto label_16fe98;
        }
    }
    ctx->pc = 0x16FE6Cu;
label_16fe6c:
    // 0x16fe6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16fe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fe70:
    // 0x16fe70: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16fe70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16fe74:
    // 0x16fe74: 0xc08de14  jal         func_237850
label_16fe78:
    if (ctx->pc == 0x16FE78u) {
        ctx->pc = 0x16FE7Cu;
        goto label_16fe7c;
    }
    ctx->pc = 0x16FE74u;
    SET_GPR_U32(ctx, 31, 0x16FE7Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FE74u, 0x16FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FE7Cu;
label_16fe7c:
    // 0x16fe7c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16fe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16fe80:
    // 0x16fe80: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fe84:
    // 0x16fe84: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16fe88:
    // 0x16fe88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fe88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fe8c:
    // 0x16fe8c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x16fe8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_16fe90:
    // 0x16fe90: 0x320f809  jalr        $t9
label_16fe94:
    if (ctx->pc == 0x16FE94u) {
        ctx->pc = 0x16FE98u;
        goto label_16fe98;
    }
    ctx->pc = 0x16FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FE98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FE90u, 0x16FE98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FE98u;
label_16fe98:
    // 0x16fe98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fe9c:
    // 0x16fe9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fea0:
    // 0x16fea0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16fea4:
    // 0x16fea4: 0x3e00008  jr          $ra
label_16fea8:
    if (ctx->pc == 0x16FEA8u) {
        ctx->pc = 0x16FEACu;
        goto label_16feac;
    }
    ctx->pc = 0x16FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FEACu;
label_16feac:
    // 0x16feac: 0x0  nop
    ctx->pc = 0x16feacu;
    // NOP
    ctx->pc = 0x16feb0u;
}
