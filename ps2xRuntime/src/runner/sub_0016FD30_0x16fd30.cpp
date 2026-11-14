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

// Function: sub_0016FD30
// Address: 0x16fd30 - 0x16fd90
void sub_0016FD30_0x16fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FD30_0x16fd30");
#endif

    switch (ctx->pc) {
        case 0x16fd30u: goto label_16fd30;
        case 0x16fd34u: goto label_16fd34;
        case 0x16fd38u: goto label_16fd38;
        case 0x16fd3cu: goto label_16fd3c;
        case 0x16fd40u: goto label_16fd40;
        case 0x16fd44u: goto label_16fd44;
        case 0x16fd48u: goto label_16fd48;
        case 0x16fd4cu: goto label_16fd4c;
        case 0x16fd50u: goto label_16fd50;
        case 0x16fd54u: goto label_16fd54;
        case 0x16fd58u: goto label_16fd58;
        case 0x16fd5cu: goto label_16fd5c;
        case 0x16fd60u: goto label_16fd60;
        case 0x16fd64u: goto label_16fd64;
        case 0x16fd68u: goto label_16fd68;
        case 0x16fd6cu: goto label_16fd6c;
        case 0x16fd70u: goto label_16fd70;
        case 0x16fd74u: goto label_16fd74;
        case 0x16fd78u: goto label_16fd78;
        case 0x16fd7cu: goto label_16fd7c;
        case 0x16fd80u: goto label_16fd80;
        case 0x16fd84u: goto label_16fd84;
        case 0x16fd88u: goto label_16fd88;
        case 0x16fd8cu: goto label_16fd8c;
        default: break;
    }

    ctx->pc = 0x16fd30u;

label_16fd30:
    // 0x16fd30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16fd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16fd34:
    // 0x16fd34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16fd38:
    // 0x16fd38: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_16fd3c:
    // 0x16fd3c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x16fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_16fd40:
    // 0x16fd40: 0x8f82bad4  lw          $v0, -0x452C($gp)
    ctx->pc = 0x16fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fd44:
    // 0x16fd44: 0x1002000c  beq         $zero, $v0, . + 4 + (0xC << 2)
label_16fd48:
    if (ctx->pc == 0x16FD48u) {
        ctx->pc = 0x16FD4Cu;
        goto label_16fd4c;
    }
    ctx->pc = 0x16FD44u;
    {
        const bool branch_taken_0x16fd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x16fd44) {
            ctx->pc = 0x16FD78u;
            goto label_16fd78;
        }
    }
    ctx->pc = 0x16FD4Cu;
label_16fd4c:
    // 0x16fd4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_16fd50:
    // 0x16fd50: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_16fd54:
    // 0x16fd54: 0xc08de14  jal         func_237850
label_16fd58:
    if (ctx->pc == 0x16FD58u) {
        ctx->pc = 0x16FD5Cu;
        goto label_16fd5c;
    }
    ctx->pc = 0x16FD54u;
    SET_GPR_U32(ctx, 31, 0x16FD5Cu);
    ctx->pc = 0x237850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237850u, 0x16FD54u, 0x16FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FD5Cu;
label_16fd5c:
    // 0x16fd5c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x16fd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_16fd60:
    // 0x16fd60: 0x8f84bad4  lw          $a0, -0x452C($gp)
    ctx->pc = 0x16fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949588)));
label_16fd64:
    // 0x16fd64: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x16fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_16fd68:
    // 0x16fd68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16fd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16fd6c:
    // 0x16fd6c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x16fd6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_16fd70:
    // 0x16fd70: 0x320f809  jalr        $t9
label_16fd74:
    if (ctx->pc == 0x16FD74u) {
        ctx->pc = 0x16FD78u;
        goto label_16fd78;
    }
    ctx->pc = 0x16FD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16FD78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD70u, 0x16FD78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16FD78u;
label_16fd78:
    // 0x16fd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fd7c:
    // 0x16fd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16fd80:
    // 0x16fd80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16fd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16fd84:
    // 0x16fd84: 0x3e00008  jr          $ra
label_16fd88:
    if (ctx->pc == 0x16FD88u) {
        ctx->pc = 0x16FD8Cu;
        goto label_16fd8c;
    }
    ctx->pc = 0x16FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD8Cu;
label_16fd8c:
    // 0x16fd8c: 0x0  nop
    ctx->pc = 0x16fd8cu;
    // NOP
    ctx->pc = 0x16fd90u;
}
