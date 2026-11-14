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

// Function: sub_0025DBE0
// Address: 0x25dbe0 - 0x25dc10
void sub_0025DBE0_0x25dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DBE0_0x25dbe0");
#endif

    ctx->pc = 0x25dbe0u;

    // 0x25dbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25dbe4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25dbe8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25dbec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dbf0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25dbf4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dbf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dbfc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x25dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x25dc00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x25dc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25dc04: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25dc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25dc08: 0x3e00008  jr          $ra
    ctx->pc = 0x25DC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DC10u;
}
