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

// Function: sub_002C4470
// Address: 0x2c4470 - 0x2c4500
void sub_002C4470_0x2c4470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4470_0x2c4470");
#endif

    switch (ctx->pc) {
        case 0x2c4498u: goto label_2c4498;
        case 0x2c44b8u: goto label_2c44b8;
        case 0x2c44d0u: goto label_2c44d0;
        case 0x2c44f0u: goto label_2c44f0;
        default: break;
    }

    ctx->pc = 0x2c4470u;

    // 0x2c4470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c4474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c4478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c447c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c447cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c4480: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c4480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4484: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4488: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c4488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c448c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c448cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c4490: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2C4490u;
    SET_GPR_U32(ctx, 31, 0x2C4498u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C4490u, 0x2C4498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4498u;
label_2c4498:
    // 0x2c4498: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4498u;
    {
        const bool branch_taken_0x2c4498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4498) {
            ctx->pc = 0x2C44B8u;
            goto label_2c44b8;
        }
    }
    ctx->pc = 0x2C44A0u;
    // 0x2c44a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c44a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c44a8: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c44ac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c44acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c44b0: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2C44B0u;
    SET_GPR_U32(ctx, 31, 0x2C44B8u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2C44B0u, 0x2C44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44B8u;
label_2c44b8:
    // 0x2c44b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c44bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c44c0: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c44c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c44c4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c44c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c44c8: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2C44C8u;
    SET_GPR_U32(ctx, 31, 0x2C44D0u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2C44C8u, 0x2C44D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44D0u;
label_2c44d0:
    // 0x2c44d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C44D0u;
    {
        const bool branch_taken_0x2c44d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c44d0) {
            ctx->pc = 0x2C44F0u;
            goto label_2c44f0;
        }
    }
    ctx->pc = 0x2C44D8u;
    // 0x2c44d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c44dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c44e0: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c44e4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c44e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c44e8: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2C44E8u;
    SET_GPR_U32(ctx, 31, 0x2C44F0u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2C44E8u, 0x2C44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C44F0u;
label_2c44f0:
    // 0x2c44f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c44f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c44f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c44f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c44f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C44F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C44F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4500u;
}
