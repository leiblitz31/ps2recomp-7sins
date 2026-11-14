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

// Function: sub_004AE4C0
// Address: 0x4ae4c0 - 0x4ae530
void sub_004AE4C0_0x4ae4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE4C0_0x4ae4c0");
#endif

    switch (ctx->pc) {
        case 0x4ae4e0u: goto label_4ae4e0;
        case 0x4ae51cu: goto label_4ae51c;
        default: break;
    }

    ctx->pc = 0x4ae4c0u;

    // 0x4ae4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ae4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ae4c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ae4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ae4c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae4cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ae4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ae4d0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x4ae4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x4ae4d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ae4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae4d8: 0xc0bf6d8  jal         func_2FDB60
    ctx->pc = 0x4AE4D8u;
    SET_GPR_U32(ctx, 31, 0x4AE4E0u);
    ctx->pc = 0x4AE4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE4D8u;
    // 0x4ae4dc: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB60u, 0x4AE4D8u, 0x4AE4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE4E0u;
label_4ae4e0:
    // 0x4ae4e0: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x4ae4e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4ae4e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ae4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ae4e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ae4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae4ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ae4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae4f0: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x4ae4f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x4ae4f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ae4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE4F8u;
        // 0x4ae4fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE500u;
    // 0x4ae500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae504: 0x8f83b8a4  lw          $v1, -0x475C($gp)
    ctx->pc = 0x4ae504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949028)));
    // 0x4ae508: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4ae508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ae50c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE50Cu;
    {
        const bool branch_taken_0x4ae50c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE50Cu;
        // 0x4ae510: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae50c) {
            ctx->pc = 0x4AE51Cu;
            goto label_4ae51c;
        }
    }
    ctx->pc = 0x4AE514u;
    // 0x4ae514: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x4AE514u;
    SET_GPR_U32(ctx, 31, 0x4AE51Cu);
    ctx->pc = 0x4AE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE514u;
    // 0x4ae518: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x4AE514u, 0x4AE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE51Cu;
label_4ae51c:
    // 0x4ae51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ae520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae524: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE524u;
        // 0x4ae528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE52Cu;
    // 0x4ae52c: 0x0  nop
    ctx->pc = 0x4ae52cu;
    // NOP
    ctx->pc = 0x4ae530u;
}
