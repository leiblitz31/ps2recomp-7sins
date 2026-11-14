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

// Function: sub_004823F0
// Address: 0x4823f0 - 0x482490
void sub_004823F0_0x4823f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004823F0_0x4823f0");
#endif

    switch (ctx->pc) {
        case 0x48242cu: goto label_48242c;
        case 0x482448u: goto label_482448;
        default: break;
    }

    ctx->pc = 0x4823f0u;

    // 0x4823f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4823f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4823f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4823f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4823f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4823f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4823fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4823fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x482400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x482404: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482408: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x482408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x48240c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x48240cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x482410: 0x26738060  addiu       $s3, $s3, -0x7FA0
    ctx->pc = 0x482410u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934624));
    // 0x482414: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x482414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x482418: 0x261080d0  addiu       $s0, $s0, -0x7F30
    ctx->pc = 0x482418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934736));
    // 0x48241c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x48241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x482420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x482420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482424: 0xc04f000  jal         func_13C000
    ctx->pc = 0x482424u;
    SET_GPR_U32(ctx, 31, 0x48242Cu);
    ctx->pc = 0x13C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C000u, 0x482424u, 0x48242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48242Cu;
label_48242c:
    // 0x48242c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x482430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482434: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x482434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x482438: 0x83a7005c  lb          $a3, 0x5C($sp)
    ctx->pc = 0x482438u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x48243c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48243cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482440: 0xc04f018  jal         func_13C060
    ctx->pc = 0x482440u;
    SET_GPR_U32(ctx, 31, 0x482448u);
    ctx->pc = 0x13C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C060u, 0x482440u, 0x482448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482448u;
label_482448:
    // 0x482448: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x482448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48244c: 0x16300004  bne         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48244Cu;
    {
        const bool branch_taken_0x48244c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x48244c) {
            ctx->pc = 0x482460u;
            goto label_482460;
        }
    }
    ctx->pc = 0x482454u;
    // 0x482454: 0x8e12fffc  lw          $s2, -0x4($s0)
    ctx->pc = 0x482454u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x482458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x482458u;
    {
        const bool branch_taken_0x482458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x482458) {
            ctx->pc = 0x482464u;
            goto label_482464;
        }
    }
    ctx->pc = 0x482460u;
label_482460:
    // 0x482460: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x482460u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_482464:
    // 0x482464: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x482464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x482468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48246c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48246cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x482470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48247c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x48247cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x482480: 0x3e00008  jr          $ra
    ctx->pc = 0x482480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482488u;
    // 0x482488: 0x0  nop
    ctx->pc = 0x482488u;
    // NOP
    // 0x48248c: 0x0  nop
    ctx->pc = 0x48248cu;
    // NOP
    ctx->pc = 0x482490u;
}
