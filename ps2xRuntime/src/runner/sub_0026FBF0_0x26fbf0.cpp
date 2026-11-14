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

// Function: sub_0026FBF0
// Address: 0x26fbf0 - 0x26fc70
void sub_0026FBF0_0x26fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FBF0_0x26fbf0");
#endif

    switch (ctx->pc) {
        case 0x26fc24u: goto label_26fc24;
        case 0x26fc34u: goto label_26fc34;
        case 0x26fc54u: goto label_26fc54;
        default: break;
    }

    ctx->pc = 0x26fbf0u;

    // 0x26fbf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26fbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26fbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26fbf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26fbfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x26fbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x26fc00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26FC04u;
    {
        const bool branch_taken_0x26fc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fc04) {
            ctx->pc = 0x26FC54u;
            goto label_26fc54;
        }
    }
    ctx->pc = 0x26FC0Cu;
    // 0x26fc0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x26fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26fc18: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26fc1c: 0xc09bf48  jal         func_26FD20
    ctx->pc = 0x26FC1Cu;
    SET_GPR_U32(ctx, 31, 0x26FC24u);
    ctx->pc = 0x26FD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FD20u, 0x26FC1Cu, 0x26FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC24u;
label_26fc24:
    // 0x26fc24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26fc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc2c: 0xc09bf1c  jal         func_26FC70
    ctx->pc = 0x26FC2Cu;
    SET_GPR_U32(ctx, 31, 0x26FC34u);
    ctx->pc = 0x26FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FC70u, 0x26FC2Cu, 0x26FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC34u;
label_26fc34:
    // 0x26fc34: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x26fc34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26fc38: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26fc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26fc3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26fc3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26fc40: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FC40u;
    {
        const bool branch_taken_0x26fc40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x26fc40) {
            ctx->pc = 0x26FC54u;
            goto label_26fc54;
        }
    }
    ctx->pc = 0x26FC48u;
    // 0x26fc48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc4c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x26FC4Cu;
    SET_GPR_U32(ctx, 31, 0x26FC54u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x26FC4Cu, 0x26FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC54u;
label_26fc54:
    // 0x26fc54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26fc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fc5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26fc5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fc60: 0x3e00008  jr          $ra
    ctx->pc = 0x26FC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FC68u;
    // 0x26fc68: 0x0  nop
    ctx->pc = 0x26fc68u;
    // NOP
    // 0x26fc6c: 0x0  nop
    ctx->pc = 0x26fc6cu;
    // NOP
    ctx->pc = 0x26fc70u;
}
