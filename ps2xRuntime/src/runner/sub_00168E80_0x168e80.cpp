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

// Function: sub_00168E80
// Address: 0x168e80 - 0x168ef0
void sub_00168E80_0x168e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E80_0x168e80");
#endif

    switch (ctx->pc) {
        case 0x168ec0u: goto label_168ec0;
        case 0x168eccu: goto label_168ecc;
        default: break;
    }

    ctx->pc = 0x168e80u;

    // 0x168e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168e84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168e90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x168e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x168e94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x168e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168e98: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x168e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x168e9c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x168e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168ea0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x168ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x168ea4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x168ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x168ea8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x168eac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x168eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168eb0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x168eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168eb4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x168eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168eb8: 0xc05a3bc  jal         func_168EF0
    ctx->pc = 0x168EB8u;
    SET_GPR_U32(ctx, 31, 0x168EC0u);
    ctx->pc = 0x168EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168EF0u, 0x168EB8u, 0x168EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EC0u;
label_168ec0:
    // 0x168ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ec4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x168EC4u;
    SET_GPR_U32(ctx, 31, 0x168ECCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x168EC4u, 0x168ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168ECCu;
label_168ecc:
    // 0x168ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x168ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ed8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x168ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x168edc: 0x3e00008  jr          $ra
    ctx->pc = 0x168EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168EE4u;
    // 0x168ee4: 0x0  nop
    ctx->pc = 0x168ee4u;
    // NOP
    // 0x168ee8: 0x0  nop
    ctx->pc = 0x168ee8u;
    // NOP
    // 0x168eec: 0x0  nop
    ctx->pc = 0x168eecu;
    // NOP
    ctx->pc = 0x168ef0u;
}
