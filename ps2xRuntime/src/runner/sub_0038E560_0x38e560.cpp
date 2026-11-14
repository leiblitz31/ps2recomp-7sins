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

// Function: sub_0038E560
// Address: 0x38e560 - 0x38e5c8
void sub_0038E560_0x38e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E560_0x38e560");
#endif

    switch (ctx->pc) {
        case 0x38e588u: goto label_38e588;
        case 0x38e5a0u: goto label_38e5a0;
        default: break;
    }

    ctx->pc = 0x38e560u;

    // 0x38e560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e564: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38e568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38e56c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e574: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38e574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e578: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38e578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e57c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x38e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38e580: 0xc103440  jal         func_40D100
    ctx->pc = 0x38E580u;
    SET_GPR_U32(ctx, 31, 0x38E588u);
    ctx->pc = 0x38E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E580u;
    // 0x38e584: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38E580u, 0x38E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E588u;
label_38e588:
    // 0x38e588: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38E588u;
    {
        const bool branch_taken_0x38e588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E588u;
        // 0x38e58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e588) {
            ctx->pc = 0x38E5ACu;
            goto label_38e5ac;
        }
    }
    ctx->pc = 0x38E590u;
    // 0x38e590: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x38e590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38e594: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38e594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e598: 0xc103440  jal         func_40D100
    ctx->pc = 0x38E598u;
    SET_GPR_U32(ctx, 31, 0x38E5A0u);
    ctx->pc = 0x38E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E598u;
    // 0x38e59c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38E598u, 0x38E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5A0u;
label_38e5a0:
    // 0x38e5a0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x38e5a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x38e5a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38E5A4u;
    {
        const bool branch_taken_0x38e5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5A4u;
        // 0x38e5a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5a4) {
            ctx->pc = 0x38E5B0u;
            goto label_38e5b0;
        }
    }
    ctx->pc = 0x38E5ACu;
label_38e5ac:
    // 0x38e5ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38e5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e5b0:
    // 0x38e5b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e5b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x38E5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5BCu;
        // 0x38e5c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E5C4u;
    // 0x38e5c4: 0x0  nop
    ctx->pc = 0x38e5c4u;
    // NOP
    ctx->pc = 0x38e5c8u;
}
