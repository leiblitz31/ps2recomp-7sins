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

// Function: sub_004575C0
// Address: 0x4575c0 - 0x4576d0
void sub_004575C0_0x4575c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004575C0_0x4575c0");
#endif

    switch (ctx->pc) {
        case 0x4575e8u: goto label_4575e8;
        case 0x457600u: goto label_457600;
        case 0x457614u: goto label_457614;
        case 0x457624u: goto label_457624;
        case 0x457640u: goto label_457640;
        case 0x457658u: goto label_457658;
        case 0x457664u: goto label_457664;
        case 0x45767cu: goto label_45767c;
        case 0x45768cu: goto label_45768c;
        case 0x4576a4u: goto label_4576a4;
        case 0x4576b0u: goto label_4576b0;
        default: break;
    }

    ctx->pc = 0x4575c0u;

    // 0x4575c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4575c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4575c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4575c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4575c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4575c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4575cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x4575ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x4575d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x4575d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x4575d4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x4575d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x4575d8: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x4575d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
    // 0x4575dc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4575dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x4575e0: 0xc115ee4  jal         func_457B90
    ctx->pc = 0x4575E0u;
    SET_GPR_U32(ctx, 31, 0x4575E8u);
    ctx->pc = 0x457B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B90u, 0x4575E0u, 0x4575E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4575E8u;
label_4575e8:
    // 0x4575e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4575e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4575ec: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x4575ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x4575f0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x4575f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4575f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4575f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4575f8: 0xc115ed4  jal         func_457B50
    ctx->pc = 0x4575F8u;
    SET_GPR_U32(ctx, 31, 0x457600u);
    ctx->pc = 0x457B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B50u, 0x4575F8u, 0x457600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457600u;
label_457600:
    // 0x457600: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x457600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457604: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x457604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x457608: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x457608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45760c: 0xc115ec4  jal         func_457B10
    ctx->pc = 0x45760Cu;
    SET_GPR_U32(ctx, 31, 0x457614u);
    ctx->pc = 0x457B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457B10u, 0x45760Cu, 0x457614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457614u;
label_457614:
    // 0x457614: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x457614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x457618: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x457618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45761c: 0xc115eb8  jal         func_457AE0
    ctx->pc = 0x45761Cu;
    SET_GPR_U32(ctx, 31, 0x457624u);
    ctx->pc = 0x457AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457AE0u, 0x45761Cu, 0x457624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457624u;
label_457624:
    // 0x457624: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x457624u;
    {
        const bool branch_taken_0x457624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x457624) {
            ctx->pc = 0x457670u;
            goto label_457670;
        }
    }
    ctx->pc = 0x45762Cu;
    // 0x45762c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457630: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x457630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457634: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x457634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x457638: 0xc115dd4  jal         func_457750
    ctx->pc = 0x457638u;
    SET_GPR_U32(ctx, 31, 0x457640u);
    ctx->pc = 0x457750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457750u, 0x457638u, 0x457640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457640u;
label_457640:
    // 0x457640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x457640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457644: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x457644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457648: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x457648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45764c: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x45764cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x457650: 0xc115dc0  jal         func_457700
    ctx->pc = 0x457650u;
    SET_GPR_U32(ctx, 31, 0x457658u);
    ctx->pc = 0x457700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457700u, 0x457650u, 0x457658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457658u;
label_457658:
    // 0x457658: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x457658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x45765c: 0xc115dbc  jal         func_4576F0
    ctx->pc = 0x45765Cu;
    SET_GPR_U32(ctx, 31, 0x457664u);
    ctx->pc = 0x4576F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576F0u, 0x45765Cu, 0x457664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457664u;
label_457664:
    // 0x457664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x457664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457668: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x457668u;
    {
        const bool branch_taken_0x457668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x457668) {
            ctx->pc = 0x4576B4u;
            goto label_4576b4;
        }
    }
    ctx->pc = 0x457670u;
label_457670:
    // 0x457670: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x457670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x457674: 0xc115db4  jal         func_4576D0
    ctx->pc = 0x457674u;
    SET_GPR_U32(ctx, 31, 0x45767Cu);
    ctx->pc = 0x4576D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576D0u, 0x457674u, 0x45767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45767Cu;
label_45767c:
    // 0x45767c: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x45767cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x457680: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x457680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x457684: 0xc115db4  jal         func_4576D0
    ctx->pc = 0x457684u;
    SET_GPR_U32(ctx, 31, 0x45768Cu);
    ctx->pc = 0x4576D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576D0u, 0x457684u, 0x45768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45768Cu;
label_45768c:
    // 0x45768c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x457690: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x457690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457694: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x457694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x457698: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x457698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45769c: 0xc115dc0  jal         func_457700
    ctx->pc = 0x45769Cu;
    SET_GPR_U32(ctx, 31, 0x4576A4u);
    ctx->pc = 0x457700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457700u, 0x45769Cu, 0x4576A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4576A4u;
label_4576a4:
    // 0x4576a4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4576a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
    // 0x4576a8: 0xc115dbc  jal         func_4576F0
    ctx->pc = 0x4576A8u;
    SET_GPR_U32(ctx, 31, 0x4576B0u);
    ctx->pc = 0x4576F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4576F0u, 0x4576A8u, 0x4576B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4576B0u;
label_4576b0:
    // 0x4576b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4576b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4576b4:
    // 0x4576b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4576b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4576b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4576b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4576bc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4576bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4576c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4576C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4576C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4576C8u;
    // 0x4576c8: 0x0  nop
    ctx->pc = 0x4576c8u;
    // NOP
    // 0x4576cc: 0x0  nop
    ctx->pc = 0x4576ccu;
    // NOP
    ctx->pc = 0x4576d0u;
}
