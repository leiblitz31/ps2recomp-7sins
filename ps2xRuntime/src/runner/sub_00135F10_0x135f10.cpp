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

// Function: sub_00135F10
// Address: 0x135f10 - 0x135f70
void sub_00135F10_0x135f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135F10_0x135f10");
#endif

    switch (ctx->pc) {
        case 0x135f34u: goto label_135f34;
        case 0x135f50u: goto label_135f50;
        default: break;
    }

    ctx->pc = 0x135f10u;

    // 0x135f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x135f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x135f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x135f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x135f1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x135f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x135f20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x135f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x135f24: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x135f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x135f28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x135f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135f2c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x135F2Cu;
    SET_GPR_U32(ctx, 31, 0x135F34u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x135F2Cu, 0x135F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F34u;
label_135f34:
    // 0x135f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f38: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135F38u;
    {
        const bool branch_taken_0x135f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f38) {
            ctx->pc = 0x135F54u;
            goto label_135f54;
        }
    }
    ctx->pc = 0x135F40u;
    // 0x135f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f44: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x135f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135f48: 0xc04d854  jal         func_136150
    ctx->pc = 0x135F48u;
    SET_GPR_U32(ctx, 31, 0x135F50u);
    ctx->pc = 0x136150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136150u, 0x135F48u, 0x135F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F50u;
label_135f50:
    // 0x135f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135f54:
    // 0x135f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x135f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135f5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x135f5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x135f60: 0x3e00008  jr          $ra
    ctx->pc = 0x135F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135F68u;
    // 0x135f68: 0x0  nop
    ctx->pc = 0x135f68u;
    // NOP
    // 0x135f6c: 0x0  nop
    ctx->pc = 0x135f6cu;
    // NOP
    ctx->pc = 0x135f70u;
}
