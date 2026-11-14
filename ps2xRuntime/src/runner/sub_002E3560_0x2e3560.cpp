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

// Function: sub_002E3560
// Address: 0x2e3560 - 0x2e35c0
void sub_002E3560_0x2e3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3560_0x2e3560");
#endif

    switch (ctx->pc) {
        case 0x2e3588u: goto label_2e3588;
        case 0x2e359cu: goto label_2e359c;
        default: break;
    }

    ctx->pc = 0x2e3560u;

    // 0x2e3560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e3560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e3564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e356c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e356cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e3570: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e3570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e3574: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e3574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e3578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e357c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e357cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3580: 0xc0b8ab0  jal         func_2E2AC0
    ctx->pc = 0x2E3580u;
    SET_GPR_U32(ctx, 31, 0x2E3588u);
    ctx->pc = 0x2E2AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2AC0u, 0x2E3580u, 0x2E3588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3588u;
label_2e3588:
    // 0x2e3588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e358c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2e358cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e3590: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e3590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3594: 0xc0b8d70  jal         func_2E35C0
    ctx->pc = 0x2E3594u;
    SET_GPR_U32(ctx, 31, 0x2E359Cu);
    ctx->pc = 0x2E35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E35C0u, 0x2E3594u, 0x2E359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E359Cu;
label_2e359c:
    // 0x2e359c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e359cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e35a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e35a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e35a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e35a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e35a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e35ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E35ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E35ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E35B4u;
    // 0x2e35b4: 0x0  nop
    ctx->pc = 0x2e35b4u;
    // NOP
    // 0x2e35b8: 0x0  nop
    ctx->pc = 0x2e35b8u;
    // NOP
    // 0x2e35bc: 0x0  nop
    ctx->pc = 0x2e35bcu;
    // NOP
    ctx->pc = 0x2e35c0u;
}
