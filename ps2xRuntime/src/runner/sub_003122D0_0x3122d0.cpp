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

// Function: sub_003122D0
// Address: 0x3122d0 - 0x312330
void sub_003122D0_0x3122d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003122D0_0x3122d0");
#endif

    switch (ctx->pc) {
        case 0x312300u: goto label_312300;
        case 0x312310u: goto label_312310;
        default: break;
    }

    ctx->pc = 0x3122d0u;

    // 0x3122d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3122d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3122d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3122d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3122d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3122d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3122dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3122dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3122e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3122e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3122e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3122e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3122e8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3122E8u;
    {
        const bool branch_taken_0x3122e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3122ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122E8u;
        // 0x3122ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122e8) {
            ctx->pc = 0x312318u;
            goto label_312318;
        }
    }
    ctx->pc = 0x3122F0u;
    // 0x3122f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3122F0u;
    {
        const bool branch_taken_0x3122f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3122F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3122F0u;
        // 0x3122f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3122f0) {
            ctx->pc = 0x312318u;
            goto label_312318;
        }
    }
    ctx->pc = 0x3122F8u;
    // 0x3122f8: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3122F8u;
    SET_GPR_U32(ctx, 31, 0x312300u);
    ctx->pc = 0x3122FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3122F8u;
    // 0x3122fc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3122F8u, 0x312300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312300u;
label_312300:
    // 0x312300: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312300u;
    {
        const bool branch_taken_0x312300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312300u;
        // 0x312304: 0x83a50000  lb          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312300) {
            ctx->pc = 0x312318u;
            goto label_312318;
        }
    }
    ctx->pc = 0x312308u;
    // 0x312308: 0xc0c4860  jal         func_312180
    ctx->pc = 0x312308u;
    SET_GPR_U32(ctx, 31, 0x312310u);
    ctx->pc = 0x31230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312308u;
    // 0x31230c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312180u, 0x312308u, 0x312310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312310u;
label_312310:
    // 0x312310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x312310u;
    {
        const bool branch_taken_0x312310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312310u;
        // 0x312314: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312310) {
            ctx->pc = 0x31231Cu;
            goto label_31231c;
        }
    }
    ctx->pc = 0x312318u;
label_312318:
    // 0x312318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31231c:
    // 0x31231c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31231cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312320: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x312320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312324: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312328: 0x3e00008  jr          $ra
    ctx->pc = 0x312328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312328u;
        // 0x31232c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312330u;
}
