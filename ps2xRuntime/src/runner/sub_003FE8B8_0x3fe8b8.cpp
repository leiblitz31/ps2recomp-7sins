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

// Function: sub_003FE8B8
// Address: 0x3fe8b8 - 0x3fe968
void sub_003FE8B8_0x3fe8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FE8B8_0x3fe8b8");
#endif

    switch (ctx->pc) {
        case 0x3fe8e4u: goto label_3fe8e4;
        case 0x3fe8f8u: goto label_3fe8f8;
        case 0x3fe910u: goto label_3fe910;
        case 0x3fe920u: goto label_3fe920;
        default: break;
    }

    ctx->pc = 0x3fe8b8u;

    // 0x3fe8b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3fe8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3fe8bc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3fe8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3fe8c0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3fe8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x3fe8c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3fe8c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe8c8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3fe8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3fe8cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3fe8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3fe8d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3fe8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3fe8d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fe8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3fe8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fe8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fe8dc: 0xc0ff3be  jal         func_3FCEF8
    ctx->pc = 0x3FE8DCu;
    SET_GPR_U32(ctx, 31, 0x3FE8E4u);
    ctx->pc = 0x3FE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE8DCu;
    // 0x3fe8e0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FCEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FCEF8u, 0x3FE8DCu, 0x3FE8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE8E4u;
label_3fe8e4:
    // 0x3fe8e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3fe8e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe8e8: 0x1a800015  blez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FE8E8u;
    {
        const bool branch_taken_0x3fe8e8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x3FE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE8E8u;
        // 0x3fe8ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe8e8) {
            ctx->pc = 0x3FE940u;
            goto label_3fe940;
        }
    }
    ctx->pc = 0x3FE8F0u;
    // 0x3fe8f0: 0xde420180  ld          $v0, 0x180($s2)
    ctx->pc = 0x3fe8f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x3fe8f4: 0x0  nop
    ctx->pc = 0x3fe8f4u;
    // NOP
label_3fe8f8:
    // 0x3fe8f8: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x3fe8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fe8fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3FE8FCu;
    {
        const bool branch_taken_0x3fe8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE8FCu;
        // 0x3fe900: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe8fc) {
            ctx->pc = 0x3FE930u;
            goto label_3fe930;
        }
    }
    ctx->pc = 0x3FE904u;
    // 0x3fe904: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3fe904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe908: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3fe908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fe90c: 0x0  nop
    ctx->pc = 0x3fe90cu;
    // NOP
label_3fe910:
    // 0x3fe910: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe914: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x3fe914u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
    // 0x3fe918: 0xc0ff760  jal         func_3FDD80
    ctx->pc = 0x3FE918u;
    SET_GPR_U32(ctx, 31, 0x3FE920u);
    ctx->pc = 0x3FE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE918u;
    // 0x3fe91c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FDD80u, 0x3FE918u, 0x3FE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE920u;
label_3fe920:
    // 0x3fe920: 0xde420180  ld          $v0, 0x180($s2)
    ctx->pc = 0x3fe920u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x3fe924: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3fe924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fe928: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3FE928u;
    {
        const bool branch_taken_0x3fe928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe928) {
            ctx->pc = 0x3FE92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE928u;
            // 0x3fe92c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe910;
        }
    }
    ctx->pc = 0x3FE930u;
label_3fe930:
    // 0x3fe930: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x3fe930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe934: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x3fe934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3fe938: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3FE938u;
    {
        const bool branch_taken_0x3fe938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe938) {
            ctx->pc = 0x3FE93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE938u;
            // 0x3fe93c: 0xde420180  ld          $v0, 0x180($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fe8f8;
        }
    }
    ctx->pc = 0x3FE940u;
label_3fe940:
    // 0x3fe940: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3fe940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fe944: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3fe944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fe948: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3fe948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fe94c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3fe94cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fe950: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3fe950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fe954: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3fe954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fe958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fe958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fe95c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FE95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FE960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE95Cu;
        // 0x3fe960: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FE95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FE964u;
    // 0x3fe964: 0x0  nop
    ctx->pc = 0x3fe964u;
    // NOP
    ctx->pc = 0x3fe968u;
}
