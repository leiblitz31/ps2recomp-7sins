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

// Function: sub_0016A090
// Address: 0x16a090 - 0x16a150
void sub_0016A090_0x16a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A090_0x16a090");
#endif

    switch (ctx->pc) {
        case 0x16a0c8u: goto label_16a0c8;
        case 0x16a104u: goto label_16a104;
        case 0x16a114u: goto label_16a114;
        default: break;
    }

    ctx->pc = 0x16a090u;

    // 0x16a090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x16a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16a094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x16a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16a098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16a09c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a0a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a0a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a0a8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x16a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x16a0ac: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x16a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a0b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a0b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a0b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a0bc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x16a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16a0c0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x16A0C0u;
    SET_GPR_U32(ctx, 31, 0x16A0C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x16A0C0u, 0x16A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A0C8u;
label_16a0c8:
    // 0x16a0c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0cc: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16A0CCu;
    {
        const bool branch_taken_0x16a0cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0cc) {
            ctx->pc = 0x16A128u;
            goto label_16a128;
        }
    }
    ctx->pc = 0x16A0D4u;
    // 0x16a0d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x16a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a0d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16a0dc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x16a0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0e0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x16a0e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x16a0e4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x16a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a0e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a0ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a0f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x16a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x16a0f4: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x16a0f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16a0f8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x16a0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A0FCu;
    {
        const bool branch_taken_0x16a0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a0fc) {
            ctx->pc = 0x16A118u;
            goto label_16a118;
        }
    }
    ctx->pc = 0x16A104u;
label_16a104:
    // 0x16a104: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x16a104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16a108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16a108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a10c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x16A10Cu;
    SET_GPR_U32(ctx, 31, 0x16A114u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x16A10Cu, 0x16A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A114u;
label_16a114:
    // 0x16a114: 0x26520028  addiu       $s2, $s2, 0x28
    ctx->pc = 0x16a114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_16a118:
    // 0x16a118: 0x0  nop
    ctx->pc = 0x16a118u;
    // NOP
    // 0x16a11c: 0x1653fff9  bne         $s2, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16A11Cu;
    {
        const bool branch_taken_0x16a11c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x16a11c) {
            ctx->pc = 0x16A104u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a104;
        }
    }
    ctx->pc = 0x16A124u;
    // 0x16a124: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x16a124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a128:
    // 0x16a128: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a12c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16a12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a130: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16a130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a13c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a140: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x16a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x16a144: 0x3e00008  jr          $ra
    ctx->pc = 0x16A144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A14Cu;
    // 0x16a14c: 0x0  nop
    ctx->pc = 0x16a14cu;
    // NOP
    ctx->pc = 0x16a150u;
}
