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

// Function: sub_0046AC60
// Address: 0x46ac60 - 0x46ad70
void sub_0046AC60_0x46ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AC60_0x46ac60");
#endif

    switch (ctx->pc) {
        case 0x46ac94u: goto label_46ac94;
        case 0x46aca8u: goto label_46aca8;
        case 0x46acccu: goto label_46accc;
        case 0x46ace8u: goto label_46ace8;
        case 0x46ad00u: goto label_46ad00;
        case 0x46ad28u: goto label_46ad28;
        case 0x46ad38u: goto label_46ad38;
        case 0x46ad54u: goto label_46ad54;
        default: break;
    }

    ctx->pc = 0x46ac60u;

    // 0x46ac60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x46ac64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46ac68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46ac6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46ac70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46ac74: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x46ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46ac78: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x46ac7c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x46ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x46ac80: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x46ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x46ac84: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x46ac84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x46ac88: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46ac88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ac8c: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46AC8Cu;
    SET_GPR_U32(ctx, 31, 0x46AC94u);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46AC8Cu, 0x46AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AC94u;
label_46ac94:
    // 0x46ac94: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x46ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x46ac98: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x46ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x46ac9c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x46ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46aca0: 0xc041954  jal         func_106550
    ctx->pc = 0x46ACA0u;
    SET_GPR_U32(ctx, 31, 0x46ACA8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x46ACA0u, 0x46ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ACA8u;
label_46aca8:
    // 0x46aca8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x46aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x46acac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46acacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46acb0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x46acb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46acb4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46acb8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x46acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x46acbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46acbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46acc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x46acc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46acc4: 0xc11ad20  jal         func_46B480
    ctx->pc = 0x46ACC4u;
    SET_GPR_U32(ctx, 31, 0x46ACCCu);
    ctx->pc = 0x46B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B480u, 0x46ACC4u, 0x46ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ACCCu;
label_46accc:
    // 0x46accc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46acccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46acd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46acd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x46acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46acd8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46acdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x46acdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ace0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x46ACE0u;
    SET_GPR_U32(ctx, 31, 0x46ACE8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x46ACE0u, 0x46ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ACE8u;
label_46ace8:
    // 0x46ace8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46ace8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46acec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46acecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46acf0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x46acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46acf4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x46acf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46acf8: 0xc04f188  jal         func_13C620
    ctx->pc = 0x46ACF8u;
    SET_GPR_U32(ctx, 31, 0x46AD00u);
    ctx->pc = 0x13C620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C620u, 0x46ACF8u, 0x46AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AD00u;
label_46ad00:
    // 0x46ad00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46ad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ad04: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x46ad04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46ad08: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46AD08u;
    {
        const bool branch_taken_0x46ad08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46ad08) {
            ctx->pc = 0x46AD2Cu;
            goto label_46ad2c;
        }
    }
    ctx->pc = 0x46AD10u;
    // 0x46ad10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ad14: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x46ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ad18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46ad1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46ad1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ad20: 0xc041934  jal         func_1064D0
    ctx->pc = 0x46AD20u;
    SET_GPR_U32(ctx, 31, 0x46AD28u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x46AD20u, 0x46AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AD28u;
label_46ad28:
    // 0x46ad28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46ad28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46ad2c:
    // 0x46ad2c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ad30: 0xc11ab70  jal         func_46ADC0
    ctx->pc = 0x46AD30u;
    SET_GPR_U32(ctx, 31, 0x46AD38u);
    ctx->pc = 0x46ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46ADC0u, 0x46AD30u, 0x46AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AD38u;
label_46ad38:
    // 0x46ad38: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x46ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x46ad3c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x46ad3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x46ad40: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ad44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46ad44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ad48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46ad48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ad4c: 0xc11ab5c  jal         func_46AD70
    ctx->pc = 0x46AD4Cu;
    SET_GPR_U32(ctx, 31, 0x46AD54u);
    ctx->pc = 0x46AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AD70u, 0x46AD4Cu, 0x46AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AD54u;
label_46ad54:
    // 0x46ad54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46ad54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46ad58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46ad58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ad5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46ad5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ad60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46ad60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ad64: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x46ad64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46ad68: 0x3e00008  jr          $ra
    ctx->pc = 0x46AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AD70u;
}
