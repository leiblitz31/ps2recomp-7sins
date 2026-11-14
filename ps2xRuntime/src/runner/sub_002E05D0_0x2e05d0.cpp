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

// Function: sub_002E05D0
// Address: 0x2e05d0 - 0x2e06e0
void sub_002E05D0_0x2e05d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E05D0_0x2e05d0");
#endif

    switch (ctx->pc) {
        case 0x2e0600u: goto label_2e0600;
        case 0x2e060cu: goto label_2e060c;
        case 0x2e0618u: goto label_2e0618;
        case 0x2e0634u: goto label_2e0634;
        case 0x2e064cu: goto label_2e064c;
        case 0x2e0668u: goto label_2e0668;
        case 0x2e0690u: goto label_2e0690;
        case 0x2e06acu: goto label_2e06ac;
        default: break;
    }

    ctx->pc = 0x2e05d0u;

    // 0x2e05d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e05d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e05d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e05d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e05d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e05dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e05dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e05e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e05e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e05e4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2e05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2e05e8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2e05e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2e05ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e05f0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e05f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e05f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2e05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e05f8: 0xc0b7d18  jal         func_2DF460
    ctx->pc = 0x2E05F8u;
    SET_GPR_U32(ctx, 31, 0x2E0600u);
    ctx->pc = 0x2DF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF460u, 0x2E05F8u, 0x2E0600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0600u;
label_2e0600:
    // 0x2e0600: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e0600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0604: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E0604u;
    {
        const bool branch_taken_0x2e0604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0604) {
            ctx->pc = 0x2E066Cu;
            goto label_2e066c;
        }
    }
    ctx->pc = 0x2E060Cu;
label_2e060c:
    // 0x2e060c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e060cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0610: 0xc0b81c8  jal         func_2E0720
    ctx->pc = 0x2E0610u;
    SET_GPR_U32(ctx, 31, 0x2E0618u);
    ctx->pc = 0x2E0720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0720u, 0x2E0610u, 0x2E0618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0618u;
label_2e0618:
    // 0x2e0618: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2e0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e061c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2e061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0620: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e0620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e0624: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e0624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0628: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2e0628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e062c: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E062Cu;
    SET_GPR_U32(ctx, 31, 0x2E0634u);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E062Cu, 0x2E0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0634u;
label_2e0634:
    // 0x2e0634: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0634u;
    {
        const bool branch_taken_0x2e0634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0634) {
            ctx->pc = 0x2E065Cu;
            goto label_2e065c;
        }
    }
    ctx->pc = 0x2E063Cu;
    // 0x2e063c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e063cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0644: 0xc0b81c0  jal         func_2E0700
    ctx->pc = 0x2E0644u;
    SET_GPR_U32(ctx, 31, 0x2E064Cu);
    ctx->pc = 0x2E0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0700u, 0x2E0644u, 0x2E064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E064Cu;
label_2e064c:
    // 0x2e064c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e064cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0650: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e0650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0654: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0654u;
    {
        const bool branch_taken_0x2e0654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0654) {
            ctx->pc = 0x2E066Cu;
            goto label_2e066c;
        }
    }
    ctx->pc = 0x2E065Cu;
label_2e065c:
    // 0x2e065c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e065cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0660: 0xc0b81b8  jal         func_2E06E0
    ctx->pc = 0x2E0660u;
    SET_GPR_U32(ctx, 31, 0x2E0668u);
    ctx->pc = 0x2E06E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06E0u, 0x2E0660u, 0x2E0668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0668u;
label_2e0668:
    // 0x2e0668: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e0668u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e066c:
    // 0x2e066c: 0x1600ffe7  bnez        $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2E066Cu;
    {
        const bool branch_taken_0x2e066c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e066c) {
            ctx->pc = 0x2E060Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e060c;
        }
    }
    ctx->pc = 0x2E0674u;
    // 0x2e0674: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e0674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0678: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e067c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E067Cu;
    {
        const bool branch_taken_0x2e067c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e067c) {
            ctx->pc = 0x2E06B4u;
            goto label_2e06b4;
        }
    }
    ctx->pc = 0x2E0684u;
    // 0x2e0684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0688: 0xc0b81c8  jal         func_2E0720
    ctx->pc = 0x2E0688u;
    SET_GPR_U32(ctx, 31, 0x2E0690u);
    ctx->pc = 0x2E0720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0720u, 0x2E0688u, 0x2E0690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0690u;
label_2e0690:
    // 0x2e0690: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2e0690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0694: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2e0694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0698: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e0698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e069c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2e069cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e06a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e06a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e06a4: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E06A4u;
    SET_GPR_U32(ctx, 31, 0x2E06ACu);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E06A4u, 0x2E06ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06ACu;
label_2e06ac:
    // 0x2e06ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E06ACu;
    {
        const bool branch_taken_0x2e06ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e06ac) {
            ctx->pc = 0x2E06BCu;
            goto label_2e06bc;
        }
    }
    ctx->pc = 0x2E06B4u;
label_2e06b4:
    // 0x2e06b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e06b8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2e06b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e06bc:
    // 0x2e06bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e06bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e06c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e06c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e06c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e06c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e06c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e06cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e06ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e06d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e06d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e06d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E06D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E06D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E06DCu;
    // 0x2e06dc: 0x0  nop
    ctx->pc = 0x2e06dcu;
    // NOP
    ctx->pc = 0x2e06e0u;
}
