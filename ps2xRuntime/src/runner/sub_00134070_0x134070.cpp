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

// Function: sub_00134070
// Address: 0x134070 - 0x134140
void sub_00134070_0x134070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134070_0x134070");
#endif

    switch (ctx->pc) {
        case 0x1340bcu: goto label_1340bc;
        case 0x1340f8u: goto label_1340f8;
        case 0x13411cu: goto label_13411c;
        case 0x134128u: goto label_134128;
        default: break;
    }

    ctx->pc = 0x134070u;

    // 0x134070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x134070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x134074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13407c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13407cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x134080: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x134080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x134084: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x134084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x134088: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x134088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13408c: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x13408cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x134090: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x134090u;
    {
        const bool branch_taken_0x134090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134090) {
            ctx->pc = 0x134128u;
            goto label_134128;
        }
    }
    ctx->pc = 0x134098u;
    // 0x134098: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x134098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13409c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1340a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1340a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1340a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1340a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1340a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1340a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1340ac: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1340acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1340b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1340b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1340b4: 0xc04cc18  jal         func_133060
    ctx->pc = 0x1340B4u;
    SET_GPR_U32(ctx, 31, 0x1340BCu);
    ctx->pc = 0x133060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133060u, 0x1340B4u, 0x1340BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340BCu;
label_1340bc:
    // 0x1340bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1340bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1340c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1340c4: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1340c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1340c8: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1340C8u;
    {
        const bool branch_taken_0x1340c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1340c8) {
            ctx->pc = 0x134128u;
            goto label_134128;
        }
    }
    ctx->pc = 0x1340D0u;
    // 0x1340d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1340d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1340d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1340d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1340d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1340d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1340dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1340dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1340e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1340e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1340e4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1340e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1340e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1340e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1340ec: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1340ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1340f0: 0xc04cc00  jal         func_133000
    ctx->pc = 0x1340F0u;
    SET_GPR_U32(ctx, 31, 0x1340F8u);
    ctx->pc = 0x133000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133000u, 0x1340F0u, 0x1340F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340F8u;
label_1340f8:
    // 0x1340f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1340f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1340fc: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1340fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x134100: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134104: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x134104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x134108: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x134108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13410c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x13410cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x134110: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x134110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134114: 0xc04d36c  jal         func_134DB0
    ctx->pc = 0x134114u;
    SET_GPR_U32(ctx, 31, 0x13411Cu);
    ctx->pc = 0x134DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DB0u, 0x134114u, 0x13411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13411Cu;
label_13411c:
    // 0x13411c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134120: 0xc04cea4  jal         func_133A90
    ctx->pc = 0x134120u;
    SET_GPR_U32(ctx, 31, 0x134128u);
    ctx->pc = 0x133A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133A90u, 0x134120u, 0x134128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134128u;
label_134128:
    // 0x134128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13412c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13412cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134130: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x134130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x134134: 0x3e00008  jr          $ra
    ctx->pc = 0x134134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13413Cu;
    // 0x13413c: 0x0  nop
    ctx->pc = 0x13413cu;
    // NOP
    ctx->pc = 0x134140u;
}
