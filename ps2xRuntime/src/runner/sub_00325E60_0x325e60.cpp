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

// Function: sub_00325E60
// Address: 0x325e60 - 0x325ec0
void sub_00325E60_0x325e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325E60_0x325e60");
#endif

    switch (ctx->pc) {
        case 0x325e84u: goto label_325e84;
        case 0x325e98u: goto label_325e98;
        default: break;
    }

    ctx->pc = 0x325e60u;

    // 0x325e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325e64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x325e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x325e68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x325e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x325e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e70: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x325e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x325e74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x325e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325e7c: 0xc0c98e2  jal         func_326388
    ctx->pc = 0x325E7Cu;
    SET_GPR_U32(ctx, 31, 0x325E84u);
    ctx->pc = 0x325E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E7Cu;
    // 0x325e80: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326388u, 0x325E7Cu, 0x325E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E84u;
label_325e84:
    // 0x325e84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x325E84u;
    {
        const bool branch_taken_0x325e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E84u;
        // 0x325e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e84) {
            ctx->pc = 0x325EA4u;
            goto label_325ea4;
        }
    }
    ctx->pc = 0x325E8Cu;
    // 0x325e8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x325e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325e90: 0xc0c9912  jal         func_326448
    ctx->pc = 0x325E90u;
    SET_GPR_U32(ctx, 31, 0x325E98u);
    ctx->pc = 0x325E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325E90u;
    // 0x325e94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326448u, 0x325E90u, 0x325E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325E98u;
label_325e98:
    // 0x325e98: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x325e98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x325e9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x325E9Cu;
    {
        const bool branch_taken_0x325e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325E9Cu;
        // 0x325ea0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325e9c) {
            ctx->pc = 0x325EA8u;
            goto label_325ea8;
        }
    }
    ctx->pc = 0x325EA4u;
label_325ea4:
    // 0x325ea4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325ea8:
    // 0x325ea8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x325ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325eac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x325eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325eb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x325eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x325EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325EB8u;
        // 0x325ebc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325EC0u;
}
