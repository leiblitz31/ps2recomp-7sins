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

// Function: sub_00275F70
// Address: 0x275f70 - 0x276190
void sub_00275F70_0x275f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275F70_0x275f70");
#endif

    switch (ctx->pc) {
        case 0x275f88u: goto label_275f88;
        case 0x275fd4u: goto label_275fd4;
        case 0x27600cu: goto label_27600c;
        case 0x276024u: goto label_276024;
        case 0x276034u: goto label_276034;
        case 0x276040u: goto label_276040;
        case 0x27604cu: goto label_27604c;
        case 0x2760a0u: goto label_2760a0;
        case 0x2760bcu: goto label_2760bc;
        case 0x2760d4u: goto label_2760d4;
        case 0x2760e4u: goto label_2760e4;
        case 0x2760fcu: goto label_2760fc;
        case 0x27615cu: goto label_27615c;
        case 0x27617cu: goto label_27617c;
        default: break;
    }

    ctx->pc = 0x275f70u;

    // 0x275f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275f78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275f7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f80: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x275F80u;
    SET_GPR_U32(ctx, 31, 0x275F88u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x275F80u, 0x275F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F88u;
label_275f88:
    // 0x275f88: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x275f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275f8c: 0x24635cd0  addiu       $v1, $v1, 0x5CD0
    ctx->pc = 0x275f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23760));
    // 0x275f90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275f98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275fa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x275fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x275FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275FACu;
    // 0x275fac: 0x0  nop
    ctx->pc = 0x275facu;
    // NOP
    // 0x275fb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x275fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x275fb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x275fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x275fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x275fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275fc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x275fc4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x275fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x275fc8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x275fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x275fcc: 0xc09d248  jal         func_274920
    ctx->pc = 0x275FCCu;
    SET_GPR_U32(ctx, 31, 0x275FD4u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x275FCCu, 0x275FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275FD4u;
label_275fd4:
    // 0x275fd4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275fd8: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x275FD8u;
    {
        const bool branch_taken_0x275fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275fd8) {
            ctx->pc = 0x2760ECu;
            goto label_2760ec;
        }
    }
    ctx->pc = 0x275FE0u;
    // 0x275fe0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x275fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275fe4: 0x10430041  beq         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x275FE4u;
    {
        const bool branch_taken_0x275fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275fe4) {
            ctx->pc = 0x2760ECu;
            goto label_2760ec;
        }
    }
    ctx->pc = 0x275FECu;
    // 0x275fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275ff0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275FF0u;
    {
        const bool branch_taken_0x275ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275ff0) {
            ctx->pc = 0x276000u;
            goto label_276000;
        }
    }
    ctx->pc = 0x275FF8u;
    // 0x275ff8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x275FF8u;
    {
        const bool branch_taken_0x275ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275ff8) {
            ctx->pc = 0x2760FCu;
            goto label_2760fc;
        }
    }
    ctx->pc = 0x276000u;
label_276000:
    // 0x276000: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x276000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276004: 0xc08d5f4  jal         func_2357D0
    ctx->pc = 0x276004u;
    SET_GPR_U32(ctx, 31, 0x27600Cu);
    ctx->pc = 0x2357D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D0u, 0x276004u, 0x27600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27600Cu;
label_27600c:
    // 0x27600c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x27600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x276010: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276014: 0x240504c0  addiu       $a1, $zero, 0x4C0
    ctx->pc = 0x276014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x276018: 0x2786a1c8  addiu       $a2, $gp, -0x5E38
    ctx->pc = 0x276018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943176));
    // 0x27601c: 0xc041a50  jal         func_106940
    ctx->pc = 0x27601Cu;
    SET_GPR_U32(ctx, 31, 0x276024u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x27601Cu, 0x276024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276024u;
label_276024:
    // 0x276024: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x276024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x276028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27602c: 0xc08d60c  jal         func_235830
    ctx->pc = 0x27602Cu;
    SET_GPR_U32(ctx, 31, 0x276034u);
    ctx->pc = 0x235830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235830u, 0x27602Cu, 0x276034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276034u;
label_276034:
    // 0x276034: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x276034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x276038: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x276038u;
    SET_GPR_U32(ctx, 31, 0x276040u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x276038u, 0x276040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276040u;
label_276040:
    // 0x276040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276044: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x276044u;
    SET_GPR_U32(ctx, 31, 0x27604Cu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x276044u, 0x27604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27604Cu;
label_27604c:
    // 0x27604c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27604cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276050: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x276050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276054: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276054u;
    {
        const bool branch_taken_0x276054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276054) {
            ctx->pc = 0x27606Cu;
            goto label_27606c;
        }
    }
    ctx->pc = 0x27605Cu;
    // 0x27605c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x276060: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x276060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276064: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x276064u;
    {
        const bool branch_taken_0x276064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276064) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x27606Cu;
label_27606c:
    // 0x27606c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x27606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x276070: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x276070u;
    {
        const bool branch_taken_0x276070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276070) {
            ctx->pc = 0x276088u;
            goto label_276088;
        }
    }
    ctx->pc = 0x276078u;
    // 0x276078: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x276078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27607c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x27607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x276080: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x276080u;
    {
        const bool branch_taken_0x276080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x276080) {
            ctx->pc = 0x2760D4u;
            goto label_2760d4;
        }
    }
    ctx->pc = 0x276088u;
