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

// Function: sub_0044F0F0
// Address: 0x44f0f0 - 0x44f160
void sub_0044F0F0_0x44f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F0F0_0x44f0f0");
#endif

    switch (ctx->pc) {
        case 0x44f0f0u: goto label_44f0f0;
        case 0x44f0f4u: goto label_44f0f4;
        case 0x44f0f8u: goto label_44f0f8;
        case 0x44f0fcu: goto label_44f0fc;
        case 0x44f100u: goto label_44f100;
        case 0x44f104u: goto label_44f104;
        case 0x44f108u: goto label_44f108;
        case 0x44f10cu: goto label_44f10c;
        case 0x44f110u: goto label_44f110;
        case 0x44f114u: goto label_44f114;
        case 0x44f118u: goto label_44f118;
        case 0x44f11cu: goto label_44f11c;
        case 0x44f120u: goto label_44f120;
        case 0x44f124u: goto label_44f124;
        case 0x44f128u: goto label_44f128;
        case 0x44f12cu: goto label_44f12c;
        case 0x44f130u: goto label_44f130;
        case 0x44f134u: goto label_44f134;
        case 0x44f138u: goto label_44f138;
        case 0x44f13cu: goto label_44f13c;
        case 0x44f140u: goto label_44f140;
        case 0x44f144u: goto label_44f144;
        case 0x44f148u: goto label_44f148;
        case 0x44f14cu: goto label_44f14c;
        case 0x44f150u: goto label_44f150;
        case 0x44f154u: goto label_44f154;
        case 0x44f158u: goto label_44f158;
        case 0x44f15cu: goto label_44f15c;
        default: break;
    }

    ctx->pc = 0x44f0f0u;

label_44f0f0:
    // 0x44f0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f0f4:
    // 0x44f0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44f0f8:
    // 0x44f0f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44f0fc:
    // 0x44f0fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f100:
    // 0x44f100: 0xc113b08  jal         func_44EC20
label_44f104:
    if (ctx->pc == 0x44F104u) {
        ctx->pc = 0x44F108u;
        goto label_44f108;
    }
    ctx->pc = 0x44F100u;
    SET_GPR_U32(ctx, 31, 0x44F108u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44F100u, 0x44F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F108u;
label_44f108:
    // 0x44f108: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44f108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44f10c:
    // 0x44f10c: 0x24636ae0  addiu       $v1, $v1, 0x6AE0
    ctx->pc = 0x44f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27360));
label_44f110:
    // 0x44f110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f114:
    // 0x44f114: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44f114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44f118:
    // 0x44f118: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f11c:
    // 0x44f11c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f120:
    // 0x44f120: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f124:
    // 0x44f124: 0x320f809  jalr        $t9
label_44f128:
    if (ctx->pc == 0x44F128u) {
        ctx->pc = 0x44F12Cu;
        goto label_44f12c;
    }
    ctx->pc = 0x44F124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F12Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F124u, 0x44F12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F12Cu;
label_44f12c:
    // 0x44f12c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f130:
    // 0x44f130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44f134:
    // 0x44f134: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44f134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44f138:
    // 0x44f138: 0x3e00008  jr          $ra
label_44f13c:
    if (ctx->pc == 0x44F13Cu) {
        ctx->pc = 0x44F140u;
        goto label_44f140;
    }
    ctx->pc = 0x44F138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F140u;
label_44f140:
    // 0x44f140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44f144:
    // 0x44f144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44f144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44f148:
    // 0x44f148: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f14c:
    // 0x44f14c: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44f14cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44f150:
    // 0x44f150: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44f154:
    // 0x44f154: 0x3e00008  jr          $ra
label_44f158:
    if (ctx->pc == 0x44F158u) {
        ctx->pc = 0x44F15Cu;
        goto label_44f15c;
    }
    ctx->pc = 0x44F154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F15Cu;
label_44f15c:
    // 0x44f15c: 0x0  nop
    ctx->pc = 0x44f15cu;
    // NOP
    ctx->pc = 0x44f160u;
}
