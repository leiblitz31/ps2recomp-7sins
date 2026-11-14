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

// Function: sub_0028FAE0
// Address: 0x28fae0 - 0x28fb40
void sub_0028FAE0_0x28fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FAE0_0x28fae0");
#endif

    switch (ctx->pc) {
        case 0x28fb08u: goto label_28fb08;
        case 0x28fb1cu: goto label_28fb1c;
        default: break;
    }

    ctx->pc = 0x28fae0u;

    // 0x28fae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28fae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28fae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28faec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28faecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28faf0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28faf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28faf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fafc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28fafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb00: 0xc0a3804  jal         func_28E010
    ctx->pc = 0x28FB00u;
    SET_GPR_U32(ctx, 31, 0x28FB08u);
    ctx->pc = 0x28E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E010u, 0x28FB00u, 0x28FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB08u;
label_28fb08:
    // 0x28fb08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fb08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb0c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x28fb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28fb10: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28fb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fb14: 0xc0a3ed0  jal         func_28FB40
    ctx->pc = 0x28FB14u;
    SET_GPR_U32(ctx, 31, 0x28FB1Cu);
    ctx->pc = 0x28FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB40u, 0x28FB14u, 0x28FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB1Cu;
label_28fb1c:
    // 0x28fb1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28fb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28fb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fb24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28fb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fb28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28fb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x28FB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FB34u;
    // 0x28fb34: 0x0  nop
    ctx->pc = 0x28fb34u;
    // NOP
    // 0x28fb38: 0x0  nop
    ctx->pc = 0x28fb38u;
    // NOP
    // 0x28fb3c: 0x0  nop
    ctx->pc = 0x28fb3cu;
    // NOP
    ctx->pc = 0x28fb40u;
}
