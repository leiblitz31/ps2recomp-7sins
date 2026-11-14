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

// Function: sub_001FE050
// Address: 0x1fe050 - 0x1fe110
void sub_001FE050_0x1fe050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE050_0x1fe050");
#endif

    switch (ctx->pc) {
        case 0x1fe06cu: goto label_1fe06c;
        case 0x1fe0a4u: goto label_1fe0a4;
        case 0x1fe0f0u: goto label_1fe0f0;
        default: break;
    }

    ctx->pc = 0x1fe050u;

    // 0x1fe050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fe054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fe058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fe058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fe05c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1fe05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1fe060: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fe060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe064: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1FE064u;
    {
        const bool branch_taken_0x1fe064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe064) {
            ctx->pc = 0x1FE0BCu;
            goto label_1fe0bc;
        }
    }
    ctx->pc = 0x1FE06Cu;
label_1fe06c:
    // 0x1fe06c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fe06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe070: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fe070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fe074: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1fe074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1fe078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe07c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fe07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe080: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE080u;
    {
        const bool branch_taken_0x1fe080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe080) {
            ctx->pc = 0x1FE0B8u;
            goto label_1fe0b8;
        }
    }
    ctx->pc = 0x1FE088u;
    // 0x1fe088: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fe088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe08c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fe08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fe090: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1fe090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1fe094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fe098: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fe098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fe09c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1FE09Cu;
    SET_GPR_U32(ctx, 31, 0x1FE0A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1FE09Cu, 0x1FE0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0A4u;
label_1fe0a4:
    // 0x1fe0a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fe0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe0a8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fe0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fe0ac: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1fe0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1fe0b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe0b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fe0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1fe0b8:
    // 0x1fe0b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fe0bc:
    // 0x1fe0bc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fe0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fe0c0: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fe0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fe0c4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fe0c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fe0c8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FE0C8u;
    {
        const bool branch_taken_0x1fe0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0c8) {
            ctx->pc = 0x1FE06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe06c;
        }
    }
    ctx->pc = 0x1FE0D0u;
    // 0x1fe0d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fe0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe0d4: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1fe0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1fe0d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE0D8u;
    {
        const bool branch_taken_0x1fe0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0d8) {
            ctx->pc = 0x1FE0F8u;
            goto label_1fe0f8;
        }
    }
    ctx->pc = 0x1FE0E0u;
    // 0x1fe0e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fe0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe0e4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1fe0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1fe0e8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1FE0E8u;
    SET_GPR_U32(ctx, 31, 0x1FE0F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1FE0E8u, 0x1FE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0F0u;
label_1fe0f0:
    // 0x1fe0f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fe0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe0f4: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x1fe0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
label_1fe0f8:
    // 0x1fe0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fe0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe100: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fe100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fe104: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE10Cu;
    // 0x1fe10c: 0x0  nop
    ctx->pc = 0x1fe10cu;
    // NOP
    ctx->pc = 0x1fe110u;
}
