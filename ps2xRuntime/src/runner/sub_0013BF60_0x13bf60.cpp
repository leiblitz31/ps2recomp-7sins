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

// Function: sub_0013BF60
// Address: 0x13bf60 - 0x13c000
void sub_0013BF60_0x13bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BF60_0x13bf60");
#endif

    switch (ctx->pc) {
        case 0x13bf9cu: goto label_13bf9c;
        case 0x13bfb8u: goto label_13bfb8;
        default: break;
    }

    ctx->pc = 0x13bf60u;

    // 0x13bf60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13bf64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13bf68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13bf6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13bf70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13bf74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13bf78: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x13bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x13bf7c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x13bf7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x13bf80: 0x26738060  addiu       $s3, $s3, -0x7FA0
    ctx->pc = 0x13bf80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934624));
    // 0x13bf84: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x13bf84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x13bf88: 0x261080d0  addiu       $s0, $s0, -0x7F30
    ctx->pc = 0x13bf88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934736));
    // 0x13bf8c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x13bf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x13bf90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13bf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bf94: 0xc04f000  jal         func_13C000
    ctx->pc = 0x13BF94u;
    SET_GPR_U32(ctx, 31, 0x13BF9Cu);
    ctx->pc = 0x13C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C000u, 0x13BF94u, 0x13BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BF9Cu;
label_13bf9c:
    // 0x13bf9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13bf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13bfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfa4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x13bfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13bfa8: 0x83a7005c  lb          $a3, 0x5C($sp)
    ctx->pc = 0x13bfa8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x13bfac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13bfacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfb0: 0xc04f018  jal         func_13C060
    ctx->pc = 0x13BFB0u;
    SET_GPR_U32(ctx, 31, 0x13BFB8u);
    ctx->pc = 0x13C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C060u, 0x13BFB0u, 0x13BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BFB8u;
label_13bfb8:
    // 0x13bfb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13bfb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfbc: 0x16300004  bne         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13BFBCu;
    {
        const bool branch_taken_0x13bfbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x13bfbc) {
            ctx->pc = 0x13BFD0u;
            goto label_13bfd0;
        }
    }
    ctx->pc = 0x13BFC4u;
    // 0x13bfc4: 0x8e12fffc  lw          $s2, -0x4($s0)
    ctx->pc = 0x13bfc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x13bfc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13BFC8u;
    {
        const bool branch_taken_0x13bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bfc8) {
            ctx->pc = 0x13BFD4u;
            goto label_13bfd4;
        }
    }
    ctx->pc = 0x13BFD0u;
label_13bfd0:
    // 0x13bfd0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x13bfd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13bfd4:
    // 0x13bfd4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13bfd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bfd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bfdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bfdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bfe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bfe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bfe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bfe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bfe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bfec: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x13bfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13bff0: 0x3e00008  jr          $ra
    ctx->pc = 0x13BFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BFF8u;
    // 0x13bff8: 0x0  nop
    ctx->pc = 0x13bff8u;
    // NOP
    // 0x13bffc: 0x0  nop
    ctx->pc = 0x13bffcu;
    // NOP
    ctx->pc = 0x13c000u;
}
