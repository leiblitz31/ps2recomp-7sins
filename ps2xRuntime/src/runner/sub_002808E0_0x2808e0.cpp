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

// Function: sub_002808E0
// Address: 0x2808e0 - 0x280980
void sub_002808E0_0x2808e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002808E0_0x2808e0");
#endif

    switch (ctx->pc) {
        case 0x28090cu: goto label_28090c;
        case 0x28091cu: goto label_28091c;
        case 0x280930u: goto label_280930;
        case 0x280940u: goto label_280940;
        case 0x280958u: goto label_280958;
        default: break;
    }

    ctx->pc = 0x2808e0u;

    // 0x2808e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2808e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2808e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2808e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2808e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2808e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2808ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2808ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2808f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2808f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2808f4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2808f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2808f8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2808F8u;
    {
        const bool branch_taken_0x2808f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2808f8) {
            ctx->pc = 0x280964u;
            goto label_280964;
        }
    }
    ctx->pc = 0x280900u;
    // 0x280900: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280904: 0xc0a0270  jal         func_2809C0
    ctx->pc = 0x280904u;
    SET_GPR_U32(ctx, 31, 0x28090Cu);
    ctx->pc = 0x2809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809C0u, 0x280904u, 0x28090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28090Cu;
label_28090c:
    // 0x28090c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28090cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280910: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x280910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280914: 0xc0a0d78  jal         func_2835E0
    ctx->pc = 0x280914u;
    SET_GPR_U32(ctx, 31, 0x28091Cu);
    ctx->pc = 0x2835E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2835E0u, 0x280914u, 0x28091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28091Cu;
label_28091c:
    // 0x28091c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280920: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x280920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280924: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280928: 0xc0a0268  jal         func_2809A0
    ctx->pc = 0x280928u;
    SET_GPR_U32(ctx, 31, 0x280930u);
    ctx->pc = 0x2809A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809A0u, 0x280928u, 0x280930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280930u;
label_280930:
    // 0x280930: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x280930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x280934: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280938: 0xc0a0270  jal         func_2809C0
    ctx->pc = 0x280938u;
    SET_GPR_U32(ctx, 31, 0x280940u);
    ctx->pc = 0x2809C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2809C0u, 0x280938u, 0x280940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280940u;
label_280940:
    // 0x280940: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x280940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x280944: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x280944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280948: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x280948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28094c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280950: 0xc0a0260  jal         func_280980
    ctx->pc = 0x280950u;
    SET_GPR_U32(ctx, 31, 0x280958u);
    ctx->pc = 0x280980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280980u, 0x280950u, 0x280958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280958u;
label_280958:
    // 0x280958: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x280958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28095c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280960: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x280960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_280964:
    // 0x280964: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28096c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28096cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280970: 0x3e00008  jr          $ra
    ctx->pc = 0x280970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280978u;
    // 0x280978: 0x0  nop
    ctx->pc = 0x280978u;
    // NOP
    // 0x28097c: 0x0  nop
    ctx->pc = 0x28097cu;
    // NOP
    ctx->pc = 0x280980u;
}
