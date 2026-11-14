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

// Function: sub_0016FC70
// Address: 0x16fc70 - 0x16fcd0
void sub_0016FC70_0x16fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FC70_0x16fc70");
#endif

    switch (ctx->pc) {
        case 0x16fc70u: goto label_16fc70;
        case 0x16fc74u: goto label_16fc74;
        case 0x16fc78u: goto label_16fc78;
        case 0x16fc7cu: goto label_16fc7c;
        case 0x16fc80u: goto label_16fc80;
        case 0x16fc84u: goto label_16fc84;
        case 0x16fc88u: goto label_16fc88;
        case 0x16fc8cu: goto label_16fc8c;
        case 0x16fc90u: goto label_16fc90;
        case 0x16fc94u: goto label_16fc94;
        case 0x16fc98u: goto label_16fc98;
        case 0x16fc9cu: goto label_16fc9c;
        case 0x16fca0u: goto label_16fca0;
        case 0x16fca4u: goto label_16fca4;
        case 0x16fca8u: goto label_16fca8;
        case 0x16fcacu: goto label_16fcac;
        case 0x16fcb0u: goto label_16fcb0;
        case 0x16fcb4u: goto label_16fcb4;
        case 0x16fcb8u: goto label_16fcb8;
        case 0x16fcbcu: goto label_16fcbc;
        case 0x16fcc0u: goto label_16fcc0;
        case 0x16fcc4u: goto label_16fcc4;
        case 0x16fcc8u: goto label_16fcc8;
        case 0x16fcccu: goto label_16fccc;
        default: break;
    }

    ctx->pc = 0x16fc70u;

label_16fc70:
    // 0x16fc70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16fc74:
    // 0x16fc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fc78:
    // 0x16fc78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16fc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16fc7c:
    // 0x16fc7c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16fc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16fc80:
    // 0x16fc80: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fc84:
    // 0x16fc84: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16fc88:
    if (ctx->pc == 0x16FC88u) {
        ctx->pc = 0x16FC8Cu;
        goto label_16fc8c;
    }
    ctx->pc = 0x16FC84u;
    {
        const bool branch_taken_0x16fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fc84) {
            ctx->pc = 0x16FCB8u;
            goto label_16fcb8;
        }
    }
    ctx->pc = 0x16FC8Cu;
label_16fc8c:
    // 0x16fc8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16fc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fc90:
    // 0x16fc90: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16fc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16fc94:
    // 0x16fc94: 0xc08de14  jal         func_237850
label_16fc98:
    if (ctx->pc == 0x16FC98u) {
        ctx->pc = 0x16FC9Cu;
        goto label_16fc9c;
    }
    ctx->pc = 0x16FC94u;
    SET_GPR_U32(ctx, 31, 0x16FC9Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FC94u, 0x16FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC9Cu;
label_16fc9c:
    // 0x16fc9c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16fc9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16fca0:
    // 0x16fca0: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fca4:
    // 0x16fca4: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16fca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16fca8:
    // 0x16fca8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fcac:
    // 0x16fcac: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_16fcb0:
    // 0x16fcb0: 0x320f809  jalr        $t9
label_16fcb4:
    if (ctx->pc == 0x16FCB4u) {
        ctx->pc = 0x16FCB8u;
        goto label_16fcb8;
    }
    ctx->pc = 0x16FCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FCB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FCB0u, 0x16FCB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FCB8u;
label_16fcb8:
    // 0x16fcb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fcbc:
    // 0x16fcbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fcc0:
    // 0x16fcc0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16fcc4:
    // 0x16fcc4: 0x3e00008  jr          $ra
label_16fcc8:
    if (ctx->pc == 0x16FCC8u) {
        ctx->pc = 0x16FCCCu;
        goto label_16fccc;
    }
    ctx->pc = 0x16FCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FCCCu;
label_16fccc:
    // 0x16fccc: 0x0  nop
    ctx->pc = 0x16fcccu;
    // NOP
    ctx->pc = 0x16fcd0u;
}
