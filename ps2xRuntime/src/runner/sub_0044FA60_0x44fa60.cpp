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

// Function: sub_0044FA60
// Address: 0x44fa60 - 0x44fbe0
void sub_0044FA60_0x44fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FA60_0x44fa60");
#endif

    switch (ctx->pc) {
        case 0x44fa94u: goto label_44fa94;
        case 0x44faa4u: goto label_44faa4;
        case 0x44fab8u: goto label_44fab8;
        case 0x44fad8u: goto label_44fad8;
        case 0x44fae4u: goto label_44fae4;
        case 0x44faf8u: goto label_44faf8;
        case 0x44fb04u: goto label_44fb04;
        case 0x44fb18u: goto label_44fb18;
        case 0x44fb50u: goto label_44fb50;
        case 0x44fb5cu: goto label_44fb5c;
        case 0x44fb74u: goto label_44fb74;
        case 0x44fb88u: goto label_44fb88;
        case 0x44fb98u: goto label_44fb98;
        case 0x44fbb8u: goto label_44fbb8;
        default: break;
    }

    ctx->pc = 0x44fa60u;

    // 0x44fa60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x44fa64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44fa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44fa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44fa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44fa6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44fa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44fa70: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x44fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x44fa74: 0xa7a50040  sh          $a1, 0x40($sp)
    ctx->pc = 0x44fa74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 64), (uint16_t)GPR_U32(ctx, 5));
    // 0x44fa78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fa7c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x44FA7Cu;
    {
        const bool branch_taken_0x44fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fa7c) {
            ctx->pc = 0x44FBB8u;
            goto label_44fbb8;
        }
    }
    ctx->pc = 0x44FA84u;
    // 0x44fa84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fa88: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44fa8c: 0xc113f28  jal         func_44FCA0
    ctx->pc = 0x44FA8Cu;
    SET_GPR_U32(ctx, 31, 0x44FA94u);
    ctx->pc = 0x44FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FCA0u, 0x44FA8Cu, 0x44FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FA94u;
label_44fa94:
    // 0x44fa94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x44fa94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44fa98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x44fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44fa9c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x44FA9Cu;
    {
        const bool branch_taken_0x44fa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fa9c) {
            ctx->pc = 0x44FB20u;
            goto label_44fb20;
        }
    }
    ctx->pc = 0x44FAA4u;
label_44faa4:
    // 0x44faa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44faa8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44faac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44fab0: 0xc113f10  jal         func_44FC40
    ctx->pc = 0x44FAB0u;
    SET_GPR_U32(ctx, 31, 0x44FAB8u);
    ctx->pc = 0x44FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FC40u, 0x44FAB0u, 0x44FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FAB8u;
label_44fab8:
    // 0x44fab8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44fabc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x44FABCu;
    {
        const bool branch_taken_0x44fabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fabc) {
            ctx->pc = 0x44FB1Cu;
            goto label_44fb1c;
        }
    }
    ctx->pc = 0x44FAC4u;
    // 0x44fac4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fac8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44facc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44faccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44fad0: 0xc113f10  jal         func_44FC40
    ctx->pc = 0x44FAD0u;
    SET_GPR_U32(ctx, 31, 0x44FAD8u);
    ctx->pc = 0x44FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FC40u, 0x44FAD0u, 0x44FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FAD8u;
label_44fad8:
    // 0x44fad8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44fadc: 0xc113f04  jal         func_44FC10
    ctx->pc = 0x44FADCu;
    SET_GPR_U32(ctx, 31, 0x44FAE4u);
    ctx->pc = 0x44FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FC10u, 0x44FADCu, 0x44FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FAE4u;
label_44fae4:
    // 0x44fae4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fae8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44faec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44faecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44faf0: 0xc113f10  jal         func_44FC40
    ctx->pc = 0x44FAF0u;
    SET_GPR_U32(ctx, 31, 0x44FAF8u);
    ctx->pc = 0x44FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FC40u, 0x44FAF0u, 0x44FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FAF8u;
