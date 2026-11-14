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

// Function: sub_0044ECD0
// Address: 0x44ecd0 - 0x44ed50
void sub_0044ECD0_0x44ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ECD0_0x44ecd0");
#endif

    switch (ctx->pc) {
        case 0x44ecd0u: goto label_44ecd0;
        case 0x44ecd4u: goto label_44ecd4;
        case 0x44ecd8u: goto label_44ecd8;
        case 0x44ecdcu: goto label_44ecdc;
        case 0x44ece0u: goto label_44ece0;
        case 0x44ece4u: goto label_44ece4;
        case 0x44ece8u: goto label_44ece8;
        case 0x44ececu: goto label_44ecec;
        case 0x44ecf0u: goto label_44ecf0;
        case 0x44ecf4u: goto label_44ecf4;
        case 0x44ecf8u: goto label_44ecf8;
        case 0x44ecfcu: goto label_44ecfc;
        case 0x44ed00u: goto label_44ed00;
        case 0x44ed04u: goto label_44ed04;
        case 0x44ed08u: goto label_44ed08;
        case 0x44ed0cu: goto label_44ed0c;
        case 0x44ed10u: goto label_44ed10;
        case 0x44ed14u: goto label_44ed14;
        case 0x44ed18u: goto label_44ed18;
        case 0x44ed1cu: goto label_44ed1c;
        case 0x44ed20u: goto label_44ed20;
        case 0x44ed24u: goto label_44ed24;
        case 0x44ed28u: goto label_44ed28;
        case 0x44ed2cu: goto label_44ed2c;
        case 0x44ed30u: goto label_44ed30;
        case 0x44ed34u: goto label_44ed34;
        case 0x44ed38u: goto label_44ed38;
        case 0x44ed3cu: goto label_44ed3c;
        case 0x44ed40u: goto label_44ed40;
        case 0x44ed44u: goto label_44ed44;
        case 0x44ed48u: goto label_44ed48;
        case 0x44ed4cu: goto label_44ed4c;
        default: break;
    }

    ctx->pc = 0x44ecd0u;

label_44ecd0:
    // 0x44ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ecd4:
    // 0x44ecd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ecd8:
    // 0x44ecd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44ecdc:
    // 0x44ecdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ece0:
    // 0x44ece0: 0xc113b08  jal         func_44EC20
label_44ece4:
    if (ctx->pc == 0x44ECE4u) {
        ctx->pc = 0x44ECE8u;
        goto label_44ece8;
    }
    ctx->pc = 0x44ECE0u;
    SET_GPR_U32(ctx, 31, 0x44ECE8u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44ECE0u, 0x44ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44ECE8u;
label_44ece8:
    // 0x44ece8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44ecec:
    // 0x44ecec: 0x24636b60  addiu       $v1, $v1, 0x6B60
    ctx->pc = 0x44ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27488));
label_44ecf0:
    // 0x44ecf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ecf4:
    // 0x44ecf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44ecf8:
    // 0x44ecf8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ecfc:
    // 0x44ecfc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ecfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ed00:
    // 0x44ed00: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ed00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ed04:
    // 0x44ed04: 0x320f809  jalr        $t9
label_44ed08:
    if (ctx->pc == 0x44ED08u) {
        ctx->pc = 0x44ED0Cu;
        goto label_44ed0c;
    }
    ctx->pc = 0x44ED04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44ED0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED04u, 0x44ED0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44ED0Cu;
label_44ed0c:
    // 0x44ed0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ed10:
    // 0x44ed10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ed10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ed14:
    // 0x44ed14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44ed14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44ed18:
    // 0x44ed18: 0x3e00008  jr          $ra
label_44ed1c:
    if (ctx->pc == 0x44ED1Cu) {
        ctx->pc = 0x44ED20u;
        goto label_44ed20;
    }
    ctx->pc = 0x44ED18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ED20u;
label_44ed20:
    // 0x44ed20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44ed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44ed24:
    // 0x44ed24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44ed28:
    // 0x44ed28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44ed2c:
    // 0x44ed2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x44ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_44ed30:
    // 0x44ed30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44ed30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44ed34:
    // 0x44ed34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44ed38:
    // 0x44ed38: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x44ed38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_44ed3c:
    // 0x44ed3c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44ed3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ed40:
    // 0x44ed40: 0x3e00008  jr          $ra
label_44ed44:
    if (ctx->pc == 0x44ED44u) {
        ctx->pc = 0x44ED48u;
        goto label_44ed48;
    }
    ctx->pc = 0x44ED40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ED40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ED48u;
label_44ed48:
    // 0x44ed48: 0x0  nop
    ctx->pc = 0x44ed48u;
    // NOP
label_44ed4c:
    // 0x44ed4c: 0x0  nop
    ctx->pc = 0x44ed4cu;
    // NOP
    ctx->pc = 0x44ed50u;
}
