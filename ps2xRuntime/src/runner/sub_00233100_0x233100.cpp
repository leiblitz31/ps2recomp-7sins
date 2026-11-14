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

// Function: sub_00233100
// Address: 0x233100 - 0x233160
void sub_00233100_0x233100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233100_0x233100");
#endif

    switch (ctx->pc) {
        case 0x233138u: goto label_233138;
        case 0x23314cu: goto label_23314c;
        default: break;
    }

    ctx->pc = 0x233100u;

    // 0x233100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x233100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x233104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233108: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x233108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23310c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23310cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x233110: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x233110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x233114: 0x8f83bb88  lw          $v1, -0x4478($gp)
    ctx->pc = 0x233114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949768)));
    // 0x233118: 0x1003000c  beq         $zero, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x233118u;
    {
        const bool branch_taken_0x233118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x233118) {
            ctx->pc = 0x23314Cu;
            goto label_23314c;
        }
    }
    ctx->pc = 0x233120u;
    // 0x233120: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x233120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x233124: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x233124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233128: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x233128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23312c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x23312cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233130: 0xc08caec  jal         func_232BB0
    ctx->pc = 0x233130u;
    SET_GPR_U32(ctx, 31, 0x233138u);
    ctx->pc = 0x232BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232BB0u, 0x233130u, 0x233138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233138u;
label_233138:
    // 0x233138: 0x8f82bb88  lw          $v0, -0x4478($gp)
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949768)));
    // 0x23313c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x233140: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x233140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x233144: 0xc08cc58  jal         func_233160
    ctx->pc = 0x233144u;
    SET_GPR_U32(ctx, 31, 0x23314Cu);
    ctx->pc = 0x233160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233160u, 0x233144u, 0x23314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23314Cu;
label_23314c:
    // 0x23314c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233150: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x233150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x233154: 0x3e00008  jr          $ra
    ctx->pc = 0x233154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23315Cu;
    // 0x23315c: 0x0  nop
    ctx->pc = 0x23315cu;
    // NOP
    ctx->pc = 0x233160u;
}
