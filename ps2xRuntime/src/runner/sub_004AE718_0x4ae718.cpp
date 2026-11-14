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

// Function: sub_004AE718
// Address: 0x4ae718 - 0x4ae760
void sub_004AE718_0x4ae718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE718_0x4ae718");
#endif

    switch (ctx->pc) {
        case 0x4ae728u: goto label_4ae728;
        default: break;
    }

    ctx->pc = 0x4ae718u;

    // 0x4ae718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae71c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae720: 0xc12b9d8  jal         func_4AE760
    ctx->pc = 0x4AE720u;
    SET_GPR_U32(ctx, 31, 0x4AE728u);
    ctx->pc = 0x4AE760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE760u, 0x4AE720u, 0x4AE728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE728u;
label_4ae728:
    // 0x4ae728: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4ae728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae72c: 0x9f84c230  lwu         $a0, -0x3DD0($gp)
    ctx->pc = 0x4ae72cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294951472)));
    // 0x4ae730: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x4ae730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4ae734: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4ae734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4ae738: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4ae738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4ae73c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4AE73Cu;
    {
        const bool branch_taken_0x4ae73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ae73c) {
            ctx->pc = 0x4AE740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AE73Cu;
            // 0x4ae740: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AE744u;
            goto label_4ae744;
        }
    }
    ctx->pc = 0x4AE744u;
label_4ae744:
    // 0x4ae744: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x4ae744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4ae748: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ae748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ae74c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ae74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ae750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae754: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4ae754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae758: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE758u;
        // 0x4ae75c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE760u;
}
