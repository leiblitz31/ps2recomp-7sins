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

// Function: sub_00199890
// Address: 0x199890 - 0x199920
void sub_00199890_0x199890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199890_0x199890");
#endif

    switch (ctx->pc) {
        case 0x1998b8u: goto label_1998b8;
        case 0x1998c8u: goto label_1998c8;
        case 0x1998dcu: goto label_1998dc;
        case 0x1998ecu: goto label_1998ec;
        default: break;
    }

    ctx->pc = 0x199890u;

    // 0x199890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x199890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x199894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19989c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1998a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1998a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1998a4: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1998a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1998a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1998ac: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1998acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1998b0: 0xc065c84  jal         func_197210
    ctx->pc = 0x1998B0u;
    SET_GPR_U32(ctx, 31, 0x1998B8u);
    ctx->pc = 0x197210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197210u, 0x1998B0u, 0x1998B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998B8u;
label_1998b8:
    // 0x1998b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1998b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1998bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1998C0u;
    {
        const bool branch_taken_0x1998c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1998c0) {
            ctx->pc = 0x1998F0u;
            goto label_1998f0;
        }
    }
    ctx->pc = 0x1998C8u;
label_1998c8:
    // 0x1998c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1998c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1998cc: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1998d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1998d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998d4: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x1998D4u;
    SET_GPR_U32(ctx, 31, 0x1998DCu);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x1998D4u, 0x1998DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998DCu;
label_1998dc:
    // 0x1998dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1998dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998e0: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1998e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1998e4: 0xc06707c  jal         func_19C1F0
    ctx->pc = 0x1998E4u;
    SET_GPR_U32(ctx, 31, 0x1998ECu);
    ctx->pc = 0x19C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1F0u, 0x1998E4u, 0x1998ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1998ECu;
label_1998ec:
    // 0x1998ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1998ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1998f0:
    // 0x1998f0: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1998f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1998f4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1998F4u;
    {
        const bool branch_taken_0x1998f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1998f4) {
            ctx->pc = 0x1998C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1998c8;
        }
    }
    ctx->pc = 0x1998FCu;
    // 0x1998fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1998fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199908: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x199908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19990c: 0x3e00008  jr          $ra
    ctx->pc = 0x19990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199914u;
    // 0x199914: 0x0  nop
    ctx->pc = 0x199914u;
    // NOP
    // 0x199918: 0x0  nop
    ctx->pc = 0x199918u;
    // NOP
    // 0x19991c: 0x0  nop
    ctx->pc = 0x19991cu;
    // NOP
    ctx->pc = 0x199920u;
}
