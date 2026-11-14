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

// Function: sub_001B75D0
// Address: 0x1b75d0 - 0x1b7680
void sub_001B75D0_0x1b75d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B75D0_0x1b75d0");
#endif

    switch (ctx->pc) {
        case 0x1b75fcu: goto label_1b75fc;
        case 0x1b760cu: goto label_1b760c;
        case 0x1b7618u: goto label_1b7618;
        case 0x1b762cu: goto label_1b762c;
        case 0x1b7644u: goto label_1b7644;
        default: break;
    }

    ctx->pc = 0x1b75d0u;

    // 0x1b75d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b75d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b75d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b75d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b75d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b75d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b75dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b75dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b75e0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b75e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b75e4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b75e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1b75e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b75ec: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x1b75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1b75f0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b75f4: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1B75F4u;
    SET_GPR_U32(ctx, 31, 0x1B75FCu);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1B75F4u, 0x1B75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75FCu;
label_1b75fc:
    // 0x1b75fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b75fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7600: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b7600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7604: 0xc06dda0  jal         func_1B7680
    ctx->pc = 0x1B7604u;
    SET_GPR_U32(ctx, 31, 0x1B760Cu);
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1B7604u, 0x1B760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B760Cu;
label_1b760c:
    // 0x1b760c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b760cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7610: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B7610u;
    {
        const bool branch_taken_0x1b7610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7610) {
            ctx->pc = 0x1B764Cu;
            goto label_1b764c;
        }
    }
    ctx->pc = 0x1B7618u;
label_1b7618:
    // 0x1b7618: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b7618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b761c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b761cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7624: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B7624u;
    SET_GPR_U32(ctx, 31, 0x1B762Cu);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B7624u, 0x1B762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B762Cu;
label_1b762c:
    // 0x1b762c: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1b762cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b7630: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b7630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b7634: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b7634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7638: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b763c: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1B763Cu;
    SET_GPR_U32(ctx, 31, 0x1B7644u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1B763Cu, 0x1B7644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7644u;
label_1b7644:
    // 0x1b7644: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1b7644u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b7648: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b764c:
    // 0x1b764c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1b764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7650: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1b7650u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b7654: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1B7654u;
    {
        const bool branch_taken_0x1b7654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7654) {
            ctx->pc = 0x1B7618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7618;
        }
    }
    ctx->pc = 0x1B765Cu;
    // 0x1b765c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b765cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7660: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b7660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7664: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b7664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7668: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1b7668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b766c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B766Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B766Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7674u;
    // 0x1b7674: 0x0  nop
    ctx->pc = 0x1b7674u;
    // NOP
    // 0x1b7678: 0x0  nop
    ctx->pc = 0x1b7678u;
    // NOP
    // 0x1b767c: 0x0  nop
    ctx->pc = 0x1b767cu;
    // NOP
    ctx->pc = 0x1b7680u;
}
