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

// Function: sub_0046A960
// Address: 0x46a960 - 0x46aa00
void sub_0046A960_0x46a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A960_0x46a960");
#endif

    switch (ctx->pc) {
        case 0x46a99cu: goto label_46a99c;
        case 0x46a9b8u: goto label_46a9b8;
        default: break;
    }

    ctx->pc = 0x46a960u;

    // 0x46a960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x46a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x46a964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x46a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x46a968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46a96c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46a970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46a974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46a978: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x46a978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x46a97c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x46a97cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x46a980: 0x26738060  addiu       $s3, $s3, -0x7FA0
    ctx->pc = 0x46a980u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294934624));
    // 0x46a984: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x46a984u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x46a988: 0x261080d0  addiu       $s0, $s0, -0x7F30
    ctx->pc = 0x46a988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934736));
    // 0x46a98c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x46a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x46a990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46a990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a994: 0xc04f000  jal         func_13C000
    ctx->pc = 0x46A994u;
    SET_GPR_U32(ctx, 31, 0x46A99Cu);
    ctx->pc = 0x13C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C000u, 0x46A994u, 0x46A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A99Cu;
label_46a99c:
    // 0x46a99c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x46a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a9a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46a9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a9a4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x46a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46a9a8: 0x83a7005c  lb          $a3, 0x5C($sp)
    ctx->pc = 0x46a9a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x46a9ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x46a9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a9b0: 0xc04f018  jal         func_13C060
    ctx->pc = 0x46A9B0u;
    SET_GPR_U32(ctx, 31, 0x46A9B8u);
    ctx->pc = 0x13C060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C060u, 0x46A9B0u, 0x46A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A9B8u;
label_46a9b8:
    // 0x46a9b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46a9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a9bc: 0x16300004  bne         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46A9BCu;
    {
        const bool branch_taken_0x46a9bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x46a9bc) {
            ctx->pc = 0x46A9D0u;
            goto label_46a9d0;
        }
    }
    ctx->pc = 0x46A9C4u;
    // 0x46a9c4: 0x8e12fffc  lw          $s2, -0x4($s0)
    ctx->pc = 0x46a9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x46a9c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46A9C8u;
    {
        const bool branch_taken_0x46a9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a9c8) {
            ctx->pc = 0x46A9D4u;
            goto label_46a9d4;
        }
    }
    ctx->pc = 0x46A9D0u;
label_46a9d0:
    // 0x46a9d0: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x46a9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46a9d4:
    // 0x46a9d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46a9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a9d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a9dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46a9dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a9e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46a9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46a9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a9ec: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x46a9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x46a9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x46A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A9F8u;
    // 0x46a9f8: 0x0  nop
    ctx->pc = 0x46a9f8u;
    // NOP
    // 0x46a9fc: 0x0  nop
    ctx->pc = 0x46a9fcu;
    // NOP
    ctx->pc = 0x46aa00u;
}
