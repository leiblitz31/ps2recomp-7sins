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

// Function: sub_002CBF60
// Address: 0x2cbf60 - 0x2cc070
void sub_002CBF60_0x2cbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBF60_0x2cbf60");
#endif

    switch (ctx->pc) {
        case 0x2cbf94u: goto label_2cbf94;
        case 0x2cbfa8u: goto label_2cbfa8;
        case 0x2cbfccu: goto label_2cbfcc;
        case 0x2cbfe8u: goto label_2cbfe8;
        case 0x2cc000u: goto label_2cc000;
        case 0x2cc028u: goto label_2cc028;
        case 0x2cc038u: goto label_2cc038;
        case 0x2cc054u: goto label_2cc054;
        default: break;
    }

    ctx->pc = 0x2cbf60u;

    // 0x2cbf60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cbf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2cbf64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cbf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cbf68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cbf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cbf6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cbf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cbf70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cbf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cbf74: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2cbf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2cbf78: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2cbf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2cbf7c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2cbf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2cbf80: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2cbf80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2cbf84: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2cbf84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2cbf88: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cbf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cbf8c: 0xc09d650  jal         func_275940
    ctx->pc = 0x2CBF8Cu;
    SET_GPR_U32(ctx, 31, 0x2CBF94u);
    ctx->pc = 0x275940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275940u, 0x2CBF8Cu, 0x2CBF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBF94u;
label_2cbf94:
    // 0x2cbf94: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2cbf94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2cbf98: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cbf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cbf9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2cbf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cbfa0: 0xc041954  jal         func_106550
    ctx->pc = 0x2CBFA0u;
    SET_GPR_U32(ctx, 31, 0x2CBFA8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2CBFA0u, 0x2CBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFA8u;
label_2cbfa8:
    // 0x2cbfa8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2cbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2cbfac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cbfb0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2cbfb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbfb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cbfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cbfb8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2cbfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2cbfbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2cbfbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbfc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfc4: 0xc0b3eec  jal         func_2CFBB0
    ctx->pc = 0x2CBFC4u;
    SET_GPR_U32(ctx, 31, 0x2CBFCCu);
    ctx->pc = 0x2CFBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBB0u, 0x2CBFC4u, 0x2CBFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFCCu;
label_2cbfcc:
    // 0x2cbfcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cbfd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cbfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cbfd8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2cbfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cbfdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cbfdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfe0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2CBFE0u;
    SET_GPR_U32(ctx, 31, 0x2CBFE8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2CBFE0u, 0x2CBFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBFE8u;
label_2cbfe8:
    // 0x2cbfe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cbfe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cbfecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbff0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2cbff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cbff4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2cbff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cbff8: 0xc0b3050  jal         func_2CC140
    ctx->pc = 0x2CBFF8u;
    SET_GPR_U32(ctx, 31, 0x2CC000u);
    ctx->pc = 0x2CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC140u, 0x2CBFF8u, 0x2CC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC000u;
label_2cc000:
    // 0x2cc000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc004: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2cc004u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cc008: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC008u;
    {
        const bool branch_taken_0x2cc008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc008) {
            ctx->pc = 0x2CC02Cu;
            goto label_2cc02c;
        }
    }
    ctx->pc = 0x2CC010u;
    // 0x2cc010: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2cc010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc014: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2cc014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc018: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2cc018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cc01c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cc01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc020: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2CC020u;
    SET_GPR_U32(ctx, 31, 0x2CC028u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2CC020u, 0x2CC028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC028u;
label_2cc028:
    // 0x2cc028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cc028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cc02c:
    // 0x2cc02c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cc02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc030: 0xc0b3030  jal         func_2CC0C0
    ctx->pc = 0x2CC030u;
    SET_GPR_U32(ctx, 31, 0x2CC038u);
    ctx->pc = 0x2CC0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC0C0u, 0x2CC030u, 0x2CC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC038u;
label_2cc038:
    // 0x2cc038: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2cc038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2cc03c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2cc03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2cc040: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cc040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc048: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2cc048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc04c: 0xc0b301c  jal         func_2CC070
    ctx->pc = 0x2CC04Cu;
    SET_GPR_U32(ctx, 31, 0x2CC054u);
    ctx->pc = 0x2CC070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC070u, 0x2CC04Cu, 0x2CC054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC054u;
label_2cc054:
    // 0x2cc054: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cc054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cc058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc05c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc064: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2cc064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2cc068: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC070u;
}
