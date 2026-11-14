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

// Function: sub_003C5060
// Address: 0x3c5060 - 0x3c5130
void sub_003C5060_0x3c5060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5060_0x3c5060");
#endif

    switch (ctx->pc) {
        case 0x3c5060u: goto label_3c5060;
        case 0x3c5064u: goto label_3c5064;
        case 0x3c5068u: goto label_3c5068;
        case 0x3c506cu: goto label_3c506c;
        case 0x3c5070u: goto label_3c5070;
        case 0x3c5074u: goto label_3c5074;
        case 0x3c5078u: goto label_3c5078;
        case 0x3c507cu: goto label_3c507c;
        case 0x3c5080u: goto label_3c5080;
        case 0x3c5084u: goto label_3c5084;
        case 0x3c5088u: goto label_3c5088;
        case 0x3c508cu: goto label_3c508c;
        case 0x3c5090u: goto label_3c5090;
        case 0x3c5094u: goto label_3c5094;
        case 0x3c5098u: goto label_3c5098;
        case 0x3c509cu: goto label_3c509c;
        case 0x3c50a0u: goto label_3c50a0;
        case 0x3c50a4u: goto label_3c50a4;
        case 0x3c50a8u: goto label_3c50a8;
        case 0x3c50acu: goto label_3c50ac;
        case 0x3c50b0u: goto label_3c50b0;
        case 0x3c50b4u: goto label_3c50b4;
        case 0x3c50b8u: goto label_3c50b8;
        case 0x3c50bcu: goto label_3c50bc;
        case 0x3c50c0u: goto label_3c50c0;
        case 0x3c50c4u: goto label_3c50c4;
        case 0x3c50c8u: goto label_3c50c8;
        case 0x3c50ccu: goto label_3c50cc;
        case 0x3c50d0u: goto label_3c50d0;
        case 0x3c50d4u: goto label_3c50d4;
        case 0x3c50d8u: goto label_3c50d8;
        case 0x3c50dcu: goto label_3c50dc;
        case 0x3c50e0u: goto label_3c50e0;
        case 0x3c50e4u: goto label_3c50e4;
        case 0x3c50e8u: goto label_3c50e8;
        case 0x3c50ecu: goto label_3c50ec;
        case 0x3c50f0u: goto label_3c50f0;
        case 0x3c50f4u: goto label_3c50f4;
        case 0x3c50f8u: goto label_3c50f8;
        case 0x3c50fcu: goto label_3c50fc;
        case 0x3c5100u: goto label_3c5100;
        case 0x3c5104u: goto label_3c5104;
        case 0x3c5108u: goto label_3c5108;
        case 0x3c510cu: goto label_3c510c;
        case 0x3c5110u: goto label_3c5110;
        case 0x3c5114u: goto label_3c5114;
        case 0x3c5118u: goto label_3c5118;
        case 0x3c511cu: goto label_3c511c;
        case 0x3c5120u: goto label_3c5120;
        case 0x3c5124u: goto label_3c5124;
        case 0x3c5128u: goto label_3c5128;
        case 0x3c512cu: goto label_3c512c;
        default: break;
    }

    ctx->pc = 0x3c5060u;

label_3c5060:
    // 0x3c5060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c5060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3c5064:
    // 0x3c5064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3c5064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3c5068:
    // 0x3c5068: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3c5068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3c506c:
    // 0x3c506c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c506cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c5070:
    // 0x3c5070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c5070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c5074:
    // 0x3c5074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c5074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5078:
    // 0x3c5078: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3c5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3c507c:
    // 0x3c507c: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c5080:
    // 0x3c5080: 0xc0bf6e8  jal         func_2FDBA0
label_3c5084:
    if (ctx->pc == 0x3C5084u) {
        ctx->pc = 0x3C5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5080u;
        // 0x3c5084: 0x8e500058  lw          $s0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5088u;
        goto label_3c5088;
    }
    ctx->pc = 0x3C5080u;
    SET_GPR_U32(ctx, 31, 0x3C5088u);
    ctx->pc = 0x3C5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5080u;
    // 0x3c5084: 0x8e500058  lw          $s0, 0x58($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C5080u, 0x3C5088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5088u;
label_3c5088:
    // 0x3c5088: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3c5088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3c508c:
    // 0x3c508c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3c508cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3c5090:
    // 0x3c5090: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x3c5090u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_3c5094:
    // 0x3c5094: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3c5094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3c5098:
    // 0x3c5098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c5098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c509c:
    // 0x3c509c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3c509cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c50a0:
    // 0x3c50a0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3c50a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c50a4:
    // 0x3c50a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c50a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c50a8:
    // 0x3c50a8: 0x24e7e0c0  addiu       $a3, $a3, -0x1F40
    ctx->pc = 0x3c50a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959296));
label_3c50ac:
    // 0x3c50ac: 0x2529e180  addiu       $t1, $t1, -0x1E80
    ctx->pc = 0x3c50acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959488));
label_3c50b0:
    // 0x3c50b0: 0x2484e088  addiu       $a0, $a0, -0x1F78
    ctx->pc = 0x3c50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959240));
label_3c50b4:
    // 0x3c50b4: 0xc0c06aa  jal         func_301AA8
