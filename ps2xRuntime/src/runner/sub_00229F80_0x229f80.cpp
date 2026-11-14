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

// Function: sub_00229F80
// Address: 0x229f80 - 0x22a090
void sub_00229F80_0x229f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229F80_0x229f80");
#endif

    switch (ctx->pc) {
        case 0x229fa8u: goto label_229fa8;
        case 0x229fb8u: goto label_229fb8;
        case 0x229fc8u: goto label_229fc8;
        case 0x229fe0u: goto label_229fe0;
        case 0x229fecu: goto label_229fec;
        case 0x22a000u: goto label_22a000;
        case 0x22a024u: goto label_22a024;
        case 0x22a034u: goto label_22a034;
        case 0x22a04cu: goto label_22a04c;
        case 0x22a05cu: goto label_22a05c;
        case 0x22a06cu: goto label_22a06c;
        case 0x22a078u: goto label_22a078;
        default: break;
    }

    ctx->pc = 0x229f80u;

    // 0x229f80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x229f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x229f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x229f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229f8c: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x229f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x229f90: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x229f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x229f94: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x229f98: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x229f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229f9c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x229f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229fa0: 0xc08a8a8  jal         func_22A2A0
    ctx->pc = 0x229FA0u;
    SET_GPR_U32(ctx, 31, 0x229FA8u);
    ctx->pc = 0x22A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2A0u, 0x229FA0u, 0x229FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FA8u;
label_229fa8:
    // 0x229fa8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x229fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x229fac: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x229facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229fb0: 0xc08a1b4  jal         func_2286D0
    ctx->pc = 0x229FB0u;
    SET_GPR_U32(ctx, 31, 0x229FB8u);
    ctx->pc = 0x2286D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286D0u, 0x229FB0u, 0x229FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FB8u;
label_229fb8:
    // 0x229fb8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x229fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x229fbc: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x229fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x229fc0: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x229FC0u;
    SET_GPR_U32(ctx, 31, 0x229FC8u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x229FC0u, 0x229FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FC8u;
label_229fc8:
    // 0x229fc8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x229FC8u;
    {
        const bool branch_taken_0x229fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x229fc8) {
            ctx->pc = 0x22A008u;
            goto label_22a008;
        }
    }
    ctx->pc = 0x229FD0u;
    // 0x229fd0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x229fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x229fd4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x229fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229fd8: 0xc08a88c  jal         func_22A230
    ctx->pc = 0x229FD8u;
    SET_GPR_U32(ctx, 31, 0x229FE0u);
    ctx->pc = 0x22A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A230u, 0x229FD8u, 0x229FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FE0u;
label_229fe0:
    // 0x229fe0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x229fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x229fe4: 0xc08a884  jal         func_22A210
    ctx->pc = 0x229FE4u;
    SET_GPR_U32(ctx, 31, 0x229FECu);
    ctx->pc = 0x22A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A210u, 0x229FE4u, 0x229FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229FECu;
label_229fec:
    // 0x229fec: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x229fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x229ff0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x229ff4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x229ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ff8: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x229FF8u;
    SET_GPR_U32(ctx, 31, 0x22A000u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x229FF8u, 0x22A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A000u;
label_22a000:
    // 0x22a000: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22A000u;
    {
        const bool branch_taken_0x22a000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a000) {
            ctx->pc = 0x22A06Cu;
            goto label_22a06c;
        }
    }
    ctx->pc = 0x22A008u;
label_22a008:
    // 0x22a008: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x22a008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x22a00c: 0x27b00038  addiu       $s0, $sp, 0x38
    ctx->pc = 0x22a00cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x22a010: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a014: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x22a014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22a018: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22a018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a01c: 0xc08a870  jal         func_22A1C0
    ctx->pc = 0x22A01Cu;
    SET_GPR_U32(ctx, 31, 0x22A024u);
    ctx->pc = 0x22A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A1C0u, 0x22A01Cu, 0x22A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A024u;
label_22a024:
    // 0x22a024: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x22a024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x22a028: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x22a028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22a02c: 0xc08a864  jal         func_22A190
    ctx->pc = 0x22A02Cu;
    SET_GPR_U32(ctx, 31, 0x22A034u);
    ctx->pc = 0x22A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A190u, 0x22A02Cu, 0x22A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A034u;
label_22a034:
    // 0x22a034: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x22a034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22a038: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x22a038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22a03c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x22a03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a040: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x22a040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a044: 0xc08a84c  jal         func_22A130
    ctx->pc = 0x22A044u;
    SET_GPR_U32(ctx, 31, 0x22A04Cu);
    ctx->pc = 0x22A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A130u, 0x22A044u, 0x22A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A04Cu;
label_22a04c:
    // 0x22a04c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x22a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22a050: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22a054: 0xc08a83c  jal         func_22A0F0
    ctx->pc = 0x22A054u;
    SET_GPR_U32(ctx, 31, 0x22A05Cu);
    ctx->pc = 0x22A0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A0F0u, 0x22A054u, 0x22A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A05Cu;
label_22a05c:
    // 0x22a05c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x22a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22a060: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22a060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22a064: 0xc08a824  jal         func_22A090
    ctx->pc = 0x22A064u;
    SET_GPR_U32(ctx, 31, 0x22A06Cu);
    ctx->pc = 0x22A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A090u, 0x22A064u, 0x22A06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A06Cu;
label_22a06c:
    // 0x22a06c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x22a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x22a070: 0xc08a884  jal         func_22A210
    ctx->pc = 0x22A070u;
    SET_GPR_U32(ctx, 31, 0x22A078u);
    ctx->pc = 0x22A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A210u, 0x22A070u, 0x22A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A078u;
label_22a078:
    // 0x22a078: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x22a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22a07c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22a07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a084: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x22a084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22a088: 0x3e00008  jr          $ra
    ctx->pc = 0x22A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A090u;
}
