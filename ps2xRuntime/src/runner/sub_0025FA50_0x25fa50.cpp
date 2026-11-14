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

// Function: sub_0025FA50
// Address: 0x25fa50 - 0x25fb60
void sub_0025FA50_0x25fa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FA50_0x25fa50");
#endif

    switch (ctx->pc) {
        case 0x25fa84u: goto label_25fa84;
        case 0x25fa98u: goto label_25fa98;
        case 0x25fabcu: goto label_25fabc;
        case 0x25fad8u: goto label_25fad8;
        case 0x25faf0u: goto label_25faf0;
        case 0x25fb18u: goto label_25fb18;
        case 0x25fb28u: goto label_25fb28;
        case 0x25fb44u: goto label_25fb44;
        default: break;
    }

    ctx->pc = 0x25fa50u;

    // 0x25fa50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x25fa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x25fa54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25fa58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25fa5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25fa60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25fa64: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x25fa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x25fa68: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x25fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x25fa6c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x25fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x25fa70: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x25fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x25fa74: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x25fa74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x25fa78: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25fa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fa7c: 0xc097f28  jal         func_25FCA0
    ctx->pc = 0x25FA7Cu;
    SET_GPR_U32(ctx, 31, 0x25FA84u);
    ctx->pc = 0x25FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA0u, 0x25FA7Cu, 0x25FA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA84u;
label_25fa84:
    // 0x25fa84: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x25fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x25fa88: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x25fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x25fa8c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25fa90: 0xc041954  jal         func_106550
    ctx->pc = 0x25FA90u;
    SET_GPR_U32(ctx, 31, 0x25FA98u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x25FA90u, 0x25FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA98u;
label_25fa98:
    // 0x25fa98: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x25fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x25fa9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25faa0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25faa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25faa4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25faa8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x25faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25faac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25fab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fab4: 0xc0985b0  jal         func_2616C0
    ctx->pc = 0x25FAB4u;
    SET_GPR_U32(ctx, 31, 0x25FABCu);
    ctx->pc = 0x2616C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616C0u, 0x25FAB4u, 0x25FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FABCu;
label_25fabc:
    // 0x25fabc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25fabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fac0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fac4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fac8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25facc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25faccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fad0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x25FAD0u;
    SET_GPR_U32(ctx, 31, 0x25FAD8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x25FAD0u, 0x25FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAD8u;
label_25fad8:
    // 0x25fad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fae0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x25fae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25fae4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x25fae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25fae8: 0xc097f0c  jal         func_25FC30
    ctx->pc = 0x25FAE8u;
    SET_GPR_U32(ctx, 31, 0x25FAF0u);
    ctx->pc = 0x25FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC30u, 0x25FAE8u, 0x25FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FAF0u;
label_25faf0:
    // 0x25faf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25faf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25faf4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x25faf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x25faf8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25FAF8u;
    {
        const bool branch_taken_0x25faf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25faf8) {
            ctx->pc = 0x25FB1Cu;
            goto label_25fb1c;
        }
    }
    ctx->pc = 0x25FB00u;
    // 0x25fb00: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x25fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fb04: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25fb08: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25fb0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25fb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb10: 0xc041934  jal         func_1064D0
    ctx->pc = 0x25FB10u;
    SET_GPR_U32(ctx, 31, 0x25FB18u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x25FB10u, 0x25FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB18u;
label_25fb18:
    // 0x25fb18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25fb1c:
    // 0x25fb1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fb20: 0xc097eec  jal         func_25FBB0
    ctx->pc = 0x25FB20u;
    SET_GPR_U32(ctx, 31, 0x25FB28u);
    ctx->pc = 0x25FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FBB0u, 0x25FB20u, 0x25FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB28u;
label_25fb28:
    // 0x25fb28: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25fb2c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x25fb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25fb30: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x25fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25fb34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25fb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25fb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb3c: 0xc097ed8  jal         func_25FB60
    ctx->pc = 0x25FB3Cu;
    SET_GPR_U32(ctx, 31, 0x25FB44u);
    ctx->pc = 0x25FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FB60u, 0x25FB3Cu, 0x25FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FB44u;
label_25fb44:
    // 0x25fb44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25fb44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25fb48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25fb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25fb4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25fb4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fb50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25fb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb54: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x25fb54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x25fb58: 0x3e00008  jr          $ra
    ctx->pc = 0x25FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FB60u;
}
