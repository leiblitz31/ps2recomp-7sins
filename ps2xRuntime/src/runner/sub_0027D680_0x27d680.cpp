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

// Function: sub_0027D680
// Address: 0x27d680 - 0x27d6c0
void sub_0027D680_0x27d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D680_0x27d680");
#endif

    switch (ctx->pc) {
        case 0x27d6acu: goto label_27d6ac;
        default: break;
    }

    ctx->pc = 0x27d680u;

    // 0x27d680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27d688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27d688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27d68c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d690: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x27d690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x27d694: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D694u;
    {
        const bool branch_taken_0x27d694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d694) {
            ctx->pc = 0x27D6ACu;
            goto label_27d6ac;
        }
    }
    ctx->pc = 0x27D69Cu;
    // 0x27d69c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d6a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27d6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d6a4: 0xc09f5b0  jal         func_27D6C0
    ctx->pc = 0x27D6A4u;
    SET_GPR_U32(ctx, 31, 0x27D6ACu);
    ctx->pc = 0x27D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6C0u, 0x27D6A4u, 0x27D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D6ACu;
label_27d6ac:
    // 0x27d6ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d6b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27d6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27D6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D6BCu;
    // 0x27d6bc: 0x0  nop
    ctx->pc = 0x27d6bcu;
    // NOP
    ctx->pc = 0x27d6c0u;
}
