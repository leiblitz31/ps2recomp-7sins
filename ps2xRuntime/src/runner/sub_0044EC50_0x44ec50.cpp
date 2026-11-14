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

// Function: sub_0044EC50
// Address: 0x44ec50 - 0x44ecd0
void sub_0044EC50_0x44ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EC50_0x44ec50");
#endif

    switch (ctx->pc) {
        case 0x44ec50u: goto label_44ec50;
        case 0x44ec54u: goto label_44ec54;
        case 0x44ec58u: goto label_44ec58;
        case 0x44ec5cu: goto label_44ec5c;
        case 0x44ec60u: goto label_44ec60;
        case 0x44ec64u: goto label_44ec64;
        case 0x44ec68u: goto label_44ec68;
        case 0x44ec6cu: goto label_44ec6c;
        case 0x44ec70u: goto label_44ec70;
        case 0x44ec74u: goto label_44ec74;
        case 0x44ec78u: goto label_44ec78;
        case 0x44ec7cu: goto label_44ec7c;
        case 0x44ec80u: goto label_44ec80;
        case 0x44ec84u: goto label_44ec84;
        case 0x44ec88u: goto label_44ec88;
        case 0x44ec8cu: goto label_44ec8c;
        case 0x44ec90u: goto label_44ec90;
        case 0x44ec94u: goto label_44ec94;
        case 0x44ec98u: goto label_44ec98;
        case 0x44ec9cu: goto label_44ec9c;
        case 0x44eca0u: goto label_44eca0;
        case 0x44eca4u: goto label_44eca4;
        case 0x44eca8u: goto label_44eca8;
        case 0x44ecacu: goto label_44ecac;
        case 0x44ecb0u: goto label_44ecb0;
        case 0x44ecb4u: goto label_44ecb4;
        case 0x44ecb8u: goto label_44ecb8;
        case 0x44ecbcu: goto label_44ecbc;
        case 0x44ecc0u: goto label_44ecc0;
        case 0x44ecc4u: goto label_44ecc4;
        case 0x44ecc8u: goto label_44ecc8;
        case 0x44ecccu: goto label_44eccc;
        default: break;
    }

    ctx->pc = 0x44ec50u;

label_44ec50:
    // 0x44ec50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ec54:
    // 0x44ec54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ec58:
    // 0x44ec58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44ec5c:
    // 0x44ec5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ec60:
    // 0x44ec60: 0xc113b08  jal         func_44EC20
label_44ec64:
    if (ctx->pc == 0x44EC64u) {
        ctx->pc = 0x44EC68u;
        goto label_44ec68;
    }
    ctx->pc = 0x44EC60u;
    SET_GPR_U32(ctx, 31, 0x44EC68u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44EC60u, 0x44EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EC68u;
label_44ec68:
    // 0x44ec68: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44ec6c:
    // 0x44ec6c: 0x24636b70  addiu       $v1, $v1, 0x6B70
    ctx->pc = 0x44ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27504));
label_44ec70:
    // 0x44ec70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ec74:
    // 0x44ec74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ec74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44ec78:
    // 0x44ec78: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ec7c:
    // 0x44ec7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ec7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ec80:
    // 0x44ec80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ec80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ec84:
    // 0x44ec84: 0x320f809  jalr        $t9
label_44ec88:
    if (ctx->pc == 0x44EC88u) {
        ctx->pc = 0x44EC8Cu;
        goto label_44ec8c;
    }
    ctx->pc = 0x44EC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EC8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EC84u, 0x44EC8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44EC8Cu;
label_44ec8c:
    // 0x44ec8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ec90:
    // 0x44ec90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ec94:
    // 0x44ec94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44ec94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44ec98:
    // 0x44ec98: 0x3e00008  jr          $ra
label_44ec9c:
    if (ctx->pc == 0x44EC9Cu) {
        ctx->pc = 0x44ECA0u;
        goto label_44eca0;
    }
    ctx->pc = 0x44EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44ECA0u;
label_44eca0:
    // 0x44eca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44eca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44eca4:
    // 0x44eca4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44eca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44eca8:
    // 0x44eca8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44ecac:
    // 0x44ecac: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44ecb0:
    // 0x44ecb0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44ecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44ecb4:
    // 0x44ecb4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x44ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_44ecb8:
    // 0x44ecb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x44ecb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_44ecbc:
    // 0x44ecbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44ecc0:
    // 0x44ecc0: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x44ecc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_44ecc4:
    // 0x44ecc4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44ecc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ecc8:
    // 0x44ecc8: 0x3e00008  jr          $ra
label_44eccc:
    if (ctx->pc == 0x44ECCCu) {
        ctx->pc = 0x44ECD0u;
        goto label_fallthrough_0x44ecc8;
    }
    ctx->pc = 0x44ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x44ecc8:
    ctx->pc = 0x44ECD0u;
}
