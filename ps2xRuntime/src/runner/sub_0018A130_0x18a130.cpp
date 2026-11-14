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

// Function: sub_0018A130
// Address: 0x18a130 - 0x18a190
void sub_0018A130_0x18a130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A130_0x18a130");
#endif

    switch (ctx->pc) {
        case 0x18a154u: goto label_18a154;
        case 0x18a170u: goto label_18a170;
        default: break;
    }

    ctx->pc = 0x18a130u;

    // 0x18a130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18a130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18a134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a13c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18a140: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x18a140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x18a144: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18a144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18a148: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18a148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a14c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x18A14Cu;
    SET_GPR_U32(ctx, 31, 0x18A154u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x18A14Cu, 0x18A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A154u;
label_18a154:
    // 0x18a154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a158: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A158u;
    {
        const bool branch_taken_0x18a158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a158) {
            ctx->pc = 0x18A174u;
            goto label_18a174;
        }
    }
    ctx->pc = 0x18A160u;
    // 0x18a160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18a160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a164: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x18a164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a168: 0xc062864  jal         func_18A190
    ctx->pc = 0x18A168u;
    SET_GPR_U32(ctx, 31, 0x18A170u);
    ctx->pc = 0x18A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A190u, 0x18A168u, 0x18A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A170u;
label_18a170:
    // 0x18a170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18a170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18a174:
    // 0x18a174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a17c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x18a17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18a180: 0x3e00008  jr          $ra
    ctx->pc = 0x18A180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A188u;
    // 0x18a188: 0x0  nop
    ctx->pc = 0x18a188u;
    // NOP
    // 0x18a18c: 0x0  nop
    ctx->pc = 0x18a18cu;
    // NOP
    ctx->pc = 0x18a190u;
}