label_3c50b8:
    if (ctx->pc == 0x3C50B8u) {
        ctx->pc = 0x3C50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50B4u;
        // 0x3c50b8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50BCu;
        goto label_3c50bc;
    }
    ctx->pc = 0x3C50B4u;
    SET_GPR_U32(ctx, 31, 0x3C50BCu);
    ctx->pc = 0x3C50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C50B4u;
    // 0x3c50b8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C50B4u, 0x3C50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C50BCu;
label_3c50bc:
    // 0x3c50bc: 0xc0bf6e0  jal         func_2FDB80
label_3c50c0:
    if (ctx->pc == 0x3C50C0u) {
        ctx->pc = 0x3C50C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50BCu;
        // 0x3c50c0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50C4u;
        goto label_3c50c4;
    }
    ctx->pc = 0x3C50BCu;
    SET_GPR_U32(ctx, 31, 0x3C50C4u);
    ctx->pc = 0x3C50C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C50BCu;
    // 0x3c50c0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C50BCu, 0x3C50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C50C4u;
label_3c50c4:
    // 0x3c50c4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c50c8:
    // 0x3c50c8: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_3c50cc:
    if (ctx->pc == 0x3C50CCu) {
        ctx->pc = 0x3C50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50C8u;
        // 0x3c50cc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50D0u;
        goto label_3c50d0;
    }
    ctx->pc = 0x3C50C8u;
    {
        const bool branch_taken_0x3c50c8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3C50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50C8u;
        // 0x3c50cc: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c50c8) {
            ctx->pc = 0x3C50F4u;
            goto label_3c50f4;
        }
    }
    ctx->pc = 0x3C50D0u;
label_3c50d0:
    // 0x3c50d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c50d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c50d4:
    // 0x3c50d4: 0x0  nop
    ctx->pc = 0x3c50d4u;
    // NOP
label_3c50d8:
    // 0x3c50d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c50d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c50dc:
    // 0x3c50dc: 0xc0bf6dc  jal         func_2FDB70
label_3c50e0:
    if (ctx->pc == 0x3C50E0u) {
        ctx->pc = 0x3C50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50DCu;
        // 0x3c50e0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50E4u;
        goto label_3c50e4;
    }
    ctx->pc = 0x3C50DCu;
    SET_GPR_U32(ctx, 31, 0x3C50E4u);
    ctx->pc = 0x3C50E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C50DCu;
    // 0x3c50e0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3C50DCu, 0x3C50E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C50E4u;
label_3c50e4:
    // 0x3c50e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c50e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c50e8:
    // 0x3c50e8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3c50e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3c50ec:
    // 0x3c50ec: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_3c50f0:
    if (ctx->pc == 0x3C50F0u) {
        ctx->pc = 0x3C50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50ECu;
        // 0x3c50f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50F4u;
        goto label_3c50f4;
    }
    ctx->pc = 0x3C50ECu;
    {
        const bool branch_taken_0x3c50ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c50ec) {
            ctx->pc = 0x3C50F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C50ECu;
            // 0x3c50f0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C50D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c50d8;
        }
    }
    ctx->pc = 0x3C50F4u;
label_3c50f4:
    // 0x3c50f4: 0xc0bf6dc  jal         func_2FDB70
label_3c50f8:
    if (ctx->pc == 0x3C50F8u) {
        ctx->pc = 0x3C50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C50F4u;
        // 0x3c50f8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C50FCu;
        goto label_3c50fc;
    }
    ctx->pc = 0x3C50F4u;
    SET_GPR_U32(ctx, 31, 0x3C50FCu);
    ctx->pc = 0x3C50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C50F4u;
    // 0x3c50f8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB70u, 0x3C50F4u, 0x3C50FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C50FCu;
label_3c50fc:
    // 0x3c50fc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3c5100:
    // 0x3c5100: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3c5100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3c5104:
    // 0x3c5104: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3c5104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3c5108:
    // 0x3c5108: 0x40f809  jalr        $v0
label_3c510c:
    if (ctx->pc == 0x3C510Cu) {
        ctx->pc = 0x3C510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5108u;
        // 0x3c510c: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5110u;
        goto label_3c5110;
    }
    ctx->pc = 0x3C5108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C5110u);
        ctx->pc = 0x3C510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5108u;
        // 0x3c510c: 0x8e440058  lw          $a0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5108u, 0x3C5110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C5110u;
label_3c5110:
    // 0x3c5110: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3c5110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c5114:
    // 0x3c5114: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3c5114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c5118:
    // 0x3c5118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3c5118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c511c:
    // 0x3c511c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c5120:
    // 0x3c5120: 0x3e00008  jr          $ra
label_3c5124:
    if (ctx->pc == 0x3C5124u) {
        ctx->pc = 0x3C5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5120u;
        // 0x3c5124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5128u;
        goto label_3c5128;
    }
    ctx->pc = 0x3C5120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5120u;
        // 0x3c5124: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5128u;
label_3c5128:
    // 0x3c5128: 0x3e00008  jr          $ra
label_3c512c:
    if (ctx->pc == 0x3C512Cu) {
        ctx->pc = 0x3C512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5128u;
        // 0x3c512c: 0xaf84bd98  sw          $a0, -0x4268($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C5130u;
        goto label_fallthrough_0x3c5128;
    }
    ctx->pc = 0x3C5128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5128u;
        // 0x3c512c: 0xaf84bd98  sw          $a0, -0x4268($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c5128:
    ctx->pc = 0x3C5130u;
}
