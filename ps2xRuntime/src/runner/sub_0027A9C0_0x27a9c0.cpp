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

// Function: sub_0027A9C0
// Address: 0x27a9c0 - 0x27aad0
void sub_0027A9C0_0x27a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A9C0_0x27a9c0");
#endif

    switch (ctx->pc) {
        case 0x27a9f4u: goto label_27a9f4;
        case 0x27aa08u: goto label_27aa08;
        case 0x27aa2cu: goto label_27aa2c;
        case 0x27aa48u: goto label_27aa48;
        case 0x27aa60u: goto label_27aa60;
        case 0x27aa88u: goto label_27aa88;
        case 0x27aa98u: goto label_27aa98;
        case 0x27aab4u: goto label_27aab4;
        default: break;
    }

    ctx->pc = 0x27a9c0u;

    // 0x27a9c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27a9c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27a9c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27a9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a9d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a9d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x27a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x27a9d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x27a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x27a9dc: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x27a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x27a9e0: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x27a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x27a9e4: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x27a9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x27a9e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x27a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a9ec: 0xc09eb04  jal         func_27AC10
    ctx->pc = 0x27A9ECu;
    SET_GPR_U32(ctx, 31, 0x27A9F4u);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x27A9ECu, 0x27A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9F4u;
label_27a9f4:
    // 0x27a9f4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x27a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x27a9f8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x27a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x27a9fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x27a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27aa00: 0xc041954  jal         func_106550
    ctx->pc = 0x27AA00u;
    SET_GPR_U32(ctx, 31, 0x27AA08u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x27AA00u, 0x27AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA08u;
label_27aa08:
    // 0x27aa08: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x27aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x27aa0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27aa10: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x27aa10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27aa14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aa18: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x27aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27aa1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27aa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27aa20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa24: 0xc0a089c  jal         func_282270
    ctx->pc = 0x27AA24u;
    SET_GPR_U32(ctx, 31, 0x27AA2Cu);
    ctx->pc = 0x282270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282270u, 0x27AA24u, 0x27AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA2Cu;
label_27aa2c:
    // 0x27aa2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27aa2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aa34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27aa38: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x27aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27aa3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27aa3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa40: 0xc041934  jal         func_1064D0
    ctx->pc = 0x27AA40u;
    SET_GPR_U32(ctx, 31, 0x27AA48u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x27AA40u, 0x27AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA48u;
label_27aa48:
    // 0x27aa48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27aa48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27aa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa50: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x27aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27aa54: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x27aa54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27aa58: 0xc09eae8  jal         func_27ABA0
    ctx->pc = 0x27AA58u;
    SET_GPR_U32(ctx, 31, 0x27AA60u);
    ctx->pc = 0x27ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ABA0u, 0x27AA58u, 0x27AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA60u;
label_27aa60:
    // 0x27aa60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27aa60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa64: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x27aa64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27aa68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27AA68u;
    {
        const bool branch_taken_0x27aa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27aa68) {
            ctx->pc = 0x27AA8Cu;
            goto label_27aa8c;
        }
    }
    ctx->pc = 0x27AA70u;
    // 0x27aa70: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x27aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aa74: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x27aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27aa78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27aa7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27aa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa80: 0xc041934  jal         func_1064D0
    ctx->pc = 0x27AA80u;
    SET_GPR_U32(ctx, 31, 0x27AA88u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x27AA80u, 0x27AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA88u;
label_27aa88:
    // 0x27aa88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27aa88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27aa8c:
    // 0x27aa8c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x27aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aa90: 0xc09eac8  jal         func_27AB20
    ctx->pc = 0x27AA90u;
    SET_GPR_U32(ctx, 31, 0x27AA98u);
    ctx->pc = 0x27AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB20u, 0x27AA90u, 0x27AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA98u;
label_27aa98:
    // 0x27aa98: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x27aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27aa9c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x27aa9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27aaa0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x27aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27aaa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27aaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aaa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27aaa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aaac: 0xc09eab4  jal         func_27AAD0
    ctx->pc = 0x27AAACu;
    SET_GPR_U32(ctx, 31, 0x27AAB4u);
    ctx->pc = 0x27AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AAD0u, 0x27AAACu, 0x27AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAB4u;
label_27aab4:
    // 0x27aab4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27aab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27aab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27aab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27aabc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27aabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27aac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27aac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27aac4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x27aac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x27AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AAD0u;
}
