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

// Function: sub_00252410
// Address: 0x252410 - 0x252460
void sub_00252410_0x252410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252410_0x252410");
#endif

    switch (ctx->pc) {
        case 0x252440u: goto label_252440;
        default: break;
    }

    ctx->pc = 0x252410u;

    // 0x252410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252418: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x252418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25241c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252420: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x252420u;
    {
        const bool branch_taken_0x252420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252420) {
            ctx->pc = 0x252444u;
            goto label_252444;
        }
    }
    ctx->pc = 0x252428u;
    // 0x252428: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x252428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25242c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25242Cu;
    {
        const bool branch_taken_0x25242c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25242c) {
            ctx->pc = 0x252444u;
            goto label_252444;
        }
    }
    ctx->pc = 0x252434u;
    // 0x252434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x252434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252438: 0xc119c5c  jal         func_467170
    ctx->pc = 0x252438u;
    SET_GPR_U32(ctx, 31, 0x252440u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x252438u, 0x252440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252440u;
label_252440:
    // 0x252440: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x252440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_252444:
    // 0x252444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252448: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x252448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25244c: 0x3e00008  jr          $ra
    ctx->pc = 0x25244Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25244Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252454u;
    // 0x252454: 0x0  nop
    ctx->pc = 0x252454u;
    // NOP
    // 0x252458: 0x0  nop
    ctx->pc = 0x252458u;
    // NOP
    // 0x25245c: 0x0  nop
    ctx->pc = 0x25245cu;
    // NOP
    ctx->pc = 0x252460u;
}
