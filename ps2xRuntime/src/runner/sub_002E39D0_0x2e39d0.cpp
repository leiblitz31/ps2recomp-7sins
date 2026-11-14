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

// Function: sub_002E39D0
// Address: 0x2e39d0 - 0x2e3a50
void sub_002E39D0_0x2e39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E39D0_0x2e39d0");
#endif

    switch (ctx->pc) {
        case 0x2e3a04u: goto label_2e3a04;
        case 0x2e3a14u: goto label_2e3a14;
        case 0x2e3a34u: goto label_2e3a34;
        default: break;
    }

    ctx->pc = 0x2e39d0u;

    // 0x2e39d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e39d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e39d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e39d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e39d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e39dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e39dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e39e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e39e4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E39E4u;
    {
        const bool branch_taken_0x2e39e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e39e4) {
            ctx->pc = 0x2E3A34u;
            goto label_2e3a34;
        }
    }
    ctx->pc = 0x2E39ECu;
    // 0x2e39ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e39ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e39f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e39f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e39f8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e39f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e39fc: 0xc0b8ec0  jal         func_2E3B00
    ctx->pc = 0x2E39FCu;
    SET_GPR_U32(ctx, 31, 0x2E3A04u);
    ctx->pc = 0x2E3B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B00u, 0x2E39FCu, 0x2E3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A04u;
label_2e3a04:
    // 0x2e3a04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e3a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3a0c: 0xc0b8e94  jal         func_2E3A50
    ctx->pc = 0x2E3A0Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A14u);
    ctx->pc = 0x2E3A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3A50u, 0x2E3A0Cu, 0x2E3A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A14u;
label_2e3a14:
    // 0x2e3a14: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e3a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3a18: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e3a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e3a1c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e3a1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e3a20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3A20u;
    {
        const bool branch_taken_0x2e3a20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e3a20) {
            ctx->pc = 0x2E3A34u;
            goto label_2e3a34;
        }
    }
    ctx->pc = 0x2E3A28u;
    // 0x2e3a28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a2c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E3A2Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A34u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E3A2Cu, 0x2E3A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A34u;
label_2e3a34:
    // 0x2e3a34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3a3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3a40: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3A48u;
    // 0x2e3a48: 0x0  nop
    ctx->pc = 0x2e3a48u;
    // NOP
    // 0x2e3a4c: 0x0  nop
    ctx->pc = 0x2e3a4cu;
    // NOP
    ctx->pc = 0x2e3a50u;
}
