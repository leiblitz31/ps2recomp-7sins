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

// Function: sub_0025AB80
// Address: 0x25ab80 - 0x25abc0
void sub_0025AB80_0x25ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AB80_0x25ab80");
#endif

    switch (ctx->pc) {
        case 0x25ab9cu: goto label_25ab9c;
        default: break;
    }

    ctx->pc = 0x25ab80u;

    // 0x25ab80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25ab84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ab88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25ab8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25ab90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ab94: 0xc095a2c  jal         func_2568B0
    ctx->pc = 0x25AB94u;
    SET_GPR_U32(ctx, 31, 0x25AB9Cu);
    ctx->pc = 0x2568B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568B0u, 0x25AB94u, 0x25AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB9Cu;
label_25ab9c:
    // 0x25ab9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25aba0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25aba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25aba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25abac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25abacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x25ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ABB8u;
    // 0x25abb8: 0x0  nop
    ctx->pc = 0x25abb8u;
    // NOP
    // 0x25abbc: 0x0  nop
    ctx->pc = 0x25abbcu;
    // NOP
    ctx->pc = 0x25abc0u;
}
