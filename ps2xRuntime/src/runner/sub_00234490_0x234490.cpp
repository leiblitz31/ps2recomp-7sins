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

// Function: sub_00234490
// Address: 0x234490 - 0x2345f0
void sub_00234490_0x234490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234490_0x234490");
#endif

    switch (ctx->pc) {
        case 0x234534u: goto label_234534;
        case 0x234544u: goto label_234544;
        case 0x23455cu: goto label_23455c;
        case 0x2345b4u: goto label_2345b4;
        default: break;
    }

    ctx->pc = 0x234490u;

    // 0x234490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23449c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23449cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2344a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2344a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2344a4: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x2344a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x2344a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2344a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2344ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2344acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2344b0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2344B0u;
    {
        const bool branch_taken_0x2344b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2344b0) {
            ctx->pc = 0x2344D0u;
            goto label_2344d0;
        }
    }
    ctx->pc = 0x2344B8u;
    // 0x2344b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2344b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2344bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2344bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2344c0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2344c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2344c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2344c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2344c8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2344C8u;
    {
        const bool branch_taken_0x2344c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2344c8) {
            ctx->pc = 0x2345D0u;
            goto label_2345d0;
        }
    }
    ctx->pc = 0x2344D0u;
label_2344d0:
    // 0x2344d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2344d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2344d4: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2344d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2344d8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2344D8u;
    {
        const bool branch_taken_0x2344d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2344d8) {
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2344E0u;
    // 0x2344e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2344e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2344e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2344e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2344e8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2344e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2344ec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2344ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2344f0:
    // 0x2344f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2344f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2344f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2344f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2344f8: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2344f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2344fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2344fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234500: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x234500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234504: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x234504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x234508: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x234508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23450c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x23450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x234510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234514: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x234514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x234518: 0x14020018  bne         $zero, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x234518u;
    {
        const bool branch_taken_0x234518 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x234518) {
            ctx->pc = 0x23457Cu;
            goto label_23457c;
        }
    }
    ctx->pc = 0x234520u;
    // 0x234520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234524: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x234524u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x234528: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x234528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23452c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x23452Cu;
    SET_GPR_U32(ctx, 31, 0x234534u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23452Cu, 0x234534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234534u;
label_234534:
    // 0x234534: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x234534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x234538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23453c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23453Cu;
    SET_GPR_U32(ctx, 31, 0x234544u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23453Cu, 0x234544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234544u;
label_234544:
    // 0x234544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x234544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234548: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234548u;
    {
        const bool branch_taken_0x234548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234548) {
            ctx->pc = 0x234560u;
            goto label_234560;
        }
    }
    ctx->pc = 0x234550u;
    // 0x234550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234554: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x234554u;
    SET_GPR_U32(ctx, 31, 0x23455Cu);
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x234554u, 0x23455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23455Cu;
label_23455c:
    // 0x23455c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23455cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234560:
    // 0x234560: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x234560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234564: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x234564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234568: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x234568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x23456c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x234570: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x234570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x234574: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234578: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x234578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_23457c:
    // 0x23457c: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x23457cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234580: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x234580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x234584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234588: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x234588u;
    {
        const bool branch_taken_0x234588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x234588) {
            ctx->pc = 0x2345B4u;
            goto label_2345b4;
        }
    }
    ctx->pc = 0x234590u;
    // 0x234590: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x234590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234594: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x234594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234598: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x234598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x23459c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2345a0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2345a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2345a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2345a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2345a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2345a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2345ac: 0xc08cf44  jal         func_233D10
    ctx->pc = 0x2345ACu;
    SET_GPR_U32(ctx, 31, 0x2345B4u);
    ctx->pc = 0x233D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D10u, 0x2345ACu, 0x2345B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2345B4u;
label_2345b4:
    // 0x2345b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2345b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2345b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2345bc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2345bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2345c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2345c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2345c4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2345c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2345c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2345c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2345cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2345ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2345d0:
    // 0x2345d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2345d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2345d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2345d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2345d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2345d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2345dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2345DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2345DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2345E4u;
    // 0x2345e4: 0x0  nop
    ctx->pc = 0x2345e4u;
    // NOP
    // 0x2345e8: 0x0  nop
    ctx->pc = 0x2345e8u;
    // NOP
    // 0x2345ec: 0x0  nop
    ctx->pc = 0x2345ecu;
    // NOP
    ctx->pc = 0x2345f0u;
}
