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

// Function: sub_0020A9D0
// Address: 0x20a9d0 - 0x20aa90
void sub_0020A9D0_0x20a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A9D0_0x20a9d0");
#endif

    switch (ctx->pc) {
        case 0x20aa08u: goto label_20aa08;
        case 0x20aa44u: goto label_20aa44;
        case 0x20aa54u: goto label_20aa54;
        default: break;
    }

    ctx->pc = 0x20a9d0u;

    // 0x20a9d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x20a9d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20a9d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20a9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20a9e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20a9e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a9e8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x20a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x20a9ec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20a9f0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20a9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a9f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a9fc: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20aa00: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x20AA00u;
    SET_GPR_U32(ctx, 31, 0x20AA08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x20AA00u, 0x20AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA08u;
label_20aa08:
    // 0x20aa08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20aa08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa0c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20AA0Cu;
    {
        const bool branch_taken_0x20aa0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aa0c) {
            ctx->pc = 0x20AA68u;
            goto label_20aa68;
        }
    }
    ctx->pc = 0x20AA14u;
    // 0x20aa14: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x20aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20aa18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20aa1c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x20aa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa20: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20aa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x20aa24: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x20aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20aa28: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x20aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x20aa2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20aa30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20aa34: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x20aa34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x20aa38: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x20aa38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20AA3Cu;
    {
        const bool branch_taken_0x20aa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aa3c) {
            ctx->pc = 0x20AA58u;
            goto label_20aa58;
        }
    }
    ctx->pc = 0x20AA44u;
label_20aa44:
    // 0x20aa44: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x20aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x20aa48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20aa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa4c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x20AA4Cu;
    SET_GPR_U32(ctx, 31, 0x20AA54u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x20AA4Cu, 0x20AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AA54u;
label_20aa54:
    // 0x20aa54: 0x26520024  addiu       $s2, $s2, 0x24
    ctx->pc = 0x20aa54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_20aa58:
    // 0x20aa58: 0x0  nop
    ctx->pc = 0x20aa58u;
    // NOP
    // 0x20aa5c: 0x1653fff9  bne         $s2, $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20AA5Cu;
    {
        const bool branch_taken_0x20aa5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x20aa5c) {
            ctx->pc = 0x20AA44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aa44;
        }
    }
    ctx->pc = 0x20AA64u;
    // 0x20aa64: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20aa68:
    // 0x20aa68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20aa68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20aa6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20aa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20aa70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20aa70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20aa74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20aa74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20aa78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20aa78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aa7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20aa7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aa80: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x20aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20aa84: 0x3e00008  jr          $ra
    ctx->pc = 0x20AA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AA8Cu;
    // 0x20aa8c: 0x0  nop
    ctx->pc = 0x20aa8cu;
    // NOP
    ctx->pc = 0x20aa90u;
}
