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

// Function: sub_00411070
// Address: 0x411070 - 0x4110c0
void sub_00411070_0x411070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411070_0x411070");
#endif

    switch (ctx->pc) {
        case 0x411088u: goto label_411088;
        case 0x411090u: goto label_411090;
        case 0x4110a4u: goto label_4110a4;
        default: break;
    }

    ctx->pc = 0x411070u;

    // 0x411070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x411070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x411074: 0x8f84bdc8  lw          $a0, -0x4238($gp)
    ctx->pc = 0x411074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
    // 0x411078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x411078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41107c: 0x2790bdc8  addiu       $s0, $gp, -0x4238
    ctx->pc = 0x41107cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950344));
    // 0x411080: 0x10900006  beq         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x411080u;
    {
        const bool branch_taken_0x411080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x411084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411080u;
        // 0x411084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411080) {
            ctx->pc = 0x41109Cu;
            goto label_41109c;
        }
    }
    ctx->pc = 0x411088u;
label_411088:
    // 0x411088: 0xc104284  jal         func_410A10
    ctx->pc = 0x411088u;
    SET_GPR_U32(ctx, 31, 0x411090u);
    ctx->pc = 0x41108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411088u;
    // 0x41108c: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x411088u, 0x411090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411090u;
label_411090:
    // 0x411090: 0x8f84bdc8  lw          $a0, -0x4238($gp)
    ctx->pc = 0x411090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
    // 0x411094: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x411094u;
    {
        const bool branch_taken_0x411094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x411094) {
            ctx->pc = 0x411088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411088;
        }
    }
    ctx->pc = 0x41109Cu;
label_41109c:
    // 0x41109c: 0xc104284  jal         func_410A10
    ctx->pc = 0x41109Cu;
    SET_GPR_U32(ctx, 31, 0x4110A4u);
    ctx->pc = 0x4110A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41109Cu;
    // 0x4110a0: 0x8f84ad30  lw          $a0, -0x52D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x41109Cu, 0x4110A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4110A4u;
label_4110a4:
    // 0x4110a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4110a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4110a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4110a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4110ac: 0xaf80ad30  sw          $zero, -0x52D0($gp)
    ctx->pc = 0x4110acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946096), GPR_U32(ctx, 0));
    // 0x4110b0: 0xaf80ad2c  sw          $zero, -0x52D4($gp)
    ctx->pc = 0x4110b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946092), GPR_U32(ctx, 0));
    // 0x4110b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4110B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4110B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4110B4u;
        // 0x4110b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4110B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4110BCu;
    // 0x4110bc: 0x0  nop
    ctx->pc = 0x4110bcu;
    // NOP
    ctx->pc = 0x4110c0u;
}
