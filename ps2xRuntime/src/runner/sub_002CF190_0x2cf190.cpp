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

// Function: sub_002CF190
// Address: 0x2cf190 - 0x2cf220
void sub_002CF190_0x2cf190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF190_0x2cf190");
#endif

    switch (ctx->pc) {
        case 0x2cf1e0u: goto label_2cf1e0;
        case 0x2cf1f0u: goto label_2cf1f0;
        default: break;
    }

    ctx->pc = 0x2cf190u;

    // 0x2cf190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2cf194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2cf198: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2cf198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2cf19c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf1a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2cf1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf1a4: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x2cf1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x2cf1a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cf1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cf1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF1B4u;
    // 0x2cf1b4: 0x0  nop
    ctx->pc = 0x2cf1b4u;
    // NOP
    // 0x2cf1b8: 0x0  nop
    ctx->pc = 0x2cf1b8u;
    // NOP
    // 0x2cf1bc: 0x0  nop
    ctx->pc = 0x2cf1bcu;
    // NOP
    // 0x2cf1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cf1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf1cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2cf1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2cf1d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2cf1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf1d4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2cf1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2cf1d8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CF1D8u;
    SET_GPR_U32(ctx, 31, 0x2CF1E0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CF1D8u, 0x2CF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1E0u;
label_2cf1e0:
    // 0x2cf1e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1e8: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2CF1E8u;
    SET_GPR_U32(ctx, 31, 0x2CF1F0u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CF1E8u, 0x2CF1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1F0u;
label_2cf1f0:
    // 0x2cf1f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf1f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf1f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cf1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cf1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF204u;
    // 0x2cf204: 0x0  nop
    ctx->pc = 0x2cf204u;
    // NOP
    // 0x2cf208: 0x0  nop
    ctx->pc = 0x2cf208u;
    // NOP
    // 0x2cf20c: 0x0  nop
    ctx->pc = 0x2cf20cu;
    // NOP
    // 0x2cf210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf214: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cf214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cf218: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF220u;
}
