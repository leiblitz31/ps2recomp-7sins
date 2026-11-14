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

// Function: sub_00132490
// Address: 0x132490 - 0x132570
void sub_00132490_0x132490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132490_0x132490");
#endif

    switch (ctx->pc) {
        case 0x1324ccu: goto label_1324cc;
        case 0x132508u: goto label_132508;
        case 0x132518u: goto label_132518;
        case 0x132530u: goto label_132530;
        default: break;
    }

    ctx->pc = 0x132490u;

    // 0x132490: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x132490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x132494: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x132494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x132498: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x132498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13249c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1324a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1324a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1324a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1324a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1324a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1324a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1324ac: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x1324acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x1324b0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1324b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1324b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1324b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1324b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1324b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1324bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1324bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1324c0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x1324c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1324c4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1324C4u;
    SET_GPR_U32(ctx, 31, 0x1324CCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1324C4u, 0x1324CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1324CCu;
label_1324cc:
    // 0x1324cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1324ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1324d0: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1324D0u;
    {
        const bool branch_taken_0x1324d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1324d0) {
            ctx->pc = 0x132544u;
            goto label_132544;
        }
    }
    ctx->pc = 0x1324D8u;
    // 0x1324d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1324d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1324dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1324dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1324e0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1324e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1324e4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1324e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1324e8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1324e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1324ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1324ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1324f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1324f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1324f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1324f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1324f8: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x1324f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1324fc: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1324fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132500: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x132500u;
    {
        const bool branch_taken_0x132500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132500) {
            ctx->pc = 0x132538u;
            goto label_132538;
        }
    }
    ctx->pc = 0x132508u;
label_132508:
    // 0x132508: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x132508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13250c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132510: 0xc0400e0  jal         func_100380
    ctx->pc = 0x132510u;
    SET_GPR_U32(ctx, 31, 0x132518u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x132510u, 0x132518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132518u;
label_132518:
    // 0x132518: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x132518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13251c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13251Cu;
    {
        const bool branch_taken_0x13251c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13251c) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x132524u;
    // 0x132524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x132524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132528: 0xc04c95c  jal         func_132570
    ctx->pc = 0x132528u;
    SET_GPR_U32(ctx, 31, 0x132530u);
    ctx->pc = 0x132570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132570u, 0x132528u, 0x132530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132530u;
label_132530:
    // 0x132530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x132530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132534:
    // 0x132534: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x132534u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_132538:
    // 0x132538: 0x1674fff3  bne         $s3, $s4, . + 4 + (-0xD << 2)
    ctx->pc = 0x132538u;
    {
        const bool branch_taken_0x132538 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x132538) {
            ctx->pc = 0x132508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132508;
        }
    }
    ctx->pc = 0x132540u;
    // 0x132540: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x132540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_132544:
    // 0x132544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x132544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132548: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x132548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13254c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13254cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x132550: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x132550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x132554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x132554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x132558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13255c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13255cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132560: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x132560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x132564: 0x3e00008  jr          $ra
    ctx->pc = 0x132564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13256Cu;
    // 0x13256c: 0x0  nop
    ctx->pc = 0x13256cu;
    // NOP
    ctx->pc = 0x132570u;
}
