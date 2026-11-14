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

// Function: sub_00482710
// Address: 0x482710 - 0x482790
void sub_00482710_0x482710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482710_0x482710");
#endif

    switch (ctx->pc) {
        case 0x482744u: goto label_482744;
        case 0x482754u: goto label_482754;
        case 0x482774u: goto label_482774;
        default: break;
    }

    ctx->pc = 0x482710u;

    // 0x482710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x482718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48271c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48271cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x482720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482724: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x482724u;
    {
        const bool branch_taken_0x482724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482724) {
            ctx->pc = 0x482774u;
            goto label_482774;
        }
    }
    ctx->pc = 0x48272Cu;
    // 0x48272c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482734: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x482734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x482738: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x482738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48273c: 0xc120a10  jal         func_482840
    ctx->pc = 0x48273Cu;
    SET_GPR_U32(ctx, 31, 0x482744u);
    ctx->pc = 0x482840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482840u, 0x48273Cu, 0x482744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482744u;
label_482744:
    // 0x482744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x482748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48274c: 0xc1209e4  jal         func_482790
    ctx->pc = 0x48274Cu;
    SET_GPR_U32(ctx, 31, 0x482754u);
    ctx->pc = 0x482790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482790u, 0x48274Cu, 0x482754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482754u;
label_482754:
    // 0x482754: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x482754u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482758: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x482758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x48275c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48275cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x482760: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x482760u;
    {
        const bool branch_taken_0x482760 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x482760) {
            ctx->pc = 0x482774u;
            goto label_482774;
        }
    }
    ctx->pc = 0x482768u;
    // 0x482768: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48276c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x48276Cu;
    SET_GPR_U32(ctx, 31, 0x482774u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x48276Cu, 0x482774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482774u;
label_482774:
    // 0x482774: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48277c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48277cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x482780: 0x3e00008  jr          $ra
    ctx->pc = 0x482780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482788u;
    // 0x482788: 0x0  nop
    ctx->pc = 0x482788u;
    // NOP
    // 0x48278c: 0x0  nop
    ctx->pc = 0x48278cu;
    // NOP
    ctx->pc = 0x482790u;
}
