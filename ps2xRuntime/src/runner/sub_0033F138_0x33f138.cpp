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

// Function: sub_0033F138
// Address: 0x33f138 - 0x33f1f0
void sub_0033F138_0x33f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F138_0x33f138");
#endif

    switch (ctx->pc) {
        case 0x33f168u: goto label_33f168;
        case 0x33f180u: goto label_33f180;
        case 0x33f1a0u: goto label_33f1a0;
        case 0x33f1a8u: goto label_33f1a8;
        default: break;
    }

    ctx->pc = 0x33f138u;

    // 0x33f138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33f13c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33f13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33f140: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33f140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33f144: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33f144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f148: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33f148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33f14c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f154: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33f154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f158: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33f158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33f15c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x33f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33f160: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F160u;
    SET_GPR_U32(ctx, 31, 0x33F168u);
    ctx->pc = 0x33F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F160u;
    // 0x33f164: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F160u, 0x33F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F168u;
label_33f168:
    // 0x33f168: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33F168u;
    {
        const bool branch_taken_0x33f168 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F168u;
        // 0x33f16c: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f168) {
            ctx->pc = 0x33F1D4u;
            goto label_33f1d4;
        }
    }
    ctx->pc = 0x33F170u;
    // 0x33f170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33f174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f178: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x33F178u;
    SET_GPR_U32(ctx, 31, 0x33F180u);
    ctx->pc = 0x33F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F178u;
    // 0x33f17c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x33F178u, 0x33F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F180u;
label_33f180:
    // 0x33f180: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f184: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33F184u;
    {
        const bool branch_taken_0x33f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F184u;
        // 0x33f188: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f184) {
            ctx->pc = 0x33F1D4u;
            goto label_33f1d4;
        }
    }
    ctx->pc = 0x33F18Cu;
    // 0x33f18c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33f190: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33f190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33f194: 0x3012  mflo        $a2
    ctx->pc = 0x33f194u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33f198: 0xc103454  jal         func_40D150
    ctx->pc = 0x33F198u;
    SET_GPR_U32(ctx, 31, 0x33F1A0u);
    ctx->pc = 0x33F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F198u;
    // 0x33f19c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33F198u, 0x33F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F1A0u;
label_33f1a0:
    // 0x33f1a0: 0xc0d2612  jal         func_349848
    ctx->pc = 0x33F1A0u;
    SET_GPR_U32(ctx, 31, 0x33F1A8u);
    ctx->pc = 0x349848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349848u, 0x33F1A0u, 0x33F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F1A8u;
label_33f1a8:
    // 0x33f1a8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x33f1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33f1ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33F1ACu;
    {
        const bool branch_taken_0x33f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1ACu;
        // 0x33f1b0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1ac) {
            ctx->pc = 0x33F1D4u;
            goto label_33f1d4;
        }
    }
    ctx->pc = 0x33F1B4u;
    // 0x33f1b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f1b8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x33f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x33f1bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x33f1c0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x33f1c4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33f1c8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x33f1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33f1cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x33f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x33f1d0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x33f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_33f1d4:
    // 0x33f1d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33f1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f1d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33f1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f1dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33f1dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f1e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33f1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x33F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1E8u;
        // 0x33f1ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F1F0u;
}
