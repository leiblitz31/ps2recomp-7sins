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

// Function: sub_00477170
// Address: 0x477170 - 0x4771e0
void sub_00477170_0x477170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477170_0x477170");
#endif

    switch (ctx->pc) {
        case 0x477190u: goto label_477190;
        case 0x47719cu: goto label_47719c;
        case 0x4771b8u: goto label_4771b8;
        case 0x4771c4u: goto label_4771c4;
        default: break;
    }

    ctx->pc = 0x477170u;

    // 0x477170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x477170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x477174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x477174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477178: 0x8f83c06c  lw          $v1, -0x3F94($gp)
    ctx->pc = 0x477178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x47717c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x47717Cu;
    {
        const bool branch_taken_0x47717c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47717c) {
            ctx->pc = 0x4771A0u;
            goto label_4771a0;
        }
    }
    ctx->pc = 0x477184u;
    // 0x477184: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477188: 0xc11dc78  jal         func_4771E0
    ctx->pc = 0x477188u;
    SET_GPR_U32(ctx, 31, 0x477190u);
    ctx->pc = 0x4771E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4771E0u, 0x477188u, 0x477190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477190u;
label_477190:
    // 0x477190: 0x8f84c06c  lw          $a0, -0x3F94($gp)
    ctx->pc = 0x477190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951020)));
    // 0x477194: 0xc119c5c  jal         func_467170
    ctx->pc = 0x477194u;
    SET_GPR_U32(ctx, 31, 0x47719Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x477194u, 0x47719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47719Cu;
label_47719c:
    // 0x47719c: 0xaf80c06c  sw          $zero, -0x3F94($gp)
    ctx->pc = 0x47719cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951020), GPR_U32(ctx, 0));
label_4771a0:
    // 0x4771a0: 0x8f83c068  lw          $v1, -0x3F98($gp)
    ctx->pc = 0x4771a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x4771a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4771A4u;
    {
        const bool branch_taken_0x4771a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4771a4) {
            ctx->pc = 0x4771C8u;
            goto label_4771c8;
        }
    }
    ctx->pc = 0x4771ACu;
    // 0x4771ac: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x4771acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x4771b0: 0xc11dc78  jal         func_4771E0
    ctx->pc = 0x4771B0u;
    SET_GPR_U32(ctx, 31, 0x4771B8u);
    ctx->pc = 0x4771E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4771E0u, 0x4771B0u, 0x4771B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4771B8u;
label_4771b8:
    // 0x4771b8: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x4771b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x4771bc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x4771BCu;
    SET_GPR_U32(ctx, 31, 0x4771C4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4771BCu, 0x4771C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4771C4u;
label_4771c4:
    // 0x4771c4: 0xaf80c068  sw          $zero, -0x3F98($gp)
    ctx->pc = 0x4771c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951016), GPR_U32(ctx, 0));
label_4771c8:
    // 0x4771c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4771c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4771cc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4771ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4771d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4771D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4771D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4771D8u;
    // 0x4771d8: 0x0  nop
    ctx->pc = 0x4771d8u;
    // NOP
    // 0x4771dc: 0x0  nop
    ctx->pc = 0x4771dcu;
    // NOP
    ctx->pc = 0x4771e0u;
}
