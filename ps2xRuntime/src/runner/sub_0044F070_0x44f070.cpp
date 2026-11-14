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

// Function: sub_0044F070
// Address: 0x44f070 - 0x44f0f0
void sub_0044F070_0x44f070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F070_0x44f070");
#endif

    switch (ctx->pc) {
        case 0x44f070u: goto label_44f070;
        case 0x44f074u: goto label_44f074;
        case 0x44f078u: goto label_44f078;
        case 0x44f07cu: goto label_44f07c;
        case 0x44f080u: goto label_44f080;
        case 0x44f084u: goto label_44f084;
        case 0x44f088u: goto label_44f088;
        case 0x44f08cu: goto label_44f08c;
        case 0x44f090u: goto label_44f090;
        case 0x44f094u: goto label_44f094;
        case 0x44f098u: goto label_44f098;
        case 0x44f09cu: goto label_44f09c;
        case 0x44f0a0u: goto label_44f0a0;
        case 0x44f0a4u: goto label_44f0a4;
        case 0x44f0a8u: goto label_44f0a8;
        case 0x44f0acu: goto label_44f0ac;
        case 0x44f0b0u: goto label_44f0b0;
        case 0x44f0b4u: goto label_44f0b4;
        case 0x44f0b8u: goto label_44f0b8;
        case 0x44f0bcu: goto label_44f0bc;
        case 0x44f0c0u: goto label_44f0c0;
        case 0x44f0c4u: goto label_44f0c4;
        case 0x44f0c8u: goto label_44f0c8;
        case 0x44f0ccu: goto label_44f0cc;
        case 0x44f0d0u: goto label_44f0d0;
        case 0x44f0d4u: goto label_44f0d4;
        case 0x44f0d8u: goto label_44f0d8;
        case 0x44f0dcu: goto label_44f0dc;
        case 0x44f0e0u: goto label_44f0e0;
        case 0x44f0e4u: goto label_44f0e4;
        case 0x44f0e8u: goto label_44f0e8;
        case 0x44f0ecu: goto label_44f0ec;
        default: break;
    }

    ctx->pc = 0x44f070u;

label_44f070:
    // 0x44f070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44f070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_44f074:
    // 0x44f074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44f078:
    // 0x44f078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_44f07c:
    // 0x44f07c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f080:
    // 0x44f080: 0xc113b08  jal         func_44EC20
label_44f084:
    if (ctx->pc == 0x44F084u) {
        ctx->pc = 0x44F088u;
        goto label_44f088;
    }
    ctx->pc = 0x44F080u;
    SET_GPR_U32(ctx, 31, 0x44F088u);
    ctx->pc = 0x44EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EC20u, 0x44F080u, 0x44F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F088u;
label_44f088:
    // 0x44f088: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44f088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_44f08c:
    // 0x44f08c: 0x24636af0  addiu       $v1, $v1, 0x6AF0
    ctx->pc = 0x44f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27376));
label_44f090:
    // 0x44f090: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f094:
    // 0x44f094: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x44f094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_44f098:
    // 0x44f098: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f09c:
    // 0x44f09c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44f09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44f0a0:
    // 0x44f0a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44f0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44f0a4:
    // 0x44f0a4: 0x320f809  jalr        $t9
label_44f0a8:
    if (ctx->pc == 0x44F0A8u) {
        ctx->pc = 0x44F0ACu;
        goto label_44f0ac;
    }
    ctx->pc = 0x44F0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44F0ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F0A4u, 0x44F0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x44F0ACu;
label_44f0ac:
    // 0x44f0ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_44f0b0:
    // 0x44f0b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44f0b4:
    // 0x44f0b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x44f0b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_44f0b8:
    // 0x44f0b8: 0x3e00008  jr          $ra
label_44f0bc:
    if (ctx->pc == 0x44F0BCu) {
        ctx->pc = 0x44F0C0u;
        goto label_44f0c0;
    }
    ctx->pc = 0x44F0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F0C0u;
label_44f0c0:
    // 0x44f0c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44f0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44f0c4:
    // 0x44f0c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_44f0c8:
    // 0x44f0c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f0cc:
    // 0x44f0cc: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x44f0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_44f0d0:
    // 0x44f0d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x44f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_44f0d4:
    // 0x44f0d4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x44f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_44f0d8:
    // 0x44f0d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x44f0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_44f0dc:
    // 0x44f0dc: 0x3e00008  jr          $ra
label_44f0e0:
    if (ctx->pc == 0x44F0E0u) {
        ctx->pc = 0x44F0E4u;
        goto label_44f0e4;
    }
    ctx->pc = 0x44F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F0E4u;
label_44f0e4:
    // 0x44f0e4: 0x0  nop
    ctx->pc = 0x44f0e4u;
    // NOP
label_44f0e8:
    // 0x44f0e8: 0x0  nop
    ctx->pc = 0x44f0e8u;
    // NOP
label_44f0ec:
    // 0x44f0ec: 0x0  nop
    ctx->pc = 0x44f0ecu;
    // NOP
    ctx->pc = 0x44f0f0u;
}
