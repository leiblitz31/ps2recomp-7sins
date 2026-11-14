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

// Function: sub_002E3A50
// Address: 0x2e3a50 - 0x2e3b00
void sub_002E3A50_0x2e3a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3A50_0x2e3a50");
#endif

    switch (ctx->pc) {
        case 0x2e3ac0u: goto label_2e3ac0;
        case 0x2e3ae0u: goto label_2e3ae0;
        default: break;
    }

    ctx->pc = 0x2e3a50u;

    // 0x2e3a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e3a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3a58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e3a5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2e3a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e3a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a64: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E3A64u;
    {
        const bool branch_taken_0x2e3a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a64) {
            ctx->pc = 0x2E3AE0u;
            goto label_2e3ae0;
        }
    }
    ctx->pc = 0x2E3A6Cu;
    // 0x2e3a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3a74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E3A74u;
    {
        const bool branch_taken_0x2e3a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a74) {
            ctx->pc = 0x2E3AC0u;
            goto label_2e3ac0;
        }
    }
    ctx->pc = 0x2E3A7Cu;
    // 0x2e3a7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a80: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e3a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e3a8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3a90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3a94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e3a98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e3a9c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2e3a9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e3aa0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3AA0u;
    {
        const bool branch_taken_0x2e3aa0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e3aa0) {
            ctx->pc = 0x2E3AB0u;
            goto label_2e3ab0;
        }
    }
    ctx->pc = 0x2E3AA8u;
    // 0x2e3aa8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2e3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2e3aac: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2e3aacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2e3ab0:
    // 0x2e3ab0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e3ab4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2e3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e3ab8: 0xc0b9610  jal         func_2E5840
    ctx->pc = 0x2E3AB8u;
    SET_GPR_U32(ctx, 31, 0x2E3AC0u);
    ctx->pc = 0x2E5840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5840u, 0x2E3AB8u, 0x2E3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3AC0u;
label_2e3ac0:
    // 0x2e3ac0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2e3ac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3ac4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e3ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e3ac8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e3ac8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e3acc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3ACCu;
    {
        const bool branch_taken_0x2e3acc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e3acc) {
            ctx->pc = 0x2E3AE0u;
            goto label_2e3ae0;
        }
    }
    ctx->pc = 0x2E3AD4u;
    // 0x2e3ad4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e3ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3ad8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2E3AD8u;
    SET_GPR_U32(ctx, 31, 0x2E3AE0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2E3AD8u, 0x2E3AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3AE0u;
label_2e3ae0:
    // 0x2e3ae0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3ae8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e3ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3aec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3AF4u;
    // 0x2e3af4: 0x0  nop
    ctx->pc = 0x2e3af4u;
    // NOP
    // 0x2e3af8: 0x0  nop
    ctx->pc = 0x2e3af8u;
    // NOP
    // 0x2e3afc: 0x0  nop
    ctx->pc = 0x2e3afcu;
    // NOP
    ctx->pc = 0x2e3b00u;
}
