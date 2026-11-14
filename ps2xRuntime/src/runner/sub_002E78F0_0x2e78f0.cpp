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

// Function: sub_002E78F0
// Address: 0x2e78f0 - 0x2e7950
void sub_002E78F0_0x2e78f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E78F0_0x2e78f0");
#endif

    switch (ctx->pc) {
        case 0x2e790cu: goto label_2e790c;
        case 0x2e791cu: goto label_2e791c;
        case 0x2e7930u: goto label_2e7930;
        default: break;
    }

    ctx->pc = 0x2e78f0u;

    // 0x2e78f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e78f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e78f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e78f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e78fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e78fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e7900: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e7900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7904: 0xc085ac8  jal         func_216B20
    ctx->pc = 0x2E7904u;
    SET_GPR_U32(ctx, 31, 0x2E790Cu);
    ctx->pc = 0x216B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216B20u, 0x2E7904u, 0x2E790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E790Cu;
label_2e790c:
    // 0x2e790c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e790cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7910: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e7910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7914: 0xc085b88  jal         func_216E20
    ctx->pc = 0x2E7914u;
    SET_GPR_U32(ctx, 31, 0x2E791Cu);
    ctx->pc = 0x216E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E20u, 0x2E7914u, 0x2E791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E791Cu;
label_2e791c:
    // 0x2e791c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e791cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7920: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7924: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e7924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7928: 0xc085b28  jal         func_216CA0
    ctx->pc = 0x2E7928u;
    SET_GPR_U32(ctx, 31, 0x2E7930u);
    ctx->pc = 0x216CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216CA0u, 0x2E7928u, 0x2E7930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7930u;
label_2e7930:
    // 0x2e7930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e7930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7938: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e7938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e793c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E793Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E793Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7944u;
    // 0x2e7944: 0x0  nop
    ctx->pc = 0x2e7944u;
    // NOP
    // 0x2e7948: 0x0  nop
    ctx->pc = 0x2e7948u;
    // NOP
    // 0x2e794c: 0x0  nop
    ctx->pc = 0x2e794cu;
    // NOP
    ctx->pc = 0x2e7950u;
}
