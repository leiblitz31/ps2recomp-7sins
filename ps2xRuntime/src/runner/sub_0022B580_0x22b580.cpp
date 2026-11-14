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

// Function: sub_0022B580
// Address: 0x22b580 - 0x22b610
void sub_0022B580_0x22b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B580_0x22b580");
#endif

    switch (ctx->pc) {
        case 0x22b59cu: goto label_22b59c;
        case 0x22b5a8u: goto label_22b5a8;
        case 0x22b5b8u: goto label_22b5b8;
        case 0x22b5c4u: goto label_22b5c4;
        case 0x22b5d8u: goto label_22b5d8;
        case 0x22b5ecu: goto label_22b5ec;
        default: break;
    }

    ctx->pc = 0x22b580u;

label_22b580:
    // 0x22b580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22b584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b58c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22b590: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22b590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x22b594: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22B594u;
    {
        const bool branch_taken_0x22b594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b594) {
            ctx->pc = 0x22B5F0u;
            goto label_22b5f0;
        }
    }
    ctx->pc = 0x22B59Cu;
label_22b59c:
    // 0x22b59c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b5a0: 0xc08a8fc  jal         func_22A3F0
    ctx->pc = 0x22B5A0u;
    SET_GPR_U32(ctx, 31, 0x22B5A8u);
    ctx->pc = 0x22A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3F0u, 0x22B5A0u, 0x22B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5A8u;
label_22b5a8:
    // 0x22b5a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b5ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22b5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b5b0: 0xc08ad60  jal         func_22B580
    ctx->pc = 0x22B5B0u;
    SET_GPR_U32(ctx, 31, 0x22B5B8u);
    ctx->pc = 0x22B580u;
    goto label_22b580;
    ctx->pc = 0x22B5B8u;
label_22b5b8:
    // 0x22b5b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x22b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b5bc: 0xc08a904  jal         func_22A410
    ctx->pc = 0x22B5BCu;
    SET_GPR_U32(ctx, 31, 0x22B5C4u);
    ctx->pc = 0x22A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A410u, 0x22B5BCu, 0x22B5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5C4u;
label_22b5c4:
    // 0x22b5c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22b5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b5c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b5cc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x22b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x22b5d0: 0xc08ad84  jal         func_22B610
    ctx->pc = 0x22B5D0u;
    SET_GPR_U32(ctx, 31, 0x22B5D8u);
    ctx->pc = 0x22B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B610u, 0x22B5D0u, 0x22B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5D8u;
label_22b5d8:
    // 0x22b5d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b5dc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x22b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b5e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b5e4: 0xc08ab38  jal         func_22ACE0
    ctx->pc = 0x22B5E4u;
    SET_GPR_U32(ctx, 31, 0x22B5ECu);
    ctx->pc = 0x22ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ACE0u, 0x22B5E4u, 0x22B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B5ECu;
label_22b5ec:
    // 0x22b5ec: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x22b5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_22b5f0:
    // 0x22b5f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x22b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b5f4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x22B5F4u;
    {
        const bool branch_taken_0x22b5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b5f4) {
            ctx->pc = 0x22B59Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b59c;
        }
    }
    ctx->pc = 0x22B5FCu;
    // 0x22b5fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b604: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22b604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x22b608: 0x3e00008  jr          $ra
    ctx->pc = 0x22B608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B610u;
}
