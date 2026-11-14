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

// Function: sub_00257070
// Address: 0x257070 - 0x257120
void sub_00257070_0x257070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257070_0x257070");
#endif

    switch (ctx->pc) {
        case 0x2570a0u: goto label_2570a0;
        case 0x2570acu: goto label_2570ac;
        case 0x2570bcu: goto label_2570bc;
        case 0x2570ccu: goto label_2570cc;
        case 0x2570d8u: goto label_2570d8;
        case 0x2570e8u: goto label_2570e8;
        case 0x2570f8u: goto label_2570f8;
        default: break;
    }

    ctx->pc = 0x257070u;

    // 0x257070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x257074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25707c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257080: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x257080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x257084: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x257084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x257088: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x257088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x25708c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257090: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x257090u;
    {
        const bool branch_taken_0x257090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257090) {
            ctx->pc = 0x257100u;
            goto label_257100;
        }
    }
    ctx->pc = 0x257098u;
    // 0x257098: 0xc090864  jal         func_242190
    ctx->pc = 0x257098u;
    SET_GPR_U32(ctx, 31, 0x2570A0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x257098u, 0x2570A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570A0u;
label_2570a0:
    // 0x2570a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2570a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570a4: 0xc090590  jal         func_241640
    ctx->pc = 0x2570A4u;
    SET_GPR_U32(ctx, 31, 0x2570ACu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2570A4u, 0x2570ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570ACu;
label_2570ac:
    // 0x2570ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2570acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2570b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2570b4: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2570B4u;
    SET_GPR_U32(ctx, 31, 0x2570BCu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2570B4u, 0x2570BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570BCu;
label_2570bc:
    // 0x2570bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2570bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2570c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570c4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2570C4u;
    SET_GPR_U32(ctx, 31, 0x2570CCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2570C4u, 0x2570CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570CCu;
label_2570cc:
    // 0x2570cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2570ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2570D0u;
    {
        const bool branch_taken_0x2570d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2570d0) {
            ctx->pc = 0x2570ECu;
            goto label_2570ec;
        }
    }
    ctx->pc = 0x2570D8u;
label_2570d8:
    // 0x2570d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2570d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2570dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2570dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2570e0: 0xc095744  jal         func_255D10
    ctx->pc = 0x2570E0u;
    SET_GPR_U32(ctx, 31, 0x2570E8u);
    ctx->pc = 0x255D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255D10u, 0x2570E0u, 0x2570E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570E8u;
label_2570e8:
    // 0x2570e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2570e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2570ec:
    // 0x2570ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2570ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2570f0: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x2570F0u;
    SET_GPR_U32(ctx, 31, 0x2570F8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2570F0u, 0x2570F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2570F8u;
label_2570f8:
    // 0x2570f8: 0x1602fff7  bne         $s0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2570F8u;
    {
        const bool branch_taken_0x2570f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2570f8) {
            ctx->pc = 0x2570D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2570d8;
        }
    }
    ctx->pc = 0x257100u;
label_257100:
    // 0x257100: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25710c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25710cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257110: 0x3e00008  jr          $ra
    ctx->pc = 0x257110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257118u;
    // 0x257118: 0x0  nop
    ctx->pc = 0x257118u;
    // NOP
    // 0x25711c: 0x0  nop
    ctx->pc = 0x25711cu;
    // NOP
    ctx->pc = 0x257120u;
}
