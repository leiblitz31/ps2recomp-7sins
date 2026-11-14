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

// Function: sub_001A1920
// Address: 0x1a1920 - 0x1a1970
void sub_001A1920_0x1a1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1920_0x1a1920");
#endif

    switch (ctx->pc) {
        case 0x1a1940u: goto label_1a1940;
        case 0x1a1958u: goto label_1a1958;
        default: break;
    }

    ctx->pc = 0x1a1920u;

    // 0x1a1920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a1920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a1924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1928: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a1928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a192c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a1930: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1a1930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1a1934: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1a1934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a1938: 0xc068684  jal         func_1A1A10
    ctx->pc = 0x1A1938u;
    SET_GPR_U32(ctx, 31, 0x1A1940u);
    ctx->pc = 0x1A1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1A10u, 0x1A1938u, 0x1A1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1940u;
label_1a1940:
    // 0x1a1940: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a1940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1944: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1a1944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1948: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1a1948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a194c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1a194cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a1950: 0xc06865c  jal         func_1A1970
    ctx->pc = 0x1A1950u;
    SET_GPR_U32(ctx, 31, 0x1A1958u);
    ctx->pc = 0x1A1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1970u, 0x1A1950u, 0x1A1958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1958u;
label_1a1958:
    // 0x1a1958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a195c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a195cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a1960: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1968u;
    // 0x1a1968: 0x0  nop
    ctx->pc = 0x1a1968u;
    // NOP
    // 0x1a196c: 0x0  nop
    ctx->pc = 0x1a196cu;
    // NOP
    ctx->pc = 0x1a1970u;
}
