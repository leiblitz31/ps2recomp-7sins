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

// Function: sub_0023B920
// Address: 0x23b920 - 0x23b9f0
void sub_0023B920_0x23b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B920_0x23b920");
#endif

    switch (ctx->pc) {
        case 0x23b954u: goto label_23b954;
        case 0x23b988u: goto label_23b988;
        case 0x23b998u: goto label_23b998;
        default: break;
    }

    ctx->pc = 0x23b920u;

    // 0x23b920: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23b920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23b924: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23b924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23b928: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23b928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23b92c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23b92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23b930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b93c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x23b93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x23b940: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23b940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23b944: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b948: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x23b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23b94c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x23B94Cu;
    SET_GPR_U32(ctx, 31, 0x23B954u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x23B94Cu, 0x23B954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B954u;
label_23b954:
    // 0x23b954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b958: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23B958u;
    {
        const bool branch_taken_0x23b958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b958) {
            ctx->pc = 0x23B9C0u;
            goto label_23b9c0;
        }
    }
    ctx->pc = 0x23B960u;
    // 0x23b960: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23b960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23b964: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23b964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23b968: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x23b968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b96c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x23b96cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x23b970: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x23b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23b974: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23b978: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x23b978u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23b97c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x23b97cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b980: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23B980u;
    {
        const bool branch_taken_0x23b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b980) {
            ctx->pc = 0x23B9B4u;
            goto label_23b9b4;
        }
    }
    ctx->pc = 0x23B988u;
label_23b988:
    // 0x23b988: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23b988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23b98c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23b98cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b990: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23B990u;
    SET_GPR_U32(ctx, 31, 0x23B998u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23B990u, 0x23B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B998u;
label_23b998:
    // 0x23b998: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x23b998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x23b99c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B99Cu;
    {
        const bool branch_taken_0x23b99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b99c) {
            ctx->pc = 0x23B9ACu;
            goto label_23b9ac;
        }
    }
    ctx->pc = 0x23B9A4u;
    // 0x23b9a4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x23b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x23b9a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_23b9ac:
    // 0x23b9ac: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x23b9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x23b9b0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x23b9b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_23b9b4:
    // 0x23b9b4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x23B9B4u;
    {
        const bool branch_taken_0x23b9b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x23b9b4) {
            ctx->pc = 0x23B988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b988;
        }
    }
    ctx->pc = 0x23B9BCu;
    // 0x23b9bc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x23b9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b9c0:
    // 0x23b9c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23b9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b9c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23b9c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23b9c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b9cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23b9ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b9d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b9d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b9d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b9d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b9d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b9d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b9dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x23b9dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x23b9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x23B9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B9E8u;
    // 0x23b9e8: 0x0  nop
    ctx->pc = 0x23b9e8u;
    // NOP
    // 0x23b9ec: 0x0  nop
    ctx->pc = 0x23b9ecu;
    // NOP
    ctx->pc = 0x23b9f0u;
}
