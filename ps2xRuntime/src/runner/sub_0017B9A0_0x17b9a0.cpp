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

// Function: sub_0017B9A0
// Address: 0x17b9a0 - 0x17ba50
void sub_0017B9A0_0x17b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B9A0_0x17b9a0");
#endif

    switch (ctx->pc) {
        case 0x17ba10u: goto label_17ba10;
        case 0x17ba30u: goto label_17ba30;
        default: break;
    }

    ctx->pc = 0x17b9a0u;

    // 0x17b9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b9a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17b9ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17b9acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17b9b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x17B9B4u;
    {
        const bool branch_taken_0x17b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b9b4) {
            ctx->pc = 0x17BA30u;
            goto label_17ba30;
        }
    }
    ctx->pc = 0x17B9BCu;
    // 0x17b9bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b9c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17B9C4u;
    {
        const bool branch_taken_0x17b9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b9c4) {
            ctx->pc = 0x17BA10u;
            goto label_17ba10;
        }
    }
    ctx->pc = 0x17B9CCu;
    // 0x17b9cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17b9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9d0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x17b9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x17b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17b9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b9e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b9e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x17b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b9e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b9ec: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x17b9ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x17b9f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B9F0u;
    {
        const bool branch_taken_0x17b9f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17b9f0) {
            ctx->pc = 0x17BA00u;
            goto label_17ba00;
        }
    }
    ctx->pc = 0x17B9F8u;
    // 0x17b9f8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x17b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x17b9fc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x17b9fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_17ba00:
    // 0x17ba00: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x17ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17ba04: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x17ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ba08: 0xc05ff7c  jal         func_17FDF0
    ctx->pc = 0x17BA08u;
    SET_GPR_U32(ctx, 31, 0x17BA10u);
    ctx->pc = 0x17FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FDF0u, 0x17BA08u, 0x17BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA10u;
label_17ba10:
    // 0x17ba10: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17ba10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ba14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17ba18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17ba18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17ba1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BA1Cu;
    {
        const bool branch_taken_0x17ba1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17ba1c) {
            ctx->pc = 0x17BA30u;
            goto label_17ba30;
        }
    }
    ctx->pc = 0x17BA24u;
    // 0x17ba24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ba28: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17BA28u;
    SET_GPR_U32(ctx, 31, 0x17BA30u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17BA28u, 0x17BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA30u;
label_17ba30:
    // 0x17ba30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ba34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ba34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17ba38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ba3c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA44u;
    // 0x17ba44: 0x0  nop
    ctx->pc = 0x17ba44u;
    // NOP
    // 0x17ba48: 0x0  nop
    ctx->pc = 0x17ba48u;
    // NOP
    // 0x17ba4c: 0x0  nop
    ctx->pc = 0x17ba4cu;
    // NOP
    ctx->pc = 0x17ba50u;
}
