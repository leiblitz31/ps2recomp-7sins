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

// Function: sub_0045E960
// Address: 0x45e960 - 0x45ea20
void sub_0045E960_0x45e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E960_0x45e960");
#endif

    switch (ctx->pc) {
        case 0x45e998u: goto label_45e998;
        case 0x45e9d4u: goto label_45e9d4;
        case 0x45e9e4u: goto label_45e9e4;
        default: break;
    }

    ctx->pc = 0x45e960u;

    // 0x45e960: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x45e960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x45e964: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45e968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45e96c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45e970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45e970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45e974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45e974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45e978: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x45e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x45e97c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x45e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45e980: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x45e980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x45e984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e988: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45e988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45e98c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45e990: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x45E990u;
    SET_GPR_U32(ctx, 31, 0x45E998u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x45E990u, 0x45E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E998u;
label_45e998:
    // 0x45e998: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45e998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e99c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x45E99Cu;
    {
        const bool branch_taken_0x45e99c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e99c) {
            ctx->pc = 0x45E9F8u;
            goto label_45e9f8;
        }
    }
    ctx->pc = 0x45E9A4u;
    // 0x45e9a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x45e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45e9a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x45e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x45e9ac: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x45e9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e9b0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x45e9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x45e9b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x45e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45e9b8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x45e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x45e9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45e9c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45e9c4: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x45e9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x45e9c8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x45e9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e9cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x45E9CCu;
    {
        const bool branch_taken_0x45e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45e9cc) {
            ctx->pc = 0x45E9E8u;
            goto label_45e9e8;
        }
    }
    ctx->pc = 0x45E9D4u;
label_45e9d4:
    // 0x45e9d4: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x45e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x45e9d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x45e9d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e9dc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x45E9DCu;
    SET_GPR_U32(ctx, 31, 0x45E9E4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x45E9DCu, 0x45E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45E9E4u;
label_45e9e4:
    // 0x45e9e4: 0x26520110  addiu       $s2, $s2, 0x110
    ctx->pc = 0x45e9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_45e9e8:
    // 0x45e9e8: 0x0  nop
    ctx->pc = 0x45e9e8u;
    // NOP
    // 0x45e9ec: 0x1653fff9  bne         $s2, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x45E9ECu;
    {
        const bool branch_taken_0x45e9ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x45e9ec) {
            ctx->pc = 0x45E9D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45e9d4;
        }
    }
    ctx->pc = 0x45E9F4u;
    // 0x45e9f4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x45e9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45e9f8:
    // 0x45e9f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x45e9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e9fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45e9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ea00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45ea00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45ea04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45ea04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45ea08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45ea08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45ea0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45ea0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ea10: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x45ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x45ea14: 0x3e00008  jr          $ra
    ctx->pc = 0x45EA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EA1Cu;
    // 0x45ea1c: 0x0  nop
    ctx->pc = 0x45ea1cu;
    // NOP
    ctx->pc = 0x45ea20u;
}
