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

// Function: sub_00252030
// Address: 0x252030 - 0x2520f0
void sub_00252030_0x252030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252030_0x252030");
#endif

    switch (ctx->pc) {
        case 0x252058u: goto label_252058;
        case 0x252070u: goto label_252070;
        case 0x252088u: goto label_252088;
        case 0x25209cu: goto label_25209c;
        case 0x2520b0u: goto label_2520b0;
        case 0x2520c0u: goto label_2520c0;
        case 0x2520dcu: goto label_2520dc;
        default: break;
    }

    ctx->pc = 0x252030u;

    // 0x252030: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25203c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25203cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x252040: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x252040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x252044: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x252044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x252048: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x252048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25204c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25204cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252050: 0xc0948c0  jal         func_252300
    ctx->pc = 0x252050u;
    SET_GPR_U32(ctx, 31, 0x252058u);
    ctx->pc = 0x252300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252300u, 0x252050u, 0x252058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252058u;
label_252058:
    // 0x252058: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x252058u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25205c: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x25205Cu;
    {
        const bool branch_taken_0x25205c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25205c) {
            ctx->pc = 0x2520A4u;
            goto label_2520a4;
        }
    }
    ctx->pc = 0x252064u;
    // 0x252064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x252064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252068: 0xc04d364  jal         func_134D90
    ctx->pc = 0x252068u;
    SET_GPR_U32(ctx, 31, 0x252070u);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x252068u, 0x252070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252070u;
label_252070:
    // 0x252070: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x252070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252074: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x252078: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x252078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25207c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252080: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x252080u;
    SET_GPR_U32(ctx, 31, 0x252088u);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x252080u, 0x252088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252088u;
label_252088:
    // 0x252088: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x252088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25208c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25208cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252090: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x252090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252094: 0xc09484c  jal         func_252130
    ctx->pc = 0x252094u;
    SET_GPR_U32(ctx, 31, 0x25209Cu);
    ctx->pc = 0x252130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252130u, 0x252094u, 0x25209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25209Cu;
label_25209c:
    // 0x25209c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25209Cu;
    {
        const bool branch_taken_0x25209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25209c) {
            ctx->pc = 0x2520DCu;
            goto label_2520dc;
        }
    }
    ctx->pc = 0x2520A4u;
label_2520a4:
    // 0x2520a4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2520a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2520a8: 0xc0947c0  jal         func_251F00
    ctx->pc = 0x2520A8u;
    SET_GPR_U32(ctx, 31, 0x2520B0u);
    ctx->pc = 0x251F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251F00u, 0x2520A8u, 0x2520B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520B0u;
label_2520b0:
    // 0x2520b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2520b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2520b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2520b8: 0xc0948c0  jal         func_252300
    ctx->pc = 0x2520B8u;
    SET_GPR_U32(ctx, 31, 0x2520C0u);
    ctx->pc = 0x252300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252300u, 0x2520B8u, 0x2520C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520C0u;
label_2520c0:
    // 0x2520c0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2520c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2520c4: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x2520c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2520c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2520c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2520cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2520ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520d0: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2520d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2520d4: 0xc09483c  jal         func_2520F0
    ctx->pc = 0x2520D4u;
    SET_GPR_U32(ctx, 31, 0x2520DCu);
    ctx->pc = 0x2520F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2520F0u, 0x2520D4u, 0x2520DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520DCu;
label_2520dc:
    // 0x2520dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2520dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2520e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2520e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2520e4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2520e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2520e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2520E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2520E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2520F0u;
}
