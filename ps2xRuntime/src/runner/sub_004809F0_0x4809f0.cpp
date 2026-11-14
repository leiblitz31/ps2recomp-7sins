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

// Function: sub_004809F0
// Address: 0x4809f0 - 0x480ab0
void sub_004809F0_0x4809f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004809F0_0x4809f0");
#endif

    switch (ctx->pc) {
        case 0x480a14u: goto label_480a14;
        case 0x480a2cu: goto label_480a2c;
        case 0x480a40u: goto label_480a40;
        default: break;
    }

    ctx->pc = 0x4809f0u;

    // 0x4809f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4809f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4809f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4809f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4809f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4809f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4809fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4809fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x480a00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x480a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x480a08: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x480a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x480a0c: 0xc0f53aa  jal         func_3D4EA8
    ctx->pc = 0x480A0Cu;
    SET_GPR_U32(ctx, 31, 0x480A14u);
    ctx->pc = 0x3D4EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4EA8u, 0x480A0Cu, 0x480A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480A14u;
label_480a14:
    // 0x480a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480a18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x480a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480a1c: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x480a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x480a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480a24: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x480A24u;
    SET_GPR_U32(ctx, 31, 0x480A2Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x480A24u, 0x480A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480A2Cu;
label_480a2c:
    // 0x480a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x480a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x480a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480a34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x480a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480a38: 0xc0bc710  jal         func_2F1C40
    ctx->pc = 0x480A38u;
    SET_GPR_U32(ctx, 31, 0x480A40u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x480A38u, 0x480A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480A40u;
label_480a40:
    // 0x480a40: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x480A40u;
    {
        const bool branch_taken_0x480a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480a40) {
            ctx->pc = 0x480A8Cu;
            goto label_480a8c;
        }
    }
    ctx->pc = 0x480A48u;
    // 0x480a48: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x480a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480a4c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x480a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x480a50: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x480a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x480a54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x480a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x480a58: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x480a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x480a5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x480a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480a60: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x480a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x480a64: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x480a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x480a68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x480a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480a6c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x480a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x480a70: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x480a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x480a74: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x480a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x480a78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x480a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x480a7c: 0x34431100  ori         $v1, $v0, 0x1100
    ctx->pc = 0x480a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x480a80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x480a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480a84: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x480a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x480a88: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x480a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_480a8c:
    // 0x480a8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x480a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x480a90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x480a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x480a94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x480a94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x480a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x480a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x480a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x480aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x480aa4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x480aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x480aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x480AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480AB0u;
}
