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

// Function: sub_00381B88
// Address: 0x381b88 - 0x381bf8
void sub_00381B88_0x381b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381B88_0x381b88");
#endif

    switch (ctx->pc) {
        case 0x381ba4u: goto label_381ba4;
        case 0x381bdcu: goto label_381bdc;
        default: break;
    }

    ctx->pc = 0x381b88u;

    // 0x381b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381b90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x381b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x381b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x381b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381b98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381b9c: 0xc0c97b0  jal         func_325EC0
    ctx->pc = 0x381B9Cu;
    SET_GPR_U32(ctx, 31, 0x381BA4u);
    ctx->pc = 0x381BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381B9Cu;
    // 0x381ba0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325EC0u, 0x381B9Cu, 0x381BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381BA4u;
label_381ba4:
    // 0x381ba4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x381ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x381ba8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x381ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x381bac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x381bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x381bb0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x381bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x381bb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x381bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x381bb8: 0x24a5ac98  addiu       $a1, $a1, -0x5368
    ctx->pc = 0x381bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945944));
    // 0x381bbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x381bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x381bc0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x381bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x381bc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x381bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x381bc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x381bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x381bcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x381bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x381bd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x381bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x381bd4: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x381BD4u;
    SET_GPR_U32(ctx, 31, 0x381BDCu);
    ctx->pc = 0x381BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381BD4u;
    // 0x381bd8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x381BD4u, 0x381BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381BDCu;
label_381bdc:
    // 0x381bdc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x381bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x381be0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x381be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381be4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x381be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381be8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x381BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381BF0u;
        // 0x381bf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381BF8u;
}
