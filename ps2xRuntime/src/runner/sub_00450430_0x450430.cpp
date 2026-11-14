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

// Function: sub_00450430
// Address: 0x450430 - 0x450470
void sub_00450430_0x450430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450430_0x450430");
#endif

    switch (ctx->pc) {
        case 0x450444u: goto label_450444;
        default: break;
    }

    ctx->pc = 0x450430u;

    // 0x450430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x450430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x450434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x450434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x450438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x450438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45043c: 0xc11904c  jal         func_464130
    ctx->pc = 0x45043Cu;
    SET_GPR_U32(ctx, 31, 0x450444u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x45043Cu, 0x450444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450444u;
label_450444:
    // 0x450444: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x450444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450448: 0xfc620030  sd          $v0, 0x30($v1)
    ctx->pc = 0x450448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
    // 0x45044c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45044cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450450: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x450450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x450454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x450454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450458: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x450458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45045c: 0x3e00008  jr          $ra
    ctx->pc = 0x45045Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45045Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450464u;
    // 0x450464: 0x0  nop
    ctx->pc = 0x450464u;
    // NOP
    // 0x450468: 0x0  nop
    ctx->pc = 0x450468u;
    // NOP
    // 0x45046c: 0x0  nop
    ctx->pc = 0x45046cu;
    // NOP
    ctx->pc = 0x450470u;
}
