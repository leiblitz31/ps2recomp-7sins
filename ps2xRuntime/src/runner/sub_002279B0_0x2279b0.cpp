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

// Function: sub_002279B0
// Address: 0x2279b0 - 0x227a50
void sub_002279B0_0x2279b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002279B0_0x2279b0");
#endif

    switch (ctx->pc) {
        case 0x2279dcu: goto label_2279dc;
        case 0x2279ecu: goto label_2279ec;
        case 0x227a00u: goto label_227a00;
        case 0x227a10u: goto label_227a10;
        case 0x227a28u: goto label_227a28;
        default: break;
    }

    ctx->pc = 0x2279b0u;

    // 0x2279b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2279b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2279b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2279b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2279b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2279b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2279bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2279bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2279c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2279c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2279c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2279c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2279c8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2279C8u;
    {
        const bool branch_taken_0x2279c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2279c8) {
            ctx->pc = 0x227A34u;
            goto label_227a34;
        }
    }
    ctx->pc = 0x2279D0u;
    // 0x2279d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2279d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2279d4: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x2279D4u;
    SET_GPR_U32(ctx, 31, 0x2279DCu);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x2279D4u, 0x2279DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279DCu;
label_2279dc:
    // 0x2279dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2279dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2279e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2279e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2279e4: 0xc08ad60  jal         func_22B580
    ctx->pc = 0x2279E4u;
    SET_GPR_U32(ctx, 31, 0x2279ECu);
    ctx->pc = 0x22B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B580u, 0x2279E4u, 0x2279ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2279ECu;
label_2279ec:
    // 0x2279ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2279ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2279f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2279f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2279f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2279f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2279f8: 0xc089e9c  jal         func_227A70
    ctx->pc = 0x2279F8u;
    SET_GPR_U32(ctx, 31, 0x227A00u);
    ctx->pc = 0x227A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A70u, 0x2279F8u, 0x227A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A00u;
label_227a00:
    // 0x227a00: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x227a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x227a04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227a08: 0xc089ea4  jal         func_227A90
    ctx->pc = 0x227A08u;
    SET_GPR_U32(ctx, 31, 0x227A10u);
    ctx->pc = 0x227A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A90u, 0x227A08u, 0x227A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A10u;
label_227a10:
    // 0x227a10: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x227a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x227a14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x227a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227a18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x227a18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x227a1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x227a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227a20: 0xc089e94  jal         func_227A50
    ctx->pc = 0x227A20u;
    SET_GPR_U32(ctx, 31, 0x227A28u);
    ctx->pc = 0x227A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A50u, 0x227A20u, 0x227A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A28u;
label_227a28:
    // 0x227a28: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x227a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x227a2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x227a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227a30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x227a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_227a34:
    // 0x227a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x227a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227a3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x227a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x227a40: 0x3e00008  jr          $ra
    ctx->pc = 0x227A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227A48u;
    // 0x227a48: 0x0  nop
    ctx->pc = 0x227a48u;
    // NOP
    // 0x227a4c: 0x0  nop
    ctx->pc = 0x227a4cu;
    // NOP
    ctx->pc = 0x227a50u;
}
