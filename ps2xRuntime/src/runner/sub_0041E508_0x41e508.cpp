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

// Function: sub_0041E508
// Address: 0x41e508 - 0x41e5d0
void sub_0041E508_0x41e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E508_0x41e508");
#endif

    switch (ctx->pc) {
        case 0x41e568u: goto label_41e568;
        case 0x41e588u: goto label_41e588;
        case 0x41e5a0u: goto label_41e5a0;
        default: break;
    }

    ctx->pc = 0x41e508u;

    // 0x41e508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41e508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x41e50c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x41e510: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41e510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x41e514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41e514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41e518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41e518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x41e51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41e51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41e520: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x41e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x41e524: 0x92330003  lbu         $s3, 0x3($s1)
    ctx->pc = 0x41e524u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x41e528: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x41e528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
    // 0x41e52c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x41E52Cu;
    {
        const bool branch_taken_0x41e52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e52c) {
            ctx->pc = 0x41E530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E52Cu;
            // 0x41e530: 0x8e300098  lw          $s0, 0x98($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E558u;
            goto label_41e558;
        }
    }
    ctx->pc = 0x41E534u;
    // 0x41e534: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x41e534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x41e538: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x41e538u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x41e53c: 0x7a240030  lq          $a0, 0x30($s1)
    ctx->pc = 0x41e53cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x41e540: 0x7a250040  lq          $a1, 0x40($s1)
    ctx->pc = 0x41e540u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x41e544: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x41e544u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x41e548: 0x7e230060  sq          $v1, 0x60($s1)
    ctx->pc = 0x41e548u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 3));
    // 0x41e54c: 0x7e240070  sq          $a0, 0x70($s1)
    ctx->pc = 0x41e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 4));
    // 0x41e550: 0x7e250080  sq          $a1, 0x80($s1)
    ctx->pc = 0x41e550u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 5));
    // 0x41e554: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x41e554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_41e558:
    // 0x41e558: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x41E558u;
    {
        const bool branch_taken_0x41e558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E558u;
        // 0x41e55c: 0x326200fa  andi        $v0, $s3, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)250);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e558) {
            ctx->pc = 0x41E5B0u;
            goto label_41e5b0;
        }
    }
    ctx->pc = 0x41E560u;
    // 0x41e560: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x41e560u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x41e564: 0x0  nop
    ctx->pc = 0x41e564u;
    // NOP
label_41e568:
    // 0x41e568: 0x2629025  or          $s2, $s3, $v0
    ctx->pc = 0x41e568u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x41e56c: 0x32430004  andi        $v1, $s2, 0x4
    ctx->pc = 0x41e56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x41e570: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x41E570u;
    {
        const bool branch_taken_0x41e570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E570u;
        // 0x41e574: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e570) {
            ctx->pc = 0x41E594u;
            goto label_41e594;
        }
    }
    ctx->pc = 0x41E578u;
    // 0x41e578: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x41e578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x41e57c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x41e57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x41e580: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x41E580u;
    SET_GPR_U32(ctx, 31, 0x41E588u);
    ctx->pc = 0x41E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E580u;
    // 0x41e584: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x41E580u, 0x41E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E588u;
label_41e588:
    // 0x41e588: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x41e588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x41e58c: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x41e58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x41e590: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x41e590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_41e594:
    // 0x41e594: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x41e594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x41e598: 0xc1079c8  jal         func_41E720
    ctx->pc = 0x41E598u;
    SET_GPR_U32(ctx, 31, 0x41E5A0u);
    ctx->pc = 0x41E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41E598u;
    // 0x41e59c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E720u, 0x41E598u, 0x41E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41E5A0u;
label_41e5a0:
    // 0x41e5a0: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x41e5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x41e5a4: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x41E5A4u;
    {
        const bool branch_taken_0x41e5a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e5a4) {
            ctx->pc = 0x41E5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41E5A4u;
            // 0x41e5a8: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41E568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41e568;
        }
    }
    ctx->pc = 0x41E5ACu;
    // 0x41e5ac: 0x326200fa  andi        $v0, $s3, 0xFA
    ctx->pc = 0x41e5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)250);
label_41e5b0:
    // 0x41e5b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41e5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41e5b4: 0xa2220003  sb          $v0, 0x3($s1)
    ctx->pc = 0x41e5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41e5b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41e5b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41e5bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41e5bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41e5c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x41e5c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41e5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41e5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x41E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5C8u;
        // 0x41e5cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41E5D0u;
}
