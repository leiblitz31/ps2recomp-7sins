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

// Function: sub_0044EEF0
// Address: 0x44eef0 - 0x44ef60
void sub_0044EEF0_0x44eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EEF0_0x44eef0");
#endif

    switch (ctx->pc) {
        case 0x44eef0u: goto label_44eef0;
        case 0x44eef4u: goto label_44eef4;
        case 0x44eef8u: goto label_44eef8;
        case 0x44eefcu: goto label_44eefc;
        case 0x44ef00u: goto label_44ef00;
        case 0x44ef04u: goto label_44ef04;
        case 0x44ef08u: goto label_44ef08;
        case 0x44ef0cu: goto label_44ef0c;
        case 0x44ef10u: goto label_44ef10;
        case 0x44ef14u: goto label_44ef14;
        case 0x44ef18u: goto label_44ef18;
        case 0x44ef1cu: goto label_44ef1c;
        case 0x44ef20u: goto label_44ef20;
        case 0x44ef24u: goto label_44ef24;
        case 0x44ef28u: goto label_44ef28;
        case 0x44ef2cu: goto label_44ef2c;
        case 0x44ef30u: goto label_44ef30;
        case 0x44ef34u: goto label_44ef34;
        case 0x44ef38u: goto label_44ef38;
        case 0x44ef3cu: goto label_44ef3c;
        case 0x44ef40u: goto label_44ef40;
        case 0x44ef44u: goto label_44ef44;
        case 0x44ef48u: goto label_44ef48;
        case 0x44ef4cu: goto label_44ef4c;
        case 0x44ef50u: goto label_44ef50;
        case 0x44ef54u: goto label_44ef54;
        case 0x44ef58u: goto label_44ef58;
        case 0x44ef5cu: goto label_44ef5c;
        default: break;
    }

    ctx->pc = 0x44eef0u;

label_44eef0:
    // 0x44eef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44eef4:
    // 0x44eef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44eef8:
    // 0x44eef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44eefc:
    // 0x44eefc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44eefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef00:
    // 0x44ef00: 0xc113b08  jal         func_44EC20
label_44ef04:
    if (ctx->pc == 0x44EF04u) {
        ctx->pc = 0x44EF08u;
        goto label_44ef08;
    }
    ctx->pc = 0x44EF00u;
    SET_GPR_U32(ctx, 31, 0x44EF08u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44EF00u, 0x44EF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EF08u;
label_44ef08:
    // 0x44ef08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44ef0c:
    // 0x44ef0c: 0x24636b20  addiu       $v1, $v1, 0x6B20
    ctx->pc = 0x44ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27424));
label_44ef10:
    // 0x44ef10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef14:
    // 0x44ef14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44ef18:
    // 0x44ef18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef1c:
    // 0x44ef1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44ef1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44ef20:
    // 0x44ef20: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44ef20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44ef24:
    // 0x44ef24: 0x320f809  jalr        $t9
label_44ef28:
    if (ctx->pc == 0x44EF28u) {
        ctx->pc = 0x44EF2Cu;
        goto label_44ef2c;
    }
    ctx->pc = 0x44EF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44EF2Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EF24u, 0x44EF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44EF2Cu;
label_44ef2c:
    // 0x44ef2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44ef30:
    // 0x44ef30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ef34:
    // 0x44ef34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44ef34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44ef38:
    // 0x44ef38: 0x3e00008  jr          $ra
label_44ef3c:
    if (ctx->pc == 0x44EF3Cu) {
        ctx->pc = 0x44EF40u;
        goto label_44ef40;
    }
    ctx->pc = 0x44EF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EF40u;
label_44ef40:
    // 0x44ef40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44ef40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44ef44:
    // 0x44ef44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44ef48:
    // 0x44ef48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44ef4c:
    // 0x44ef4c: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44ef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44ef50:
    // 0x44ef50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44ef54:
    // 0x44ef54: 0x3e00008  jr          $ra
label_44ef58:
    if (ctx->pc == 0x44EF58u) {
        ctx->pc = 0x44EF5Cu;
        goto label_44ef5c;
    }
    ctx->pc = 0x44EF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44EF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44EF5Cu;
label_44ef5c:
    // 0x44ef5c: 0x0  nop
    ctx->pc = 0x44ef5cu;
    // NOP
    ctx->pc = 0x44ef60u;
}
