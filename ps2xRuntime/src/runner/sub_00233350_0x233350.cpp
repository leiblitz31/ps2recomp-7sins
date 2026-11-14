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

// Function: sub_00233350
// Address: 0x233350 - 0x2333f0
void sub_00233350_0x233350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233350_0x233350");
#endif

    switch (ctx->pc) {
        case 0x233378u: goto label_233378;
        case 0x233388u: goto label_233388;
        default: break;
    }

    ctx->pc = 0x233350u;

    // 0x233350: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x233350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x233354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x233354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x233358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x233358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23335c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x233360: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x233360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x233364: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x233364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x233368: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x233368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x23336c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233370: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x233370u;
    {
        const bool branch_taken_0x233370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233370) {
            ctx->pc = 0x23339Cu;
            goto label_23339c;
        }
    }
    ctx->pc = 0x233378u;
label_233378:
    // 0x233378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23337c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23337cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233380: 0xc04dec4  jal         func_137B10
    ctx->pc = 0x233380u;
    SET_GPR_U32(ctx, 31, 0x233388u);
    ctx->pc = 0x137B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137B10u, 0x233380u, 0x233388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233388u;
label_233388:
    // 0x233388: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23338c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x233390: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x233390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x233394: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x233398: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x233398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23339c:
    // 0x23339c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2333a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2333A0u;
    {
        const bool branch_taken_0x2333a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2333a0) {
            ctx->pc = 0x233378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_233378;
        }
    }
    ctx->pc = 0x2333A8u;
    // 0x2333a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2333a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2333acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2333b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2333b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2333b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2333b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2333b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2333b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2333bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2333BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2333BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2333C4u;
    // 0x2333c4: 0x0  nop
    ctx->pc = 0x2333c4u;
    // NOP
    // 0x2333c8: 0x0  nop
    ctx->pc = 0x2333c8u;
    // NOP
    // 0x2333cc: 0x0  nop
    ctx->pc = 0x2333ccu;
    // NOP
    // 0x2333d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2333d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2333d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2333d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2333d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2333dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2333DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2333DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2333E4u;
    // 0x2333e4: 0x0  nop
    ctx->pc = 0x2333e4u;
    // NOP
    // 0x2333e8: 0x0  nop
    ctx->pc = 0x2333e8u;
    // NOP
    // 0x2333ec: 0x0  nop
    ctx->pc = 0x2333ecu;
    // NOP
    ctx->pc = 0x2333f0u;
}
