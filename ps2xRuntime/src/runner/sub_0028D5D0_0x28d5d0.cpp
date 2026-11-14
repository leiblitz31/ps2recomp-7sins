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

// Function: sub_0028D5D0
// Address: 0x28d5d0 - 0x28d650
void sub_0028D5D0_0x28d5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D5D0_0x28d5d0");
#endif

    switch (ctx->pc) {
        case 0x28d604u: goto label_28d604;
        case 0x28d624u: goto label_28d624;
        case 0x28d634u: goto label_28d634;
        default: break;
    }

    ctx->pc = 0x28d5d0u;

    // 0x28d5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28d5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d5d8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x28d5dc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x28d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x28d5e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d5e4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28d5e8: 0x10030014  beq         $zero, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28D5E8u;
    {
        const bool branch_taken_0x28d5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x28d5e8) {
            ctx->pc = 0x28D63Cu;
            goto label_28d63c;
        }
    }
    ctx->pc = 0x28D5F0u;
    // 0x28d5f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d5f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d5f8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d5fc: 0xc1066de  jal         func_419B78
    ctx->pc = 0x28D5FCu;
    SET_GPR_U32(ctx, 31, 0x28D604u);
    ctx->pc = 0x419B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B78u, 0x28D5FCu, 0x28D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D604u;
label_28d604:
    // 0x28d604: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d608: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28D608u;
    {
        const bool branch_taken_0x28d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d608) {
            ctx->pc = 0x28D624u;
            goto label_28d624;
        }
    }
    ctx->pc = 0x28D610u;
    // 0x28d610: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d614: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d618: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d61c: 0xc0e6ee0  jal         func_39BB80
    ctx->pc = 0x28D61Cu;
    SET_GPR_U32(ctx, 31, 0x28D624u);
    ctx->pc = 0x39BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB80u, 0x28D61Cu, 0x28D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D624u;
label_28d624:
    // 0x28d624: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28d624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d628: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28d628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28d62c: 0xc0e20da  jal         func_388368
    ctx->pc = 0x28D62Cu;
    SET_GPR_U32(ctx, 31, 0x28D634u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x28D62Cu, 0x28D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D634u;
label_28d634:
    // 0x28d634: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28d634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d638: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28d638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_28d63c:
    // 0x28d63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d640: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28d644: 0x3e00008  jr          $ra
    ctx->pc = 0x28D644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D64Cu;
    // 0x28d64c: 0x0  nop
    ctx->pc = 0x28d64cu;
    // NOP
    ctx->pc = 0x28d650u;
}
