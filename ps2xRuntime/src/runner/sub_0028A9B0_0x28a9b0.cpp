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

// Function: sub_0028A9B0
// Address: 0x28a9b0 - 0x28aa50
void sub_0028A9B0_0x28a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A9B0_0x28a9b0");
#endif

    switch (ctx->pc) {
        case 0x28a9dcu: goto label_28a9dc;
        case 0x28a9ecu: goto label_28a9ec;
        case 0x28aa00u: goto label_28aa00;
        case 0x28aa10u: goto label_28aa10;
        case 0x28aa28u: goto label_28aa28;
        default: break;
    }

    ctx->pc = 0x28a9b0u;

    // 0x28a9b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28a9b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a9b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a9bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28a9c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a9c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28a9c8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28A9C8u;
    {
        const bool branch_taken_0x28a9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a9c8) {
            ctx->pc = 0x28AA34u;
            goto label_28aa34;
        }
    }
    ctx->pc = 0x28A9D0u;
    // 0x28a9d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a9d4: 0xc0a2aa4  jal         func_28AA90
    ctx->pc = 0x28A9D4u;
    SET_GPR_U32(ctx, 31, 0x28A9DCu);
    ctx->pc = 0x28AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA90u, 0x28A9D4u, 0x28A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9DCu;
label_28a9dc:
    // 0x28a9dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a9e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a9e4: 0xc0a3dd4  jal         func_28F750
    ctx->pc = 0x28A9E4u;
    SET_GPR_U32(ctx, 31, 0x28A9ECu);
    ctx->pc = 0x28F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F750u, 0x28A9E4u, 0x28A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9ECu;
label_28a9ec:
    // 0x28a9ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a9f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28a9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a9f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a9f8: 0xc0a2a9c  jal         func_28AA70
    ctx->pc = 0x28A9F8u;
    SET_GPR_U32(ctx, 31, 0x28AA00u);
    ctx->pc = 0x28AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA70u, 0x28A9F8u, 0x28AA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA00u;
label_28aa00:
    // 0x28aa00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28aa04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aa08: 0xc0a2aa4  jal         func_28AA90
    ctx->pc = 0x28AA08u;
    SET_GPR_U32(ctx, 31, 0x28AA10u);
    ctx->pc = 0x28AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA90u, 0x28AA08u, 0x28AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA10u;
label_28aa10:
    // 0x28aa10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28aa14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aa18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28aa18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28aa1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aa20: 0xc0a2a94  jal         func_28AA50
    ctx->pc = 0x28AA20u;
    SET_GPR_U32(ctx, 31, 0x28AA28u);
    ctx->pc = 0x28AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA50u, 0x28AA20u, 0x28AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA28u;
label_28aa28:
    // 0x28aa28: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28aa2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aa30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x28aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_28aa34:
    // 0x28aa34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28aa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28aa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aa3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28aa3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28aa40: 0x3e00008  jr          $ra
    ctx->pc = 0x28AA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA48u;
    // 0x28aa48: 0x0  nop
    ctx->pc = 0x28aa48u;
    // NOP
    // 0x28aa4c: 0x0  nop
    ctx->pc = 0x28aa4cu;
    // NOP
    ctx->pc = 0x28aa50u;
}
