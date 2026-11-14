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

// Function: sub_0044EF60
// Address: 0x44ef60 - 0x44efe0
void sub_0044EF60_0x44ef60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EF60_0x44ef60");
#endif

    switch (ctx->pc) {
        case 0x44ef60u: goto label_44ef60;
        case 0x44ef64u: goto label_44ef64;
        case 0x44ef68u: goto label_44ef68;
        case 0x44ef6cu: goto label_44ef6c;
        case 0x44ef70u: goto label_44ef70;
        case 0x44ef74u: goto label_44ef74;
        case 0x44ef78u: goto label_44ef78;
        case 0x44ef7cu: goto label_44ef7c;
        case 0x44ef80u: goto label_44ef80;
        case 0x44ef84u: goto label_44ef84;
        case 0x44ef88u: goto label_44ef88;
        case 0x44ef8cu: goto label_44ef8c;
        case 0x44ef90u: goto label_44ef90;
        case 0x44ef94u: goto label_44ef94;
        case 0x44ef98u: goto label_44ef98;
        case 0x44ef9cu: goto label_44ef9c;
        case 0x44efa0u: goto label_44efa0;
        case 0x44efa4u: goto label_44efa4;
        case 0x44efa8u: goto label_44efa8;
        case 0x44efacu: goto label_44efac;
        case 0x44efb0u: goto label_44efb0;
        case 0x44efb4u: goto label_44efb4;
        case 0x44efb8u: goto label_44efb8;
        case 0x44efbcu: goto label_44efbc;
        case 0x44efc0u: goto label_44efc0;
        case 0x44efc4u: goto label_44efc4;
        case 0x44efc8u: goto label_44efc8;
        case 0x44efccu: goto label_44efcc;
        case 0x44efd0u: goto label_44efd0;
        case 0x44efd4u: goto label_44efd4;
        case 0x44efd8u: goto label_44efd8;
        case 0x44efdcu: goto label_44efdc;
        default: break;
    }

    ctx->pc = 0x44ef60u;

label_44ef60:
    // 0x44ef60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ef60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44ef64:
    // 0x44ef64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44ef64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44ef68:
    // 0x44ef68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44ef68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44ef6c:
    // 0x44ef6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef70:
    // 0x44ef70: 0xc113b08  jal         func_44EC20
label_44ef74:
    if (ctx->pc == 0x44EF74u) {
        ctx->pc = 0x44EF78u;
        goto label_44ef78;
    }
    ctx->pc = 0x44EF70u;
    SET_GPR_U32(ctx, 31, 0x44EF78u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44EF70u, 0x44EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EF78u;
label_44ef78:
    // 0x44ef78: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44ef7c:
    // 0x44ef7c: 0x24636b10  addiu       $v1, $v1, 0x6B10
    ctx->pc = 0x44ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27408));
label_44ef80:
    // 0x44ef80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef84:
    // 0x44ef84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44ef88:
    // 0x44ef88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef8c:
    // 0x44ef8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ef8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ef90:
    // 0x44ef90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ef90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ef94:
    // 0x44ef94: 0x320f809  jalr        $t9
label_44ef98:
    if (ctx->pc == 0x44EF98u) {
        ctx->pc = 0x44EF9Cu;
        goto label_44ef9c;
    }
    ctx->pc = 0x44EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EF9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EF94u, 0x44EF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44EF9Cu;
label_44ef9c:
    // 0x44ef9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44efa0:
    // 0x44efa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44efa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44efa4:
    // 0x44efa4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44efa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44efa8:
    // 0x44efa8: 0x3e00008  jr          $ra
label_44efac:
    if (ctx->pc == 0x44EFACu) {
        ctx->pc = 0x44EFB0u;
        goto label_44efb0;
    }
    ctx->pc = 0x44EFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EFB0u;
label_44efb0:
    // 0x44efb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44efb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44efb4:
    // 0x44efb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44efb8:
    // 0x44efb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44efbc:
    // 0x44efbc: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44efbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44efc0:
    // 0x44efc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44efc4:
    // 0x44efc4: 0xa0600024  sb          $zero, 0x24($v1)
    ctx->pc = 0x44efc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 0));
label_44efc8:
    // 0x44efc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44efc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44efcc:
    // 0x44efcc: 0x3e00008  jr          $ra
label_44efd0:
    if (ctx->pc == 0x44EFD0u) {
        ctx->pc = 0x44EFD4u;
        goto label_44efd4;
    }
    ctx->pc = 0x44EFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EFD4u;
label_44efd4:
    // 0x44efd4: 0x0  nop
    ctx->pc = 0x44efd4u;
    // NOP
label_44efd8:
    // 0x44efd8: 0x0  nop
    ctx->pc = 0x44efd8u;
    // NOP
label_44efdc:
    // 0x44efdc: 0x0  nop
    ctx->pc = 0x44efdcu;
    // NOP
    ctx->pc = 0x44efe0u;
}
