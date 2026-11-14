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

// Function: sub_00286B20
// Address: 0x286b20 - 0x286bf0
void sub_00286B20_0x286b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286B20_0x286b20");
#endif

    switch (ctx->pc) {
        case 0x286b54u: goto label_286b54;
        case 0x286b88u: goto label_286b88;
        case 0x286b98u: goto label_286b98;
        default: break;
    }

    ctx->pc = 0x286b20u;

    // 0x286b20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x286b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x286b24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x286b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x286b28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x286b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x286b2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x286b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x286b30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x286b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x286b34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x286b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x286b38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x286b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x286b3c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x286b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x286b40: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x286b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286b44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286b48: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x286b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x286b4c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x286B4Cu;
    SET_GPR_U32(ctx, 31, 0x286B54u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x286B4Cu, 0x286B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B54u;
label_286b54:
    // 0x286b54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x286b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b58: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x286B58u;
    {
        const bool branch_taken_0x286b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b58) {
            ctx->pc = 0x286BC0u;
            goto label_286bc0;
        }
    }
    ctx->pc = 0x286B60u;
    // 0x286b60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x286b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286b64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x286b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x286b68: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x286b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b6c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x286b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x286b70: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x286b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286b78: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x286b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x286b7c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x286b7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x286B80u;
    {
        const bool branch_taken_0x286b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b80) {
            ctx->pc = 0x286BB4u;
            goto label_286bb4;
        }
    }
    ctx->pc = 0x286B88u;
label_286b88:
    // 0x286b88: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x286b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286b90: 0xc0400e0  jal         func_100380
    ctx->pc = 0x286B90u;
    SET_GPR_U32(ctx, 31, 0x286B98u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x286B90u, 0x286B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286B98u;
label_286b98:
    // 0x286b98: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x286b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x286b9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286B9Cu;
    {
        const bool branch_taken_0x286b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b9c) {
            ctx->pc = 0x286BACu;
            goto label_286bac;
        }
    }
    ctx->pc = 0x286BA4u;
    // 0x286ba4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x286ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x286ba8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x286ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_286bac:
    // 0x286bac: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x286bacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x286bb0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x286bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_286bb4:
    // 0x286bb4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x286BB4u;
    {
        const bool branch_taken_0x286bb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x286bb4) {
            ctx->pc = 0x286B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286b88;
        }
    }
    ctx->pc = 0x286BBCu;
    // 0x286bbc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x286bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_286bc0:
    // 0x286bc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x286bc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286bc4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x286bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286bc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x286bc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286bcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x286bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x286bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286bd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x286bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286bd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x286bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286bdc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x286bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x286be0: 0x3e00008  jr          $ra
    ctx->pc = 0x286BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286BE8u;
    // 0x286be8: 0x0  nop
    ctx->pc = 0x286be8u;
    // NOP
    // 0x286bec: 0x0  nop
    ctx->pc = 0x286becu;
    // NOP
    ctx->pc = 0x286bf0u;
}
