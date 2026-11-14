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

// Function: sub_00282700
// Address: 0x282700 - 0x282770
void sub_00282700_0x282700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282700_0x282700");
#endif

    switch (ctx->pc) {
        case 0x282718u: goto label_282718;
        default: break;
    }

    ctx->pc = 0x282700u;

    // 0x282700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282708: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28270c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28270cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282710: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x282710u;
    {
        const bool branch_taken_0x282710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282710) {
            ctx->pc = 0x282748u;
            goto label_282748;
        }
    }
    ctx->pc = 0x282718u;
label_282718:
    // 0x282718: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28271c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x28271cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282720: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x282720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x282724: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x282724u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x282728: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x282728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28272c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28272cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x282730: 0x1010b8  dsll        $v0, $s0, 2
    ctx->pc = 0x282730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << 2);
    // 0x282734: 0x50102d  daddu       $v0, $v0, $s0
    ctx->pc = 0x282734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x282738: 0x62802d  daddu       $s0, $v1, $v0
    ctx->pc = 0x282738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x28273c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x282740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x282744: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x282744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_282748:
    // 0x282748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28274c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x28274cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282750: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x282750u;
    {
        const bool branch_taken_0x282750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282750) {
            ctx->pc = 0x282718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_282718;
        }
    }
    ctx->pc = 0x282758u;
    // 0x282758: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x282758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x28275c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28275cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x282760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282764: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x282764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282768: 0x3e00008  jr          $ra
    ctx->pc = 0x282768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282770u;
}
