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

// Function: sub_00122D10
// Address: 0x122d10 - 0x122d90
void sub_00122D10_0x122d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122D10_0x122d10");
#endif

    switch (ctx->pc) {
        case 0x122d44u: goto label_122d44;
        case 0x122d54u: goto label_122d54;
        case 0x122d74u: goto label_122d74;
        default: break;
    }

    ctx->pc = 0x122d10u;

    // 0x122d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122d18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x122d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x122d1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x122d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x122d20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x122D24u;
    {
        const bool branch_taken_0x122d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122d24) {
            ctx->pc = 0x122D74u;
            goto label_122d74;
        }
    }
    ctx->pc = 0x122D2Cu;
    // 0x122d2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x122d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x122d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122d38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x122d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x122d3c: 0xc048b90  jal         func_122E40
    ctx->pc = 0x122D3Cu;
    SET_GPR_U32(ctx, 31, 0x122D44u);
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x122D3Cu, 0x122D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D44u;
label_122d44:
    // 0x122d44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122d4c: 0xc048b64  jal         func_122D90
    ctx->pc = 0x122D4Cu;
    SET_GPR_U32(ctx, 31, 0x122D54u);
    ctx->pc = 0x122D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D90u, 0x122D4Cu, 0x122D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D54u;
label_122d54:
    // 0x122d54: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x122d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122d58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x122d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x122d5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x122d5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x122d60: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122D60u;
    {
        const bool branch_taken_0x122d60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x122d60) {
            ctx->pc = 0x122D74u;
            goto label_122d74;
        }
    }
    ctx->pc = 0x122D68u;
    // 0x122d68: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x122d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d6c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x122D6Cu;
    SET_GPR_U32(ctx, 31, 0x122D74u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x122D6Cu, 0x122D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122D74u;
label_122d74:
    // 0x122d74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122d7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x122d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x122d80: 0x3e00008  jr          $ra
    ctx->pc = 0x122D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122D88u;
    // 0x122d88: 0x0  nop
    ctx->pc = 0x122d88u;
    // NOP
    // 0x122d8c: 0x0  nop
    ctx->pc = 0x122d8cu;
    // NOP
    ctx->pc = 0x122d90u;
}
