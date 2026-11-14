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

// Function: sub_001E21F0
// Address: 0x1e21f0 - 0x1e2250
void sub_001E21F0_0x1e21f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E21F0_0x1e21f0");
#endif

    switch (ctx->pc) {
        case 0x1e2214u: goto label_1e2214;
        case 0x1e2224u: goto label_1e2224;
        case 0x1e2234u: goto label_1e2234;
        default: break;
    }

    ctx->pc = 0x1e21f0u;

    // 0x1e21f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e21f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e21f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e21f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e21f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e21fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e2200: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e2200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e2204: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e2204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e2208: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e220c: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E220Cu;
    SET_GPR_U32(ctx, 31, 0x1E2214u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E220Cu, 0x1E2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2214u;
label_1e2214:
    // 0x1e2214: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e2218: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e221c: 0xc078894  jal         func_1E2250
    ctx->pc = 0x1E221Cu;
    SET_GPR_U32(ctx, 31, 0x1E2224u);
    ctx->pc = 0x1E2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2250u, 0x1E221Cu, 0x1E2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2224u;
label_1e2224:
    // 0x1e2224: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e2224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e222c: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E222Cu;
    SET_GPR_U32(ctx, 31, 0x1E2234u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E222Cu, 0x1E2234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2234u;
label_1e2234:
    // 0x1e2234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2238: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e223c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E223Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E223Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2244u;
    // 0x1e2244: 0x0  nop
    ctx->pc = 0x1e2244u;
    // NOP
    // 0x1e2248: 0x0  nop
    ctx->pc = 0x1e2248u;
    // NOP
    // 0x1e224c: 0x0  nop
    ctx->pc = 0x1e224cu;
    // NOP
    ctx->pc = 0x1e2250u;
}
