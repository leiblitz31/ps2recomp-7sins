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

// Function: sub_0048FB40
// Address: 0x48fb40 - 0x48fbe0
void sub_0048FB40_0x48fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FB40_0x48fb40");
#endif

    switch (ctx->pc) {
        case 0x48fb7cu: goto label_48fb7c;
        case 0x48fb98u: goto label_48fb98;
        default: break;
    }

    ctx->pc = 0x48fb40u;

    // 0x48fb40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x48fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x48fb44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x48fb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x48fb48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48fb4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48fb50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48fb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48fb54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48fb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48fb58: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x48fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x48fb5c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x48fb5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x48fb60: 0x26738060  addiu       $s3, $s3, -0x7FA0
    ctx->pc = 0x48fb60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934624));
    // 0x48fb64: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x48fb64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x48fb68: 0x261080d0  addiu       $s0, $s0, -0x7F30
    ctx->pc = 0x48fb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934736));
    // 0x48fb6c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x48fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x48fb70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48fb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fb74: 0xc04f000  jal         func_13C000
    ctx->pc = 0x48FB74u;
    SET_GPR_U32(ctx, 31, 0x48FB7Cu);
    ctx->pc = 0x13C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C000u, 0x48FB74u, 0x48FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FB7Cu;
label_48fb7c:
    // 0x48fb7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x48fb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fb80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48fb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fb84: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x48fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x48fb88: 0x83a7005c  lb          $a3, 0x5C($sp)
    ctx->pc = 0x48fb88u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x48fb8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48fb8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fb90: 0xc04f018  jal         func_13C060
    ctx->pc = 0x48FB90u;
    SET_GPR_U32(ctx, 31, 0x48FB98u);
    ctx->pc = 0x13C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C060u, 0x48FB90u, 0x48FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FB98u;
label_48fb98:
    // 0x48fb98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48fb98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fb9c: 0x16300004  bne         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48FB9Cu;
    {
        const bool branch_taken_0x48fb9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x48fb9c) {
            ctx->pc = 0x48FBB0u;
            goto label_48fbb0;
        }
    }
    ctx->pc = 0x48FBA4u;
    // 0x48fba4: 0x8e12fffc  lw          $s2, -0x4($s0)
    ctx->pc = 0x48fba4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x48fba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48FBA8u;
    {
        const bool branch_taken_0x48fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48fba8) {
            ctx->pc = 0x48FBB4u;
            goto label_48fbb4;
        }
    }
    ctx->pc = 0x48FBB0u;
label_48fbb0:
    // 0x48fbb0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x48fbb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_48fbb4:
    // 0x48fbb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x48fbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fbb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48fbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48fbbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48fbbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48fbc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48fbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fbc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48fbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fbc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48fbc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fbcc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x48fbccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x48fbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x48FBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FBD8u;
    // 0x48fbd8: 0x0  nop
    ctx->pc = 0x48fbd8u;
    // NOP
    // 0x48fbdc: 0x0  nop
    ctx->pc = 0x48fbdcu;
    // NOP
    ctx->pc = 0x48fbe0u;
}
