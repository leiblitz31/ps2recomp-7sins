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

// Function: sub_00155030
// Address: 0x155030 - 0x155100
void sub_00155030_0x155030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155030_0x155030");
#endif

    switch (ctx->pc) {
        case 0x155030u: goto label_155030;
        case 0x155034u: goto label_155034;
        case 0x155038u: goto label_155038;
        case 0x15503cu: goto label_15503c;
        case 0x155040u: goto label_155040;
        case 0x155044u: goto label_155044;
        case 0x155048u: goto label_155048;
        case 0x15504cu: goto label_15504c;
        case 0x155050u: goto label_155050;
        case 0x155054u: goto label_155054;
        case 0x155058u: goto label_155058;
        case 0x15505cu: goto label_15505c;
        case 0x155060u: goto label_155060;
        case 0x155064u: goto label_155064;
        case 0x155068u: goto label_155068;
        case 0x15506cu: goto label_15506c;
        case 0x155070u: goto label_155070;
        case 0x155074u: goto label_155074;
        case 0x155078u: goto label_155078;
        case 0x15507cu: goto label_15507c;
        case 0x155080u: goto label_155080;
        case 0x155084u: goto label_155084;
        case 0x155088u: goto label_155088;
        case 0x15508cu: goto label_15508c;
        case 0x155090u: goto label_155090;
        case 0x155094u: goto label_155094;
        case 0x155098u: goto label_155098;
        case 0x15509cu: goto label_15509c;
        case 0x1550a0u: goto label_1550a0;
        case 0x1550a4u: goto label_1550a4;
        case 0x1550a8u: goto label_1550a8;
        case 0x1550acu: goto label_1550ac;
        case 0x1550b0u: goto label_1550b0;
        case 0x1550b4u: goto label_1550b4;
        case 0x1550b8u: goto label_1550b8;
        case 0x1550bcu: goto label_1550bc;
        case 0x1550c0u: goto label_1550c0;
        case 0x1550c4u: goto label_1550c4;
        case 0x1550c8u: goto label_1550c8;
        case 0x1550ccu: goto label_1550cc;
        case 0x1550d0u: goto label_1550d0;
        case 0x1550d4u: goto label_1550d4;
        case 0x1550d8u: goto label_1550d8;
        case 0x1550dcu: goto label_1550dc;
        case 0x1550e0u: goto label_1550e0;
        case 0x1550e4u: goto label_1550e4;
        case 0x1550e8u: goto label_1550e8;
        case 0x1550ecu: goto label_1550ec;
        case 0x1550f0u: goto label_1550f0;
        case 0x1550f4u: goto label_1550f4;
        case 0x1550f8u: goto label_1550f8;
        case 0x1550fcu: goto label_1550fc;
        default: break;
    }

    ctx->pc = 0x155030u;

label_155030:
    // 0x155030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_155034:
    // 0x155034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_155038:
    // 0x155038: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x155038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_15503c:
    // 0x15503c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155040:
    // 0x155040: 0xc055028  jal         func_1540A0
label_155044:
    if (ctx->pc == 0x155044u) {
        ctx->pc = 0x155048u;
        goto label_155048;
    }
    ctx->pc = 0x155040u;
    SET_GPR_U32(ctx, 31, 0x155048u);
    ctx->pc = 0x1540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540A0u, 0x155040u, 0x155048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155048u;
label_155048:
    // 0x155048: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x155048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_15504c:
    // 0x15504c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x15504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_155050:
    // 0x155050: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x155050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_155054:
    // 0x155054: 0xc055008  jal         func_154020
label_155058:
    if (ctx->pc == 0x155058u) {
        ctx->pc = 0x15505Cu;
        goto label_15505c;
    }
    ctx->pc = 0x155054u;
    SET_GPR_U32(ctx, 31, 0x15505Cu);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x155054u, 0x15505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15505Cu;
label_15505c:
    // 0x15505c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x15505cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155060:
    // 0x155060: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x155060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_155064:
    // 0x155064: 0xc054ff8  jal         func_153FE0
label_155068:
    if (ctx->pc == 0x155068u) {
        ctx->pc = 0x15506Cu;
        goto label_15506c;
    }
    ctx->pc = 0x155064u;
    SET_GPR_U32(ctx, 31, 0x15506Cu);
    ctx->pc = 0x153FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FE0u, 0x155064u, 0x15506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15506Cu;
label_15506c:
    // 0x15506c: 0x10000014  b           . + 4 + (0x14 << 2)
label_155070:
    if (ctx->pc == 0x155070u) {
        ctx->pc = 0x155074u;
        goto label_155074;
    }
    ctx->pc = 0x15506Cu;
    {
        const bool branch_taken_0x15506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15506c) {
            ctx->pc = 0x1550C0u;
            goto label_1550c0;
        }
    }
    ctx->pc = 0x155074u;
