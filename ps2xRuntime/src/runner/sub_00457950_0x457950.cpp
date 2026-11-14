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

// Function: sub_00457950
// Address: 0x457950 - 0x4579a0
void sub_00457950_0x457950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457950_0x457950");
#endif

    switch (ctx->pc) {
        case 0x457974u: goto label_457974;
        case 0x457988u: goto label_457988;
        default: break;
    }

    ctx->pc = 0x457950u;

    // 0x457950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x457950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x457954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x457954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x457958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45795c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45795cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x457960: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x457960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x457964: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x457964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457968: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x457968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45796c: 0xc115e68  jal         func_4579A0
    ctx->pc = 0x45796Cu;
    SET_GPR_U32(ctx, 31, 0x457974u);
    ctx->pc = 0x4579A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4579A0u, 0x45796Cu, 0x457974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457974u;
label_457974:
    // 0x457974: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x457974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x457978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45797c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x45797cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457980: 0xc115e34  jal         func_4578D0
    ctx->pc = 0x457980u;
    SET_GPR_U32(ctx, 31, 0x457988u);
    ctx->pc = 0x4578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4578D0u, 0x457980u, 0x457988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457988u;
label_457988:
    // 0x457988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x457988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45798c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45798cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x457990: 0x3e00008  jr          $ra
    ctx->pc = 0x457990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457998u;
    // 0x457998: 0x0  nop
    ctx->pc = 0x457998u;
    // NOP
    // 0x45799c: 0x0  nop
    ctx->pc = 0x45799cu;
    // NOP
    ctx->pc = 0x4579a0u;
}
