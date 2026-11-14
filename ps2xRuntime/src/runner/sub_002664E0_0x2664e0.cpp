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

// Function: sub_002664E0
// Address: 0x2664e0 - 0x266520
void sub_002664E0_0x2664e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002664E0_0x2664e0");
#endif

    switch (ctx->pc) {
        case 0x266504u: goto label_266504;
        default: break;
    }

    ctx->pc = 0x2664e0u;

    // 0x2664e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2664e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2664e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2664e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2664e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2664e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2664ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2664ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2664f0: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x2664f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2664f4: 0x24050476  addiu       $a1, $zero, 0x476
    ctx->pc = 0x2664f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1142));
    // 0x2664f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2664f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2664fc: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2664FCu;
    SET_GPR_U32(ctx, 31, 0x266504u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2664FCu, 0x266504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266504u;
label_266504:
    // 0x266504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266508: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x266508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26650c: 0x3e00008  jr          $ra
    ctx->pc = 0x26650Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26650Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266514u;
    // 0x266514: 0x0  nop
    ctx->pc = 0x266514u;
    // NOP
    // 0x266518: 0x0  nop
    ctx->pc = 0x266518u;
    // NOP
    // 0x26651c: 0x0  nop
    ctx->pc = 0x26651cu;
    // NOP
    ctx->pc = 0x266520u;
}