label_155074:
    // 0x155074: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x155074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155078:
    // 0x155078: 0xc054ff0  jal         func_153FC0
label_15507c:
    if (ctx->pc == 0x15507Cu) {
        ctx->pc = 0x155080u;
        goto label_155080;
    }
    ctx->pc = 0x155078u;
    SET_GPR_U32(ctx, 31, 0x155080u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x155078u, 0x155080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155080u;
label_155080:
    // 0x155080: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x155080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_155084:
    // 0x155084: 0xc0413bc  jal         func_104EF0
label_155088:
    if (ctx->pc == 0x155088u) {
        ctx->pc = 0x15508Cu;
        goto label_15508c;
    }
    ctx->pc = 0x155084u;
    SET_GPR_U32(ctx, 31, 0x15508Cu);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x155084u, 0x15508Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15508Cu;
label_15508c:
    // 0x15508c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_155090:
    if (ctx->pc == 0x155090u) {
        ctx->pc = 0x155094u;
        goto label_155094;
    }
    ctx->pc = 0x15508Cu;
    {
        const bool branch_taken_0x15508c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15508c) {
            ctx->pc = 0x1550B4u;
            goto label_1550b4;
        }
    }
    ctx->pc = 0x155094u;
label_155094:
    // 0x155094: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x155094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_155098:
    // 0x155098: 0xc054ff0  jal         func_153FC0
label_15509c:
    if (ctx->pc == 0x15509Cu) {
        ctx->pc = 0x1550A0u;
        goto label_1550a0;
    }
    ctx->pc = 0x155098u;
    SET_GPR_U32(ctx, 31, 0x1550A0u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x155098u, 0x1550A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1550A0u;
label_1550a0:
    // 0x1550a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1550a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1550a4:
    // 0x1550a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1550a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1550a8:
    // 0x1550a8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1550a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1550ac:
    // 0x1550ac: 0x320f809  jalr        $t9
label_1550b0:
    if (ctx->pc == 0x1550B0u) {
        ctx->pc = 0x1550B4u;
        goto label_1550b4;
    }
    ctx->pc = 0x1550ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1550B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1550ACu, 0x1550B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1550B4u;
label_1550b4:
    // 0x1550b4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1550b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1550b8:
    // 0x1550b8: 0xc054fd0  jal         func_153F40
label_1550bc:
    if (ctx->pc == 0x1550BCu) {
        ctx->pc = 0x1550C0u;
        goto label_1550c0;
    }
    ctx->pc = 0x1550B8u;
    SET_GPR_U32(ctx, 31, 0x1550C0u);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x1550B8u, 0x1550C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1550C0u;
label_1550c0:
    // 0x1550c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1550c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1550c4:
    // 0x1550c4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x1550c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1550c8:
    // 0x1550c8: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x1550c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1550cc:
    // 0x1550cc: 0xc054fa4  jal         func_153E90
label_1550d0:
    if (ctx->pc == 0x1550D0u) {
        ctx->pc = 0x1550D4u;
        goto label_1550d4;
    }
    ctx->pc = 0x1550CCu;
    SET_GPR_U32(ctx, 31, 0x1550D4u);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x1550CCu, 0x1550D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1550D4u;
label_1550d4:
    // 0x1550d4: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1550d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1550d8:
    // 0x1550d8: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1550d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1550dc:
    // 0x1550dc: 0xc041998  jal         func_106660
label_1550e0:
    if (ctx->pc == 0x1550E0u) {
        ctx->pc = 0x1550E4u;
        goto label_1550e4;
    }
    ctx->pc = 0x1550DCu;
    SET_GPR_U32(ctx, 31, 0x1550E4u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x1550DCu, 0x1550E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1550E4u;
label_1550e4:
    // 0x1550e4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1550e8:
    if (ctx->pc == 0x1550E8u) {
        ctx->pc = 0x1550ECu;
        goto label_1550ec;
    }
    ctx->pc = 0x1550E4u;
    {
        const bool branch_taken_0x1550e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1550e4) {
            ctx->pc = 0x155074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155074;
        }
    }
    ctx->pc = 0x1550ECu;
label_1550ec:
    // 0x1550ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1550ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1550f0:
    // 0x1550f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1550f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1550f4:
    // 0x1550f4: 0x3e00008  jr          $ra
label_1550f8:
    if (ctx->pc == 0x1550F8u) {
        ctx->pc = 0x1550FCu;
        goto label_1550fc;
    }
    ctx->pc = 0x1550F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1550F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1550FCu;
label_1550fc:
    // 0x1550fc: 0x0  nop
    ctx->pc = 0x1550fcu;
    // NOP
    ctx->pc = 0x155100u;
}
