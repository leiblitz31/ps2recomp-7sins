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

// Function: sub_0044EFE0
// Address: 0x44efe0 - 0x44f070
void sub_0044EFE0_0x44efe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044EFE0_0x44efe0");
#endif

    switch (ctx->pc) {
        case 0x44efe0u: goto label_44efe0;
        case 0x44efe4u: goto label_44efe4;
        case 0x44efe8u: goto label_44efe8;
        case 0x44efecu: goto label_44efec;
        case 0x44eff0u: goto label_44eff0;
        case 0x44eff4u: goto label_44eff4;
        case 0x44eff8u: goto label_44eff8;
        case 0x44effcu: goto label_44effc;
        case 0x44f000u: goto label_44f000;
        case 0x44f004u: goto label_44f004;
        case 0x44f008u: goto label_44f008;
        case 0x44f00cu: goto label_44f00c;
        case 0x44f010u: goto label_44f010;
        case 0x44f014u: goto label_44f014;
        case 0x44f018u: goto label_44f018;
        case 0x44f01cu: goto label_44f01c;
        case 0x44f020u: goto label_44f020;
        case 0x44f024u: goto label_44f024;
        case 0x44f028u: goto label_44f028;
        case 0x44f02cu: goto label_44f02c;
        case 0x44f030u: goto label_44f030;
        case 0x44f034u: goto label_44f034;
        case 0x44f038u: goto label_44f038;
        case 0x44f03cu: goto label_44f03c;
        case 0x44f040u: goto label_44f040;
        case 0x44f044u: goto label_44f044;
        case 0x44f048u: goto label_44f048;
        case 0x44f04cu: goto label_44f04c;
        case 0x44f050u: goto label_44f050;
        case 0x44f054u: goto label_44f054;
        case 0x44f058u: goto label_44f058;
        case 0x44f05cu: goto label_44f05c;
        case 0x44f060u: goto label_44f060;
        case 0x44f064u: goto label_44f064;
        case 0x44f068u: goto label_44f068;
        case 0x44f06cu: goto label_44f06c;
        default: break;
    }

    ctx->pc = 0x44efe0u;

label_44efe0:
    // 0x44efe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44efe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44efe4:
    // 0x44efe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44efe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44efe8:
    // 0x44efe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44efec:
    // 0x44efec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44eff0:
    // 0x44eff0: 0xc113b08  jal         func_44EC20
label_44eff4:
    if (ctx->pc == 0x44EFF4u) {
        ctx->pc = 0x44EFF8u;
        goto label_44eff8;
    }
    ctx->pc = 0x44EFF0u;
    SET_GPR_U32(ctx, 31, 0x44EFF8u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44EFF0u, 0x44EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44EFF8u;
label_44eff8:
    // 0x44eff8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44effc:
    // 0x44effc: 0x24636b00  addiu       $v1, $v1, 0x6B00
    ctx->pc = 0x44effcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27392));
label_44f000:
    // 0x44f000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f004:
    // 0x44f004: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44f004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44f008:
    // 0x44f008: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f00c:
    // 0x44f00c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f00cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f010:
    // 0x44f010: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f014:
    // 0x44f014: 0x320f809  jalr        $t9
label_44f018:
    if (ctx->pc == 0x44F018u) {
        ctx->pc = 0x44F01Cu;
        goto label_44f01c;
    }
    ctx->pc = 0x44F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F01Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F014u, 0x44F01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F01Cu;
label_44f01c:
    // 0x44f01c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f020:
    // 0x44f020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44f024:
    // 0x44f024: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44f024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44f028:
    // 0x44f028: 0x3e00008  jr          $ra
label_44f02c:
    if (ctx->pc == 0x44F02Cu) {
        ctx->pc = 0x44F030u;
        goto label_44f030;
    }
    ctx->pc = 0x44F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F030u;
label_44f030:
    // 0x44f030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44f034:
    // 0x44f034: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44f034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44f038:
    // 0x44f038: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f03c:
    // 0x44f03c: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44f03cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44f040:
    // 0x44f040: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f044:
    // 0x44f044: 0xa0600044  sb          $zero, 0x44($v1)
    ctx->pc = 0x44f044u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 0));
label_44f048:
    // 0x44f048: 0x263c  dsll32      $a0, $zero, 24
    ctx->pc = 0x44f048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (32 + 24));
label_44f04c:
    // 0x44f04c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x44f04cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_44f050:
    // 0x44f050: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f054:
    // 0x44f054: 0xa0640024  sb          $a0, 0x24($v1)
    ctx->pc = 0x44f054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 4));
label_44f058:
    // 0x44f058: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f05c:
    // 0x44f05c: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x44f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
label_44f060:
    // 0x44f060: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44f064:
    // 0x44f064: 0x3e00008  jr          $ra
label_44f068:
    if (ctx->pc == 0x44F068u) {
        ctx->pc = 0x44F06Cu;
        goto label_44f06c;
    }
    ctx->pc = 0x44F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F06Cu;
label_44f06c:
    // 0x44f06c: 0x0  nop
    ctx->pc = 0x44f06cu;
    // NOP
    ctx->pc = 0x44f070u;
}
