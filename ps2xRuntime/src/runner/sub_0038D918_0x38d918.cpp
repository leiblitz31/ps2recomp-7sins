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

// Function: sub_0038D918
// Address: 0x38d918 - 0x38d958
void sub_0038D918_0x38d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D918_0x38d918");
#endif

    switch (ctx->pc) {
        case 0x38d940u: goto label_38d940;
        default: break;
    }

    ctx->pc = 0x38d918u;

    // 0x38d918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d91c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38d920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d924: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d928: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x38d928u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x38d92c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x38d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38d930: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D930u;
    {
        const bool branch_taken_0x38d930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D930u;
        // 0x38d934: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d930) {
            ctx->pc = 0x38D944u;
            goto label_38d944;
        }
    }
    ctx->pc = 0x38D938u;
    // 0x38d938: 0xc106794  jal         func_419E50
    ctx->pc = 0x38D938u;
    SET_GPR_U32(ctx, 31, 0x38D940u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x38D938u, 0x38D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D940u;
label_38d940:
    // 0x38d940: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38d940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d944:
    // 0x38d944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d948: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38d948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d94c: 0x3e00008  jr          $ra
    ctx->pc = 0x38D94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D94Cu;
        // 0x38d950: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D954u;
    // 0x38d954: 0x0  nop
    ctx->pc = 0x38d954u;
    // NOP
    ctx->pc = 0x38d958u;
}
