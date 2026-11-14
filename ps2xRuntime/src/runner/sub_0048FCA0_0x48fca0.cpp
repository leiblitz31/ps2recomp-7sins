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

// Function: sub_0048FCA0
// Address: 0x48fca0 - 0x48fd00
void sub_0048FCA0_0x48fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FCA0_0x48fca0");
#endif

    switch (ctx->pc) {
        case 0x48fcccu: goto label_48fccc;
        case 0x48fce4u: goto label_48fce4;
        default: break;
    }

    ctx->pc = 0x48fca0u;

    // 0x48fca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48fca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48fca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48fcac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48fcb0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48fcb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fcb8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x48fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48fcbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48fcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48fcc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48fcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fcc4: 0xc124078  jal         func_4901E0
    ctx->pc = 0x48FCC4u;
    SET_GPR_U32(ctx, 31, 0x48FCCCu);
    ctx->pc = 0x4901E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4901E0u, 0x48FCC4u, 0x48FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FCCCu;
label_48fccc:
    // 0x48fccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48fcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fcd0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x48fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x48fcd4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x48fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48fcd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x48fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48fcdc: 0xc123f40  jal         func_48FD00
    ctx->pc = 0x48FCDCu;
    SET_GPR_U32(ctx, 31, 0x48FCE4u);
    ctx->pc = 0x48FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FD00u, 0x48FCDCu, 0x48FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FCE4u;
label_48fce4:
    // 0x48fce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48fce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48fce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fcec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fcecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fcf0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48fcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48fcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x48FCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FCFCu;
    // 0x48fcfc: 0x0  nop
    ctx->pc = 0x48fcfcu;
    // NOP
    ctx->pc = 0x48fd00u;
}
