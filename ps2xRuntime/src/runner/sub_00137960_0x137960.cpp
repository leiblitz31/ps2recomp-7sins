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

// Function: sub_00137960
// Address: 0x137960 - 0x1379b0
void sub_00137960_0x137960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137960_0x137960");
#endif

    ctx->pc = 0x137960u;

    // 0x137960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137964: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x137964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x137968: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x137968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13796c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x13796cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x137970: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x137970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x137974: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137978: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13797c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13797cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x137980: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x137980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137984: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137988: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x137988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13798c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137990: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137994: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x137994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x137998: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x137998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13799c: 0x3e00008  jr          $ra
    ctx->pc = 0x13799Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13799Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1379A4u;
    // 0x1379a4: 0x0  nop
    ctx->pc = 0x1379a4u;
    // NOP
    // 0x1379a8: 0x0  nop
    ctx->pc = 0x1379a8u;
    // NOP
    // 0x1379ac: 0x0  nop
    ctx->pc = 0x1379acu;
    // NOP
    ctx->pc = 0x1379b0u;
}
