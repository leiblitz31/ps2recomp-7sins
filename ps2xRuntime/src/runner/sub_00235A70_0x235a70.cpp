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

// Function: sub_00235A70
// Address: 0x235a70 - 0x235af0
void sub_00235A70_0x235a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235A70_0x235a70");
#endif

    switch (ctx->pc) {
        case 0x235a70u: goto label_235a70;
        case 0x235a74u: goto label_235a74;
        case 0x235a78u: goto label_235a78;
        case 0x235a7cu: goto label_235a7c;
        case 0x235a80u: goto label_235a80;
        case 0x235a84u: goto label_235a84;
        case 0x235a88u: goto label_235a88;
        case 0x235a8cu: goto label_235a8c;
        case 0x235a90u: goto label_235a90;
        case 0x235a94u: goto label_235a94;
        case 0x235a98u: goto label_235a98;
        case 0x235a9cu: goto label_235a9c;
        case 0x235aa0u: goto label_235aa0;
        case 0x235aa4u: goto label_235aa4;
        case 0x235aa8u: goto label_235aa8;
        case 0x235aacu: goto label_235aac;
        case 0x235ab0u: goto label_235ab0;
        case 0x235ab4u: goto label_235ab4;
        case 0x235ab8u: goto label_235ab8;
        case 0x235abcu: goto label_235abc;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ac4u: goto label_235ac4;
        case 0x235ac8u: goto label_235ac8;
        case 0x235accu: goto label_235acc;
        case 0x235ad0u: goto label_235ad0;
        case 0x235ad4u: goto label_235ad4;
        case 0x235ad8u: goto label_235ad8;
        case 0x235adcu: goto label_235adc;
        case 0x235ae0u: goto label_235ae0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235ae8u: goto label_235ae8;
        case 0x235aecu: goto label_235aec;
        default: break;
    }

    ctx->pc = 0x235a70u;

label_235a70:
    // 0x235a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235a74:
    // 0x235a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235a78:
    // 0x235a78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_235a7c:
    // 0x235a7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x235a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_235a80:
    // 0x235a80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x235a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_235a84:
    // 0x235a84: 0x8f82bbb0  lw          $v0, -0x4450($gp)
    ctx->pc = 0x235a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949808)));
label_235a88:
    // 0x235a88: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
label_235a8c:
    if (ctx->pc == 0x235A8Cu) {
        ctx->pc = 0x235A90u;
        goto label_235a90;
    }
    ctx->pc = 0x235A88u;
    {
        const bool branch_taken_0x235a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x235a88) {
            ctx->pc = 0x235AB8u;
            goto label_235ab8;
        }
    }
    ctx->pc = 0x235A90u;
label_235a90:
    // 0x235a90: 0x8f84bbb0  lw          $a0, -0x4450($gp)
    ctx->pc = 0x235a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949808)));
label_235a94:
    // 0x235a94: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x235a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235a98:
    // 0x235a98: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x235a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235a9c:
    // 0x235a9c: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x235a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_235aa0:
    // 0x235aa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235aa4:
    // 0x235aa4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x235aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_235aa8:
    // 0x235aa8: 0x320f809  jalr        $t9
label_235aac:
    if (ctx->pc == 0x235AACu) {
        ctx->pc = 0x235AB0u;
        goto label_235ab0;
    }
    ctx->pc = 0x235AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235AB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235AA8u, 0x235AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235AB0u;
label_235ab0:
    // 0x235ab0: 0x10000002  b           . + 4 + (0x2 << 2)
label_235ab4:
    if (ctx->pc == 0x235AB4u) {
        ctx->pc = 0x235AB8u;
        goto label_235ab8;
    }
    ctx->pc = 0x235AB0u;
    {
        const bool branch_taken_0x235ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ab0) {
            ctx->pc = 0x235ABCu;
            goto label_235abc;
        }
    }
    ctx->pc = 0x235AB8u;
label_235ab8:
    // 0x235ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235abc:
    // 0x235abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235ac0:
    // 0x235ac0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x235ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_235ac4:
    // 0x235ac4: 0x3e00008  jr          $ra
label_235ac8:
    if (ctx->pc == 0x235AC8u) {
        ctx->pc = 0x235ACCu;
        goto label_235acc;
    }
    ctx->pc = 0x235AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235ACCu;
label_235acc:
    // 0x235acc: 0x0  nop
    ctx->pc = 0x235accu;
    // NOP
label_235ad0:
    // 0x235ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_235ad4:
    // 0x235ad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235ad8:
    // 0x235ad8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_235adc:
    // 0x235adc: 0x3e00008  jr          $ra
label_235ae0:
    if (ctx->pc == 0x235AE0u) {
        ctx->pc = 0x235AE4u;
        goto label_235ae4;
    }
    ctx->pc = 0x235ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235AE4u;
label_235ae4:
    // 0x235ae4: 0x0  nop
    ctx->pc = 0x235ae4u;
    // NOP
label_235ae8:
    // 0x235ae8: 0x0  nop
    ctx->pc = 0x235ae8u;
    // NOP
label_235aec:
    // 0x235aec: 0x0  nop
    ctx->pc = 0x235aecu;
    // NOP
    ctx->pc = 0x235af0u;
}
