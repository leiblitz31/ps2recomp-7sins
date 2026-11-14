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

// Function: sub_00112CF0
// Address: 0x112cf0 - 0x112d40
void sub_00112CF0_0x112cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112CF0_0x112cf0");
#endif

    switch (ctx->pc) {
        case 0x112d14u: goto label_112d14;
        default: break;
    }

    ctx->pc = 0x112cf0u;

    // 0x112cf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x112cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x112cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x112cfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x112cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x112d00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x112d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x112d04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x112d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112d08: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x112d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112d0c: 0xc044764  jal         func_111D90
    ctx->pc = 0x112D0Cu;
    SET_GPR_U32(ctx, 31, 0x112D14u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x112D0Cu, 0x112D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D14u;
label_112d14:
    // 0x112d14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112d18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112d1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112d20: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x112d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x112d24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x112d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112d2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x112d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x112d30: 0x3e00008  jr          $ra
    ctx->pc = 0x112D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112D38u;
    // 0x112d38: 0x0  nop
    ctx->pc = 0x112d38u;
    // NOP
    // 0x112d3c: 0x0  nop
    ctx->pc = 0x112d3cu;
    // NOP
    ctx->pc = 0x112d40u;
}
