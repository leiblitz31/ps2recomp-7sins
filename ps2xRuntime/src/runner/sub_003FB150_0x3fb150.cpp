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

// Function: sub_003FB150
// Address: 0x3fb150 - 0x3fb1e0
void sub_003FB150_0x3fb150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB150_0x3fb150");
#endif

    switch (ctx->pc) {
        case 0x3fb184u: goto label_3fb184;
        case 0x3fb194u: goto label_3fb194;
        case 0x3fb19cu: goto label_3fb19c;
        case 0x3fb1c8u: goto label_3fb1c8;
        default: break;
    }

    ctx->pc = 0x3fb150u;

    // 0x3fb150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fb150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3fb154: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fb154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3fb158: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fb158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3fb15c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fb15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb160: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3fb160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3fb164: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fb164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb168: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fb168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb16c: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FB16Cu;
    {
        const bool branch_taken_0x3fb16c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB16Cu;
        // 0x3fb170: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb16c) {
            ctx->pc = 0x3FB1C8u;
            goto label_3fb1c8;
        }
    }
    ctx->pc = 0x3FB174u;
    // 0x3fb174: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FB174u;
    {
        const bool branch_taken_0x3fb174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb174) {
            ctx->pc = 0x3FB178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB174u;
            // 0x3fb178: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB1CCu;
            goto label_3fb1cc;
        }
    }
    ctx->pc = 0x3FB17Cu;
    // 0x3fb17c: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FB17Cu;
    SET_GPR_U32(ctx, 31, 0x3FB184u);
    ctx->pc = 0x3FB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB17Cu;
    // 0x3fb180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FB17Cu, 0x3FB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB184u;
label_3fb184:
    // 0x3fb184: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3fb184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3fb188: 0xdc25f968  ld          $a1, -0x698($at)
    ctx->pc = 0x3fb188u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5FF968u));
    // 0x3fb18c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FB18Cu;
    SET_GPR_U32(ctx, 31, 0x3FB194u);
    ctx->pc = 0x3FB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB18Cu;
    // 0x3fb190: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FB18Cu, 0x3FB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB194u;
label_3fb194:
    // 0x3fb194: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FB194u;
    SET_GPR_U32(ctx, 31, 0x3FB19Cu);
    ctx->pc = 0x3FB198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB194u;
    // 0x3fb198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FB194u, 0x3FB19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB19Cu;
label_3fb19c:
    // 0x3fb19c: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3fb19cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3fb1a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fb1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fb1a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3fb1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3fb1a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb1ac: 0xfe110148  sd          $s1, 0x148($s0)
    ctx->pc = 0x3fb1acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 17));
    // 0x3fb1b0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FB1B0u;
    {
        const bool branch_taken_0x3fb1b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB1B0u;
        // 0x3fb1b4: 0xfe020010  sd          $v0, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb1b0) {
            ctx->pc = 0x3FB1C8u;
            goto label_3fb1c8;
        }
    }
    ctx->pc = 0x3FB1B8u;
    // 0x3fb1b8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fb1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fb1bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb1c0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FB1C0u;
    SET_GPR_U32(ctx, 31, 0x3FB1C8u);
    ctx->pc = 0x3FB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB1C0u;
    // 0x3fb1c4: 0x24a5f738  addiu       $a1, $a1, -0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FB1C0u, 0x3FB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB1C8u;
label_3fb1c8:
    // 0x3fb1c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fb1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fb1cc:
    // 0x3fb1cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fb1ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb1d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3fb1d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb1d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB1D8u;
        // 0x3fb1dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB1E0u;
}