label_44faf8:
    // 0x44faf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x44faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44fafc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44FAFCu;
    SET_GPR_U32(ctx, 31, 0x44FB04u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44FAFCu, 0x44FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FB04u;
label_44fb04:
    // 0x44fb04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fb08: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44fb0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x44fb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44fb10: 0xc113f10  jal         func_44FC40
    ctx->pc = 0x44FB10u;
    SET_GPR_U32(ctx, 31, 0x44FB18u);
    ctx->pc = 0x44FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FC40u, 0x44FB10u, 0x44FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FB18u;
label_44fb18:
    // 0x44fb18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_44fb1c:
    // 0x44fb1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x44fb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_44fb20:
    // 0x44fb20: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x44fb20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x44fb24: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x44FB24u;
    {
        const bool branch_taken_0x44fb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44fb24) {
            ctx->pc = 0x44FAA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44faa4;
        }
    }
    ctx->pc = 0x44FB2Cu;
    // 0x44fb2c: 0x8f82bf28  lw          $v0, -0x40D8($gp)
    ctx->pc = 0x44fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950696)));
    // 0x44fb30: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x44FB30u;
    {
        const bool branch_taken_0x44fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb30) {
            ctx->pc = 0x44FB60u;
            goto label_44fb60;
        }
    }
    ctx->pc = 0x44FB38u;
    // 0x44fb38: 0x8f82bf28  lw          $v0, -0x40D8($gp)
    ctx->pc = 0x44fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950696)));
    // 0x44fb3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44FB3Cu;
    {
        const bool branch_taken_0x44fb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44fb3c) {
            ctx->pc = 0x44FB60u;
            goto label_44fb60;
        }
    }
    ctx->pc = 0x44FB44u;
    // 0x44fb44: 0x8f84bf28  lw          $a0, -0x40D8($gp)
    ctx->pc = 0x44fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950696)));
    // 0x44fb48: 0xc113ef8  jal         func_44FBE0
    ctx->pc = 0x44FB48u;
    SET_GPR_U32(ctx, 31, 0x44FB50u);
    ctx->pc = 0x44FBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FBE0u, 0x44FB48u, 0x44FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FB50u;
label_44fb50:
    // 0x44fb50: 0x8f84bf28  lw          $a0, -0x40D8($gp)
    ctx->pc = 0x44fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950696)));
    // 0x44fb54: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44FB54u;
    SET_GPR_U32(ctx, 31, 0x44FB5Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44FB54u, 0x44FB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FB5Cu;
label_44fb5c:
    // 0x44fb5c: 0xaf80bf28  sw          $zero, -0x40D8($gp)
    ctx->pc = 0x44fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950696), GPR_U32(ctx, 0));
label_44fb60:
    // 0x44fb60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fb64: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x44fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x44fb68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44fb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44fb6c: 0xc113d28  jal         func_44F4A0
    ctx->pc = 0x44FB6Cu;
    SET_GPR_U32(ctx, 31, 0x44FB74u);
    ctx->pc = 0x44F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F4A0u, 0x44FB6Cu, 0x44FB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FB74u;
label_44fb74:
    // 0x44fb74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fb78: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x44fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x44fb7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44fb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44fb80: 0xc113d98  jal         func_44F660
    ctx->pc = 0x44FB80u;
    SET_GPR_U32(ctx, 31, 0x44FB88u);
    ctx->pc = 0x44F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F660u, 0x44FB80u, 0x44FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FB88u;
label_44fb88:
    // 0x44fb88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x44fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fb8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44fb90: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x44FB90u;
    SET_GPR_U32(ctx, 31, 0x44FB98u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x44FB90u, 0x44FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FB98u;
label_44fb98:
    // 0x44fb98: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x44fb98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44fb9c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x44fb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x44fba0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44fba0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44fba4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44FBA4u;
    {
        const bool branch_taken_0x44fba4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44fba4) {
            ctx->pc = 0x44FBB8u;
            goto label_44fbb8;
        }
    }
    ctx->pc = 0x44FBACu;
    // 0x44fbac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x44fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fbb0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x44FBB0u;
    SET_GPR_U32(ctx, 31, 0x44FBB8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x44FBB0u, 0x44FBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FBB8u;
label_44fbb8:
    // 0x44fbb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x44fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44fbbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44fbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44fbc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44fbc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44fbc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44fbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44fbc8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x44fbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x44fbcc: 0x3e00008  jr          $ra
    ctx->pc = 0x44FBCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FBCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44FBD4u;
    // 0x44fbd4: 0x0  nop
    ctx->pc = 0x44fbd4u;
    // NOP
    // 0x44fbd8: 0x0  nop
    ctx->pc = 0x44fbd8u;
    // NOP
    // 0x44fbdc: 0x0  nop
    ctx->pc = 0x44fbdcu;
    // NOP
    ctx->pc = 0x44fbe0u;
}