label_276088:
    // 0x276088: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x276088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27608c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x27608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276090: 0x240504bf  addiu       $a1, $zero, 0x4BF
    ctx->pc = 0x276090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1215));
    // 0x276094: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276098: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x276098u;
    SET_GPR_U32(ctx, 31, 0x2760A0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x276098u, 0x2760A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760A0u;
label_2760a0:
    // 0x2760a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2760a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2760a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2760a8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2760a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2760ac: 0x2785a1d0  addiu       $a1, $gp, -0x5E30
    ctx->pc = 0x2760acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943184));
    // 0x2760b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2760b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760b4: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2760B4u;
    SET_GPR_U32(ctx, 31, 0x2760BCu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2760B4u, 0x2760BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760BCu;
label_2760bc:
    // 0x2760bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2760bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2760c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2760c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2760c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2760c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2760cc: 0xc08d4a4  jal         func_235290
    ctx->pc = 0x2760CCu;
    SET_GPR_U32(ctx, 31, 0x2760D4u);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x2760CCu, 0x2760D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760D4u;
label_2760d4:
    // 0x2760d4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2760d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2760d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2760d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2760dc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2760DCu;
    SET_GPR_U32(ctx, 31, 0x2760E4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2760DCu, 0x2760E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760E4u;
label_2760e4:
    // 0x2760e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2760E4u;
    {
        const bool branch_taken_0x2760e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760e4) {
            ctx->pc = 0x2760FCu;
            goto label_2760fc;
        }
    }
    ctx->pc = 0x2760ECu;
label_2760ec:
    // 0x2760ec: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2760ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2760f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2760f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2760f4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2760F4u;
    SET_GPR_U32(ctx, 31, 0x2760FCu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2760F4u, 0x2760FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760FCu;
label_2760fc:
    // 0x2760fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2760fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x276100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276104: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27610c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x27610cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x276110: 0x3e00008  jr          $ra
    ctx->pc = 0x276110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276118u;
    // 0x276118: 0x0  nop
    ctx->pc = 0x276118u;
    // NOP
    // 0x27611c: 0x0  nop
    ctx->pc = 0x27611cu;
    // NOP
    // 0x276120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x276120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x276124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x276128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27612c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27612cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x276130: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276134: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x276134u;
    {
        const bool branch_taken_0x276134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276134) {
            ctx->pc = 0x27617Cu;
            goto label_27617c;
        }
    }
    ctx->pc = 0x27613Cu;
    // 0x27613c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x276140: 0x24635cd0  addiu       $v1, $v1, 0x5CD0
    ctx->pc = 0x276140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23760));
    // 0x276144: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276148: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27614c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27614cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276154: 0xc09d150  jal         func_274540
    ctx->pc = 0x276154u;
    SET_GPR_U32(ctx, 31, 0x27615Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x276154u, 0x27615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27615Cu;
label_27615c:
    // 0x27615c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27615cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276160: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x276160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x276164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x276164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x276168: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276168u;
    {
        const bool branch_taken_0x276168 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x276168) {
            ctx->pc = 0x27617Cu;
            goto label_27617c;
        }
    }
    ctx->pc = 0x276170u;
    // 0x276170: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276174: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x276174u;
    SET_GPR_U32(ctx, 31, 0x27617Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x276174u, 0x27617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27617Cu;
label_27617c:
    // 0x27617c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276184: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x276184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x276188: 0x3e00008  jr          $ra
    ctx->pc = 0x276188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276190u;
}
